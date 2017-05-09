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
    }

    MyForm::~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }
}