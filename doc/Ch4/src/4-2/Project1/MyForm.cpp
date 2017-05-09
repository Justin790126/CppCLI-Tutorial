#include "MyForm.h"

namespace Project1 {

    MyForm::MyForm(void)
    {
        InitializeComponent();
        //
        //TODO: Add the constructor code here
        //
        Logger^ logger = gcnew Logger();

        logger->Log("Hello logger log!!");
        logger->Debug("Heollo logger debug!!");
    }

    MyForm::~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }
}