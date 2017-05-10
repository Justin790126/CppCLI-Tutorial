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
    private: System::Windows::Forms::Label^  label1;
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Location = System::Drawing::Point(69, 88);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"label1";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
