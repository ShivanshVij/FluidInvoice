#pragma once
#include <string>

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  StaticInvoiceNumberLabel;
	private: System::Windows::Forms::TextBox^  SearchFormInvoiceNumberField;
	private: System::Windows::Forms::Button^  SearchFormSearchButton;
	private: System::Windows::Forms::Button^  CancelButton;

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
	public: void InitializeComponent(void)
		{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
		this->StaticInvoiceNumberLabel = (gcnew System::Windows::Forms::Label());
		this->SearchFormInvoiceNumberField = (gcnew System::Windows::Forms::TextBox());
		this->SearchFormSearchButton = (gcnew System::Windows::Forms::Button());
		this->CancelButton = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// StaticInvoiceNumberLabel
		// 
		this->StaticInvoiceNumberLabel->AutoSize = true;
		this->StaticInvoiceNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->StaticInvoiceNumberLabel->Location = System::Drawing::Point(8, 15);
		this->StaticInvoiceNumberLabel->Name = L"StaticInvoiceNumberLabel";
		this->StaticInvoiceNumberLabel->Size = System::Drawing::Size(130, 20);
		this->StaticInvoiceNumberLabel->TabIndex = 8;
		this->StaticInvoiceNumberLabel->Text = L"Invoice Number:";
		// 
		// SearchFormInvoiceNumberField
		// 
		this->SearchFormInvoiceNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->SearchFormInvoiceNumberField->Location = System::Drawing::Point(144, 13);
		this->SearchFormInvoiceNumberField->Name = L"SearchFormInvoiceNumberField";
		this->SearchFormInvoiceNumberField->Size = System::Drawing::Size(192, 26);
		this->SearchFormInvoiceNumberField->TabIndex = 9;
		// 
		// SearchFormSearchButton
		// 
		this->SearchFormSearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->SearchFormSearchButton->Location = System::Drawing::Point(135, 52);
		this->SearchFormSearchButton->Name = L"SearchFormSearchButton";
		this->SearchFormSearchButton->Size = System::Drawing::Size(87, 38);
		this->SearchFormSearchButton->TabIndex = 10;
		this->SearchFormSearchButton->Text = L"Search";
		this->SearchFormSearchButton->UseVisualStyleBackColor = true;
		this->SearchFormSearchButton->Click += gcnew System::EventHandler(this, &SearchForm::SearchFormSearchButton_Click);
		// 
		// CancelButton
		// 
		this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->CancelButton->Location = System::Drawing::Point(135, 96);
		this->CancelButton->Name = L"CancelButton";
		this->CancelButton->Size = System::Drawing::Size(87, 38);
		this->CancelButton->TabIndex = 11;
		this->CancelButton->Text = L"Cancel";
		this->CancelButton->UseVisualStyleBackColor = true;
		this->CancelButton->Click += gcnew System::EventHandler(this, &SearchForm::CancelButton_Click);
		// 
		// SearchForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
		this->AutoSize = true;
		this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->ClientSize = System::Drawing::Size(494, 225);
		this->Controls->Add(this->CancelButton);
		this->Controls->Add(this->SearchFormSearchButton);
		this->Controls->Add(this->SearchFormInvoiceNumberField);
		this->Controls->Add(this->StaticInvoiceNumberLabel);
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->MaximizeBox = false;
		this->MinimizeBox = false;
		this->Name = L"SearchForm";
		this->Text = L"Search by Invoice Number";
		this->Load += gcnew System::EventHandler(this, &SearchForm::SearchForm_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

	public: System::String^ SEARCHINGFORINVOICENUMBER;
	public: System::String^ isCheckBool = "0";
	public: System::String^ DynamicLabelString = "Error";

	public: System::Void SearchForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		isCheckBool = "0";
		this->Close();
	}

	private: System::Void SearchFormSearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SEARCHINGFORINVOICENUMBER = this->SearchFormInvoiceNumberField->Text;
		isCheckBool = "1";
		this->Close();
	}
};
}
