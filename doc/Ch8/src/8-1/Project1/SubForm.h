#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    delegate void Del_BtnClicked(System::String^ msg);
    
	/// <summary>
	/// Summary for SubForm
	/// </summary>
	public ref class SubForm : public System::Windows::Forms::Form
	{
	public:
        event Del_BtnClicked^ BtnClicked;

		SubForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
        property System::String^ SecreteString {
            System::String^ get() {
                return _secrete;
            }
            void set(System::String^ new_string) {
                _secrete = new_string;
            }
        }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
        System::String^ _secrete = "Secrete string";
    private: System::Windows::Forms::Button^  btnCallBack;

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
            this->btnCallBack = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // btnCallBack
            // 
            this->btnCallBack->Location = System::Drawing::Point(95, 116);
            this->btnCallBack->Name = L"btnCallBack";
            this->btnCallBack->Size = System::Drawing::Size(75, 23);
            this->btnCallBack->TabIndex = 0;
            this->btnCallBack->Text = L"callback";
            this->btnCallBack->UseVisualStyleBackColor = true;
            this->btnCallBack->Click += gcnew System::EventHandler(this, &SubForm::btnCallBack_Click);
            // 
            // SubForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 262);
            this->Controls->Add(this->btnCallBack);
            this->Name = L"SubForm";
            this->Text = L"SubForm";
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void btnCallBack_Click(System::Object^  sender, System::EventArgs^  e) {
        BtnClicked("Button in subform had clicked");
    }
    };
}
