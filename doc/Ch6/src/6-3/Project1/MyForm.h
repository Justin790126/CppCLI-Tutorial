#pragma once

#include "Logger.h"
#include "SubForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
        MyForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
        ~MyForm();
    private: System::Windows::Forms::Label^  lblName;
    private: System::Windows::Forms::Button^  btnOpenSubForm;
    private: System::Windows::Forms::Label^  lblShowCallBack;

    protected:

    protected:

    protected:
    private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->lblName = (gcnew System::Windows::Forms::Label());
            this->btnOpenSubForm = (gcnew System::Windows::Forms::Button());
            this->lblShowCallBack = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // lblName
            // 
            this->lblName->Location = System::Drawing::Point(68, 110);
            this->lblName->Name = L"lblName";
            this->lblName->Size = System::Drawing::Size(135, 39);
            this->lblName->TabIndex = 0;
            this->lblName->Text = L"label1";
            this->lblName->MouseHover += gcnew System::EventHandler(this, &MyForm::lblName_MouseHover);
            // 
            // btnOpenSubForm
            // 
            this->btnOpenSubForm->Location = System::Drawing::Point(79, 165);
            this->btnOpenSubForm->Name = L"btnOpenSubForm";
            this->btnOpenSubForm->Size = System::Drawing::Size(113, 23);
            this->btnOpenSubForm->TabIndex = 1;
            this->btnOpenSubForm->Text = L"Open SubForm";
            this->btnOpenSubForm->UseVisualStyleBackColor = true;
            this->btnOpenSubForm->Click += gcnew System::EventHandler(this, &MyForm::btnOpenSubForm_Click);
            // 
            // lblShowCallBack
            // 
            this->lblShowCallBack->AutoSize = true;
            this->lblShowCallBack->Location = System::Drawing::Point(68, 35);
            this->lblShowCallBack->Name = L"lblShowCallBack";
            this->lblShowCallBack->Size = System::Drawing::Size(33, 12);
            this->lblShowCallBack->TabIndex = 2;
            this->lblShowCallBack->Text = L"label2";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 241);
            this->Controls->Add(this->lblShowCallBack);
            this->Controls->Add(this->btnOpenSubForm);
            this->Controls->Add(this->lblName);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void lblName_MouseHover(System::Object^  sender, System::EventArgs^  e) {
        Label^ lbl = (Label^)sender;
        lbl->Text = "Mouse hover !!!";
    }
             void OnMouseLeave(System::Object ^sender, System::EventArgs ^e);
    private: System::Void btnOpenSubForm_Click(System::Object^  sender, System::EventArgs^  e) {
        SubForm^ form = gcnew SubForm();
        //form->Show();
        form->ShowDialog();
    }
             void OnBtnClicked(System::String ^msg);
    };
}
