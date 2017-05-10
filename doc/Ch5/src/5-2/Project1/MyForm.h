#pragma once

#include "Logger.h"

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
            this->SuspendLayout();
            // 
            // lblName
            // 
            this->lblName->Location = System::Drawing::Point(69, 81);
            this->lblName->Name = L"lblName";
            this->lblName->Size = System::Drawing::Size(135, 39);
            this->lblName->TabIndex = 0;
            this->lblName->Text = L"label1";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 241);
            this->Controls->Add(this->lblName);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
