#include "MyForm.h"

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
