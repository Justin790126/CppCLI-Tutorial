#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResourceStore
	/// </summary>
	public ref class ResourceStore : public System::Windows::Forms::Form
	{
	public:
        ComponentResourceManager^ resx_manager = gcnew ComponentResourceManager(ResourceStore::typeid);
		ResourceStore(void)
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
		~ResourceStore()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  btnTest;
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
            this->btnTest = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // btnTest
            // 
            this->btnTest->Location = System::Drawing::Point(12, 26);
            this->btnTest->Name = L"btnTest";
            this->btnTest->Size = System::Drawing::Size(75, 23);
            this->btnTest->TabIndex = 0;
            this->btnTest->Text = L"button1";
            this->btnTest->UseVisualStyleBackColor = true;
            // 
            // ResourceStore
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(282, 255);
            this->Controls->Add(this->btnTest);
            this->Name = L"ResourceStore";
            this->Text = L"ResourceStore";
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
