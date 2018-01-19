#pragma once

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchByCustomerNameForm
	/// </summary>
	public ref class SearchByCustomerNameForm : public System::Windows::Forms::Form
	{
	public:
		SearchByCustomerNameForm(void)
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
		~SearchByCustomerNameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticCustomerNameLabel;
	private: System::Windows::Forms::TextBox^  CustomerNameField;
	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::Button^  CancelButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchByCustomerNameForm::typeid));
			this->StaticCustomerNameLabel = (gcnew System::Windows::Forms::Label());
			this->CustomerNameField = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StaticCustomerNameLabel
			// 
			this->StaticCustomerNameLabel->AutoSize = true;
			this->StaticCustomerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticCustomerNameLabel->Location = System::Drawing::Point(12, 20);
			this->StaticCustomerNameLabel->Name = L"StaticCustomerNameLabel";
			this->StaticCustomerNameLabel->Size = System::Drawing::Size(136, 20);
			this->StaticCustomerNameLabel->TabIndex = 0;
			this->StaticCustomerNameLabel->Text = L"Customer Name:";
			// 
			// CustomerNameField
			// 
			this->CustomerNameField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CustomerNameField->Location = System::Drawing::Point(154, 18);
			this->CustomerNameField->Name = L"CustomerNameField";
			this->CustomerNameField->Size = System::Drawing::Size(271, 26);
			this->CustomerNameField->TabIndex = 1;
			// 
			// SearchButton
			// 
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SearchButton->Location = System::Drawing::Point(191, 65);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(100, 43);
			this->SearchButton->TabIndex = 2;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &SearchByCustomerNameForm::SearchButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CancelButton->Location = System::Drawing::Point(191, 114);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(100, 43);
			this->CancelButton->TabIndex = 3;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &SearchByCustomerNameForm::CancelButton_Click);
			// 
			// SearchByCustomerNameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(552, 246);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->CustomerNameField);
			this->Controls->Add(this->StaticCustomerNameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SearchByCustomerNameForm";
			this->Text = L"Search By Customer Name";
			this->Load += gcnew System::EventHandler(this, &SearchByCustomerNameForm::SearchByCustomerNameForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::String^ SEARCHINGFORCUSTOMERNAME;
	public: System::String^ CheckingBool = "0";

	private: System::Void SearchByCustomerNameForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SEARCHINGFORCUSTOMERNAME = this->CustomerNameField->Text;
		CheckingBool = "1";
		this->Close();
	}
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		CheckingBool = "0";
		this->Close();
	}
};
}
