#pragma once

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ChangeInvoiceNumberForm : public System::Windows::Forms::Form
	{
	public:
		ChangeInvoiceNumberForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ChangeInvoiceNumberForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticNewInvoiceNumberLabel;
	protected:
	private: System::Windows::Forms::TextBox^  NewInvoiceNumberField;
	private: System::Windows::Forms::Button^  SetButton;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeInvoiceNumberForm::typeid));
			this->StaticNewInvoiceNumberLabel = (gcnew System::Windows::Forms::Label());
			this->NewInvoiceNumberField = (gcnew System::Windows::Forms::TextBox());
			this->SetButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StaticNewInvoiceNumberLabel
			// 
			this->StaticNewInvoiceNumberLabel->AutoSize = true;
			this->StaticNewInvoiceNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticNewInvoiceNumberLabel->Location = System::Drawing::Point(12, 9);
			this->StaticNewInvoiceNumberLabel->Name = L"StaticNewInvoiceNumberLabel";
			this->StaticNewInvoiceNumberLabel->Size = System::Drawing::Size(168, 20);
			this->StaticNewInvoiceNumberLabel->TabIndex = 0;
			this->StaticNewInvoiceNumberLabel->Text = L"New Invoice Number:";
			// 
			// NewInvoiceNumberField
			// 
			this->NewInvoiceNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->NewInvoiceNumberField->Location = System::Drawing::Point(186, 6);
			this->NewInvoiceNumberField->Name = L"NewInvoiceNumberField";
			this->NewInvoiceNumberField->Size = System::Drawing::Size(165, 26);
			this->NewInvoiceNumberField->TabIndex = 1;
			// 
			// SetButton
			// 
			this->SetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SetButton->Location = System::Drawing::Point(140, 47);
			this->SetButton->Name = L"SetButton";
			this->SetButton->Size = System::Drawing::Size(75, 30);
			this->SetButton->TabIndex = 2;
			this->SetButton->Text = L"Set";
			this->SetButton->UseVisualStyleBackColor = true;
			this->SetButton->Click += gcnew System::EventHandler(this, &ChangeInvoiceNumberForm::SetButton_Click);
			// 
			// ChangeInvoiceNumberForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(407, 146);
			this->Controls->Add(this->SetButton);
			this->Controls->Add(this->NewInvoiceNumberField);
			this->Controls->Add(this->StaticNewInvoiceNumberLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ChangeInvoiceNumberForm";
			this->Text = L"Change Invoice Number";
			this->Load += gcnew System::EventHandler(this, &ChangeInvoiceNumberForm::ChangeInvoiceNumberForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::String^ InvoiceNumberString = "ERROR";
	public: System::String^ CheckingString = "0";
	private: System::Void ChangeInvoiceNumberForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->NewInvoiceNumberField->Text = InvoiceNumberString;
		CheckingString = "0";
	}
	public: System::Void SetButton_Click(System::Object^  sender, System::EventArgs^  e) {
		InvoiceNumberString = this->NewInvoiceNumberField->Text;
		CheckingString = "1";
		this->Close();
	}

	};
}
