#include "MyForm.h"

using namespace Newtonsoft;

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

        System::String^ json = Json::JsonConvert::SerializeObject(this->lblName->Text);
        MessageBox::Show(json);
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
