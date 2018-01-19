#pragma once

#include <vector>

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SelectInvoiceForm
	/// </summary>
	public ref class SelectInvoiceForm : public System::Windows::Forms::Form
	{
	public:
		SelectInvoiceForm(void)
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
		~SelectInvoiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticPromptLabel1;
	protected:
	private: System::Windows::Forms::Label^  StaticPromptLabel2;
	private: System::Windows::Forms::ListBox^  InvoicesListBox;
	private: System::Windows::Forms::Button^  SelectButton;
	private: System::Windows::Forms::Label^  StaticDateLabel;
	private: System::Windows::Forms::Label^  DateLabel;
	private: System::Windows::Forms::Label^  StaticCustomerNameLabel;
	private: System::Windows::Forms::Label^  StaticPhoneNumberLabel;
	private: System::Windows::Forms::Label^  StaticSalesPersonLabel;
	private: System::Windows::Forms::Label^  CustomerNameLabel;
	private: System::Windows::Forms::Label^  PhoneNumberLabel;
	private: System::Windows::Forms::Label^  SalesPersonLabel;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectInvoiceForm::typeid));
			this->StaticPromptLabel1 = (gcnew System::Windows::Forms::Label());
			this->StaticPromptLabel2 = (gcnew System::Windows::Forms::Label());
			this->InvoicesListBox = (gcnew System::Windows::Forms::ListBox());
			this->SelectButton = (gcnew System::Windows::Forms::Button());
			this->StaticDateLabel = (gcnew System::Windows::Forms::Label());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->StaticCustomerNameLabel = (gcnew System::Windows::Forms::Label());
			this->StaticPhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->StaticSalesPersonLabel = (gcnew System::Windows::Forms::Label());
			this->CustomerNameLabel = (gcnew System::Windows::Forms::Label());
			this->PhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->SalesPersonLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// StaticPromptLabel1
			// 
			this->StaticPromptLabel1->AutoSize = true;
			this->StaticPromptLabel1->Location = System::Drawing::Point(12, 9);
			this->StaticPromptLabel1->Name = L"StaticPromptLabel1";
			this->StaticPromptLabel1->Size = System::Drawing::Size(358, 17);
			this->StaticPromptLabel1->TabIndex = 0;
			this->StaticPromptLabel1->Text = L"Multiple Invoices were found for the given search terms.";
			// 
			// StaticPromptLabel2
			// 
			this->StaticPromptLabel2->AutoSize = true;
			this->StaticPromptLabel2->Location = System::Drawing::Point(12, 26);
			this->StaticPromptLabel2->Name = L"StaticPromptLabel2";
			this->StaticPromptLabel2->Size = System::Drawing::Size(196, 17);
			this->StaticPromptLabel2->TabIndex = 1;
			this->StaticPromptLabel2->Text = L"Please select one from below.";
			// 
			// InvoicesListBox
			// 
			this->InvoicesListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->InvoicesListBox->FormattingEnabled = true;
			this->InvoicesListBox->ItemHeight = 20;
			this->InvoicesListBox->Location = System::Drawing::Point(12, 53);
			this->InvoicesListBox->Name = L"InvoicesListBox";
			this->InvoicesListBox->Size = System::Drawing::Size(148, 184);
			this->InvoicesListBox->TabIndex = 2;
			this->InvoicesListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectInvoiceForm::InvoicesListBox_SelectedIndexChanged);
			// 
			// SelectButton
			// 
			this->SelectButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SelectButton->Location = System::Drawing::Point(274, 200);
			this->SelectButton->Name = L"SelectButton";
			this->SelectButton->Size = System::Drawing::Size(88, 41);
			this->SelectButton->TabIndex = 3;
			this->SelectButton->Text = L"Select";
			this->SelectButton->UseVisualStyleBackColor = true;
			this->SelectButton->Click += gcnew System::EventHandler(this, &SelectInvoiceForm::SelectButton_Click);
			// 
			// StaticDateLabel
			// 
			this->StaticDateLabel->AutoSize = true;
			this->StaticDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticDateLabel->Location = System::Drawing::Point(166, 53);
			this->StaticDateLabel->Name = L"StaticDateLabel";
			this->StaticDateLabel->Size = System::Drawing::Size(50, 20);
			this->StaticDateLabel->TabIndex = 4;
			this->StaticDateLabel->Text = L"Date:";
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DateLabel->Location = System::Drawing::Point(211, 53);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(0, 20);
			this->DateLabel->TabIndex = 5;
			// 
			// StaticCustomerNameLabel
			// 
			this->StaticCustomerNameLabel->AutoSize = true;
			this->StaticCustomerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticCustomerNameLabel->Location = System::Drawing::Point(166, 79);
			this->StaticCustomerNameLabel->Name = L"StaticCustomerNameLabel";
			this->StaticCustomerNameLabel->Size = System::Drawing::Size(136, 20);
			this->StaticCustomerNameLabel->TabIndex = 6;
			this->StaticCustomerNameLabel->Text = L"Customer Name:";
			// 
			// StaticPhoneNumberLabel
			// 
			this->StaticPhoneNumberLabel->AutoSize = true;
			this->StaticPhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticPhoneNumberLabel->Location = System::Drawing::Point(166, 107);
			this->StaticPhoneNumberLabel->Name = L"StaticPhoneNumberLabel";
			this->StaticPhoneNumberLabel->Size = System::Drawing::Size(125, 20);
			this->StaticPhoneNumberLabel->TabIndex = 7;
			this->StaticPhoneNumberLabel->Text = L"Phone Number:";
			// 
			// StaticSalesPersonLabel
			// 
			this->StaticSalesPersonLabel->AutoSize = true;
			this->StaticSalesPersonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticSalesPersonLabel->Location = System::Drawing::Point(166, 136);
			this->StaticSalesPersonLabel->Name = L"StaticSalesPersonLabel";
			this->StaticSalesPersonLabel->Size = System::Drawing::Size(114, 20);
			this->StaticSalesPersonLabel->TabIndex = 8;
			this->StaticSalesPersonLabel->Text = L"Sales Person:";
			// 
			// CustomerNameLabel
			// 
			this->CustomerNameLabel->AutoSize = true;
			this->CustomerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CustomerNameLabel->Location = System::Drawing::Point(280, 70);
			this->CustomerNameLabel->Name = L"CustomerNameLabel";
			this->CustomerNameLabel->Size = System::Drawing::Size(0, 20);
			this->CustomerNameLabel->TabIndex = 9;
			// 
			// PhoneNumberLabel
			// 
			this->PhoneNumberLabel->AutoSize = true;
			this->PhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PhoneNumberLabel->Location = System::Drawing::Point(270, 87);
			this->PhoneNumberLabel->Name = L"PhoneNumberLabel";
			this->PhoneNumberLabel->Size = System::Drawing::Size(0, 20);
			this->PhoneNumberLabel->TabIndex = 10;
			// 
			// SalesPersonLabel
			// 
			this->SalesPersonLabel->AutoSize = true;
			this->SalesPersonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SalesPersonLabel->Location = System::Drawing::Point(257, 110);
			this->SalesPersonLabel->Name = L"SalesPersonLabel";
			this->SalesPersonLabel->Size = System::Drawing::Size(0, 20);
			this->SalesPersonLabel->TabIndex = 11;
			// 
			// SelectInvoiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(382, 253);
			this->Controls->Add(this->SalesPersonLabel);
			this->Controls->Add(this->PhoneNumberLabel);
			this->Controls->Add(this->CustomerNameLabel);
			this->Controls->Add(this->StaticSalesPersonLabel);
			this->Controls->Add(this->StaticPhoneNumberLabel);
			this->Controls->Add(this->StaticCustomerNameLabel);
			this->Controls->Add(this->DateLabel);
			this->Controls->Add(this->StaticDateLabel);
			this->Controls->Add(this->SelectButton);
			this->Controls->Add(this->InvoicesListBox);
			this->Controls->Add(this->StaticPromptLabel2);
			this->Controls->Add(this->StaticPromptLabel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SelectInvoiceForm";
			this->Text = L"Select An Invoice";
			this->Load += gcnew System::EventHandler(this, &SelectInvoiceForm::SelectInvoiceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ WhichSearch = "0";
	public: int HowMany = 0;
	public: array<String^> ^ DateList = gcnew array<String^>(100);
	public: array<String^> ^ INV_List = gcnew array<String^>(100);
	public: array<String^> ^ CUSTNameList = gcnew array<String^>(100);
	public: array<String^> ^ PhoneNumberList = gcnew array<String^>(100);
	public: array<String^> ^ SalesPersonList = gcnew array<String^>(100);
	public: String^ SelectBool = "0";
	public: String^ SelectedInvoiceNumber;

	private: System::Void SelectInvoiceForm_Load(System::Object^  sender, System::EventArgs^  e) {
		if (WhichSearch == "0") {
			this->Close();
		}
		else if (WhichSearch == "1") {//For Customer Name Search

			for (int i = 0; i < HowMany; i++) {
				this->InvoicesListBox->Items->Add(String::Format(INV_List[i]));
				//this->DateLabel->Text = ItemList[i];
			}
		}

	}

	private: System::Void InvoicesListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->DateLabel->Text = DateList[this->InvoicesListBox->SelectedIndex];
		this->CustomerNameLabel->Text = CUSTNameList[this->InvoicesListBox->SelectedIndex];
		this->PhoneNumberLabel->Text = PhoneNumberList[this->InvoicesListBox->SelectedIndex];
		this->SalesPersonLabel->Text = SalesPersonList[this->InvoicesListBox->SelectedIndex];
	}
	private: System::Void SelectButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectBool = "1";
		SelectedInvoiceNumber = this->InvoicesListBox->SelectedItem->ToString();
		this->Close();

	}
};
}
