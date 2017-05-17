#include "MyForm.h"

using namespace Newtonsoft;
using namespace Newtonsoft::Json;
using namespace System::IO;

namespace Project1 {

    MyForm::MyForm(void)
    {
        InitializeComponent();
        //
        //TODO: Add the constructor code here
        //
        Logger^ logger = gcnew Logger();

        System::String^ msg = System::String::Format("My name is {0}, My wife name is {1}", "Justin", "Anna");
        logger->Log(msg);
        logger->Debug(msg);

        this->lblName->Text = "Justin chang";
        this->lblName->MouseLeave += gcnew System::EventHandler(this, &Project1::MyForm::OnMouseLeave);

        SubForm^ form = gcnew SubForm();
        form->BtnClicked += gcnew Project1::Del_BtnClicked(this, &Project1::MyForm::OnBtnClicked);
        form->Show();
        /*MessageBox::Show(form->SecreteString);

        form->SecreteString = "New secrete string is shown";
        MessageBox::Show(form->SecreteString);*/
        this->Controls->Add(ctrl);

        System::String^ json = JsonConvert::SerializeObject(this->lblName->Text);
        //MessageBox::Show(json); // Comment this
        System::String^ output = "./test.json";
        File::WriteAllText(output, json);

        // Read file
        StreamReader^ file = nullptr;
        try{
            file = File::OpenText(output);
        }
        catch (System::Exception^ ex) {
            Console::WriteLine(ex->Message);
        }
       
        JsonSerializer^ ser = gcnew JsonSerializer();
        System::String^ result = (System::String^)ser->Deserialize(file, output->GetType());

        file->Close();
        
        MessageBox::Show(System::String::Format("Read Json file, and get result of {0}",result));
    }

    MyForm::~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }
}

void Project1::MyForm::OnMouseLeave(System::Object ^sender, System::EventArgs ^e)
{
    Label^ lbl = (Label^)sender;
    lbl->Text = "Justin chang on mouse leave";
}


void Project1::MyForm::OnBtnClicked(System::String ^msg)
{
    this->lblShowCallBack->Text = msg;
    MessageBox::Show(msg);
}
