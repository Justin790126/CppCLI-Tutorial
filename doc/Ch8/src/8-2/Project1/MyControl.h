#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyControl
	/// </summary>
	public ref class MyControl : public System::Windows::Forms::UserControl
	{
	public:
		MyControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyControl()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::ComboBox^  cbbTest;
    protected:
    private: System::Windows::Forms::TextBox^  txtTest;

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
            this->cbbTest = (gcnew System::Windows::Forms::ComboBox());
            this->txtTest = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // cbbTest
            // 
            this->cbbTest->FormattingEnabled = true;
            this->cbbTest->Location = System::Drawing::Point(81, 55);
            this->cbbTest->Name = L"cbbTest";
            this->cbbTest->Size = System::Drawing::Size(121, 20);
            this->cbbTest->TabIndex = 0;
            // 
            // txtTest
            // 
            this->txtTest->Location = System::Drawing::Point(94, 17);
            this->txtTest->Name = L"txtTest";
            this->txtTest->Size = System::Drawing::Size(100, 22);
            this->txtTest->TabIndex = 1;
            // 
            // MyControl
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DarkRed;
            this->Controls->Add(this->txtTest);
            this->Controls->Add(this->cbbTest);
            this->Name = L"MyControl";
            this->Size = System::Drawing::Size(300, 87);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	};
}
