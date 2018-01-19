#pragma once

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PhoneNumberSearchForm
	/// </summary>
	public ref class PhoneNumberSearchForm : public System::Windows::Forms::Form
	{
	public:
		PhoneNumberSearchForm(void)
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
		~PhoneNumberSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticPhoneNumberSearchField;
	private: System::Windows::Forms::TextBox^  PhoneNumberField;
	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::Button^  CancelButton;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PhoneNumberSearchForm::typeid));
			this->StaticPhoneNumberSearchField = (gcnew System::Windows::Forms::Label());
			this->PhoneNumberField = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StaticPhoneNumberSearchField
			// 
			this->StaticPhoneNumberSearchField->AutoSize = true;
			this->StaticPhoneNumberSearchField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticPhoneNumberSearchField->Location = System::Drawing::Point(23, 14);
			this->StaticPhoneNumberSearchField->Name = L"StaticPhoneNumberSearchField";
			this->StaticPhoneNumberSearchField->Size = System::Drawing::Size(170, 20);
			this->StaticPhoneNumberSearchField->TabIndex = 0;
			this->StaticPhoneNumberSearchField->Text = L"Enter Phone Number:";
			// 
			// PhoneNumberField
			// 
			this->PhoneNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PhoneNumberField->Location = System::Drawing::Point(199, 11);
			this->PhoneNumberField->Name = L"PhoneNumberField";
			this->PhoneNumberField->Size = System::Drawing::Size(223, 26);
			this->PhoneNumberField->TabIndex = 1;
			// 
			// SearchButton
			// 
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SearchButton->Location = System::Drawing::Point(159, 43);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(122, 41);
			this->SearchButton->TabIndex = 2;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &PhoneNumberSearchForm::SearchButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CancelButton->Location = System::Drawing::Point(159, 90);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(122, 41);
			this->CancelButton->TabIndex = 3;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &PhoneNumberSearchForm::CancelButton_Click);
			// 
			// PhoneNumberSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(492, 236);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->PhoneNumberField);
			this->Controls->Add(this->StaticPhoneNumberSearchField);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PhoneNumberSearchForm";
			this->Text = L"Search by Phone Number";
			this->Load += gcnew System::EventHandler(this, &PhoneNumberSearchForm::PhoneNumberSearchForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::String^ SEARCHINGFORPHONENUMBER;
	public: System::String^ CheckingBool = "0";

	private: System::Void PhoneNumberSearchForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->AutoSize = true;
	}
	private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SEARCHINGFORPHONENUMBER = this->PhoneNumberField->Text;
		CheckingBool = "1";
		this->Close();
	}
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		CheckingBool = "0";
		this->Close();
	}
};
}
