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

        ResourceStore^ res_store = gcnew ResourceStore();
        ComponentResourceManager^ resx_manager = res_store->resx_manager;

        this->BackgroundImage = safe_cast<System::Drawing::Bitmap^>(resx_manager->GetObject(L"FB"));
        this->BackgroundImageLayout = ImageLayout::Center;
        this->Text = resx_manager->GetString(L"lblTest") + " & " + resx_manager->GetString(L"lblFB");
    }

    MyForm::~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }
}