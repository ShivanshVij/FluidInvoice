#pragma once
#include <ctype.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iomanip>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cliext\vector>

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public struct ITEMS {
		Double INV_QUANTITY;
		std::string INV_ITEMNAME;
		std::string INV_ITEMDESCRIPTION;
		Double INV_UNITPRICE;
		Double INV_ITEMTOTAL;
	};

	public struct INVOICE {
		ITEMS INVOICEITEMS[99];
		std::string CustomerName;
		std::string SalespersonName;
		std::string InvoiceDate;
		int InvoiceNumber;
		std::string ShippingAddress;
		std::string ETA;
		Double INV_TOTALS;
		Double INV_SUBTOTALS;
		Double INV_GST;
		Double INV_PST;
		Double SHIPPINGCOST;
		std::string PhoneNumber;
		std::string Comments;
		Double INV_AmountPaid;
		Double INV_AmountUnpaid;
		std::string PaymentType;
	};

	public ref class ApplyPaymentForm : public System::Windows::Forms::Form
	{
	public:
		ApplyPaymentForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ApplyPaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticInvoiceNumberLabel;
	private: System::Windows::Forms::Label^  StaticPreviousPaidAmountLabel;
	private: System::Windows::Forms::Label^  StaticRemainingAmountLabel;
	private: System::Windows::Forms::Label^  StaticPaymentToApplyLabel;
	private: System::Windows::Forms::TextBox^  InvoiceNumberField;
	private: System::Windows::Forms::Button^  LoadButton;
	private: System::Windows::Forms::Label^  PreviousPaidAmountLabel;
	private: System::Windows::Forms::TextBox^  PaymentApplyField;
	private: System::Windows::Forms::Label^  RemainingAmountLabel;
	private: System::Windows::Forms::Button^  ApplyButton;
	private: System::Windows::Forms::Button^  CancelButton;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ApplyPaymentForm::typeid));
			this->StaticInvoiceNumberLabel = (gcnew System::Windows::Forms::Label());
			this->StaticPreviousPaidAmountLabel = (gcnew System::Windows::Forms::Label());
			this->StaticRemainingAmountLabel = (gcnew System::Windows::Forms::Label());
			this->StaticPaymentToApplyLabel = (gcnew System::Windows::Forms::Label());
			this->InvoiceNumberField = (gcnew System::Windows::Forms::TextBox());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->PreviousPaidAmountLabel = (gcnew System::Windows::Forms::Label());
			this->PaymentApplyField = (gcnew System::Windows::Forms::TextBox());
			this->RemainingAmountLabel = (gcnew System::Windows::Forms::Label());
			this->ApplyButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StaticInvoiceNumberLabel
			// 
			this->StaticInvoiceNumberLabel->AutoSize = true;
			this->StaticInvoiceNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticInvoiceNumberLabel->Location = System::Drawing::Point(12, 32);
			this->StaticInvoiceNumberLabel->Name = L"StaticInvoiceNumberLabel";
			this->StaticInvoiceNumberLabel->Size = System::Drawing::Size(130, 20);
			this->StaticInvoiceNumberLabel->TabIndex = 0;
			this->StaticInvoiceNumberLabel->Text = L"Invoice Number:";
			this->StaticInvoiceNumberLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::StaticInvoiceNumberLabel_Click);
			// 
			// StaticPreviousPaidAmountLabel
			// 
			this->StaticPreviousPaidAmountLabel->AutoSize = true;
			this->StaticPreviousPaidAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticPreviousPaidAmountLabel->Location = System::Drawing::Point(12, 72);
			this->StaticPreviousPaidAmountLabel->Name = L"StaticPreviousPaidAmountLabel";
			this->StaticPreviousPaidAmountLabel->Size = System::Drawing::Size(179, 20);
			this->StaticPreviousPaidAmountLabel->TabIndex = 1;
			this->StaticPreviousPaidAmountLabel->Text = L"Previous Paid Amount:";
			this->StaticPreviousPaidAmountLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::StaticPreviousPaidAmountLabel_Click);
			// 
			// StaticRemainingAmountLabel
			// 
			this->StaticRemainingAmountLabel->AutoSize = true;
			this->StaticRemainingAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticRemainingAmountLabel->Location = System::Drawing::Point(12, 179);
			this->StaticRemainingAmountLabel->Name = L"StaticRemainingAmountLabel";
			this->StaticRemainingAmountLabel->Size = System::Drawing::Size(207, 20);
			this->StaticRemainingAmountLabel->TabIndex = 2;
			this->StaticRemainingAmountLabel->Text = L"Remaining Amount to Pay:";
			this->StaticRemainingAmountLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::StaticRemainingAmountLabel_Click);
			// 
			// StaticPaymentToApplyLabel
			// 
			this->StaticPaymentToApplyLabel->AutoSize = true;
			this->StaticPaymentToApplyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticPaymentToApplyLabel->Location = System::Drawing::Point(12, 137);
			this->StaticPaymentToApplyLabel->Name = L"StaticPaymentToApplyLabel";
			this->StaticPaymentToApplyLabel->Size = System::Drawing::Size(144, 20);
			this->StaticPaymentToApplyLabel->TabIndex = 3;
			this->StaticPaymentToApplyLabel->Text = L"Payment to Apply:";
			this->StaticPaymentToApplyLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::StaticPaymentToApplyLabel_Click);
			// 
			// InvoiceNumberField
			// 
			this->InvoiceNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->InvoiceNumberField->Location = System::Drawing::Point(162, 30);
			this->InvoiceNumberField->Name = L"InvoiceNumberField";
			this->InvoiceNumberField->Size = System::Drawing::Size(189, 26);
			this->InvoiceNumberField->TabIndex = 4;
			this->InvoiceNumberField->TextChanged += gcnew System::EventHandler(this, &ApplyPaymentForm::InvoiceNumberField_TextChanged);
			// 
			// LoadButton
			// 
			this->LoadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->LoadButton->Location = System::Drawing::Point(361, 22);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(84, 42);
			this->LoadButton->TabIndex = 5;
			this->LoadButton->Text = L"Load";
			this->LoadButton->UseVisualStyleBackColor = true;
			this->LoadButton->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::button1_Click);
			// 
			// PreviousPaidAmountLabel
			// 
			this->PreviousPaidAmountLabel->AutoSize = true;
			this->PreviousPaidAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PreviousPaidAmountLabel->Location = System::Drawing::Point(207, 72);
			this->PreviousPaidAmountLabel->Name = L"PreviousPaidAmountLabel";
			this->PreviousPaidAmountLabel->Size = System::Drawing::Size(27, 20);
			this->PreviousPaidAmountLabel->TabIndex = 6;
			this->PreviousPaidAmountLabel->Text = L"$0";
			this->PreviousPaidAmountLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::PreviousPaidAmountLabel_Click);
			// 
			// PaymentApplyField
			// 
			this->PaymentApplyField->Enabled = false;
			this->PaymentApplyField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PaymentApplyField->Location = System::Drawing::Point(174, 134);
			this->PaymentApplyField->Name = L"PaymentApplyField";
			this->PaymentApplyField->Size = System::Drawing::Size(177, 26);
			this->PaymentApplyField->TabIndex = 8;
			this->PaymentApplyField->Text = L"0.00";
			this->PaymentApplyField->TextChanged += gcnew System::EventHandler(this, &ApplyPaymentForm::PaymentApplyField_TextChanged);
			// 
			// RemainingAmountLabel
			// 
			this->RemainingAmountLabel->AutoSize = true;
			this->RemainingAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->RemainingAmountLabel->Location = System::Drawing::Point(237, 179);
			this->RemainingAmountLabel->Name = L"RemainingAmountLabel";
			this->RemainingAmountLabel->Size = System::Drawing::Size(37, 20);
			this->RemainingAmountLabel->TabIndex = 9;
			this->RemainingAmountLabel->Text = L"N/A";
			this->RemainingAmountLabel->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::RemainingAmountLabel_Click);
			// 
			// ApplyButton
			// 
			this->ApplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ApplyButton->Location = System::Drawing::Point(149, 219);
			this->ApplyButton->Name = L"ApplyButton";
			this->ApplyButton->Size = System::Drawing::Size(162, 43);
			this->ApplyButton->TabIndex = 10;
			this->ApplyButton->Text = L"Apply";
			this->ApplyButton->UseVisualStyleBackColor = true;
			this->ApplyButton->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::ApplyButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CancelButton->Location = System::Drawing::Point(149, 268);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(162, 43);
			this->CancelButton->TabIndex = 11;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &ApplyPaymentForm::CancelButton_Click);
			// 
			// ApplyPaymentForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(457, 323);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->ApplyButton);
			this->Controls->Add(this->RemainingAmountLabel);
			this->Controls->Add(this->PaymentApplyField);
			this->Controls->Add(this->PreviousPaidAmountLabel);
			this->Controls->Add(this->LoadButton);
			this->Controls->Add(this->InvoiceNumberField);
			this->Controls->Add(this->StaticPaymentToApplyLabel);
			this->Controls->Add(this->StaticRemainingAmountLabel);
			this->Controls->Add(this->StaticPreviousPaidAmountLabel);
			this->Controls->Add(this->StaticInvoiceNumberLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ApplyPaymentForm";
			this->Text = L"Apply a Payment";
			this->Load += gcnew System::EventHandler(this, &ApplyPaymentForm::ApplyPaymentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool LoadButtonPressed = false;
	public: bool FromInvoiceForm = false;
	public: System::String^ SearchedForInvoiceNumber;
	public: int RowCount = 0;
	public: Double AmountPaidRecorded;
	public: Double AmountUnpaidRecorded;

	public: cliext::vector<String^> LoadedInvoiceStorage;
	public: cliext::vector<String^> LoadedItemsQTY;
	public: cliext::vector<String^> LoadedItemsNAMES;
	public: cliext::vector<String^> LoadedItemsDESCRIPTION;
	public: cliext::vector<String^> LoadedItemsUNITPRICE;
	public: cliext::vector<String^> LoadedItemsTOTALS;

	private: System::Void ApplyPaymentForm_Load(System::Object^  sender, System::EventArgs^  e) {
		LoadButtonPressed = false;
		this->AutoSize = true;
		this->PaymentApplyField->Enabled = false;

		if (FromInvoiceForm == true) {
			this->PaymentApplyField->Enabled = true;
			LoadButtonPressed = true;
			msclr::interop::marshal_context context;
			{
				this->InvoiceNumberField->Text = SearchedForInvoiceNumber;

				if (SearchedForInvoiceNumber == "" || SearchedForInvoiceNumber == nullptr) {
					MessageBox::Show("Please Enter an Invoice Number",
						"Fluid Invoice", MessageBoxButtons::OK,
						MessageBoxIcon::Asterisk);
				}
				else {
					bool wasInputFound = false;
					String^ SQLQuery = "SELECT * FROM Invoices WHERE Invoice_Number = '" + SearchedForInvoiceNumber + "';";
					String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
					MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
					MySqlCommand^ InputCheck = gcnew MySqlCommand(SQLQuery, Connection);
					MySqlDataReader^ DataReader;
					String^ Output;

					try {
						Connection->Open();
						DataReader = InputCheck->ExecuteReader();
						while (DataReader->Read()) {
							wasInputFound = true;
						}
						Connection->Close();
					}
					catch (Exception^ex) {
						MessageBox::Show(ex->Message);
					}

					if (wasInputFound == true) {
						LoadButtonPressed = true;

						INVOICE OLDINVOICE;

						String^ LoadQuery = "SELECT * FROM Invoices WHERE Invoice_Number = '" + SearchedForInvoiceNumber + "';";
						MySqlCommand^ LoadCommand = gcnew MySqlCommand(LoadQuery, Connection);

						try {
							Connection->Open();
							DataReader = LoadCommand->ExecuteReader();
							while (DataReader->Read()) {
								OLDINVOICE.InvoiceNumber = Convert::ToInt32(DataReader->GetString(0));
								OLDINVOICE.CustomerName = context.marshal_as<std::string>(DataReader->GetString(1));
								OLDINVOICE.InvoiceDate = context.marshal_as<std::string>(DataReader->GetString(2));
								OLDINVOICE.SalespersonName = context.marshal_as<std::string>(DataReader->GetString(3));
								OLDINVOICE.PhoneNumber = context.marshal_as<std::string>(DataReader->GetString(5));
								OLDINVOICE.ShippingAddress = context.marshal_as<std::string>(DataReader->GetString(6));
								OLDINVOICE.SHIPPINGCOST = Convert::ToDouble(DataReader->GetString(7));
								OLDINVOICE.INV_TOTALS = Convert::ToDouble(DataReader->GetString(12));
								OLDINVOICE.INV_AmountPaid = Convert::ToDouble(DataReader->GetString(14));
								OLDINVOICE.INV_AmountUnpaid = Convert::ToDouble(DataReader->GetString(15));
							}
							Connection->Close();
						}
						catch (Exception^ex) {
							MessageBox::Show(ex->Message);
						}

						LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_TOTALS)));
						LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_AmountPaid)));
						LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_AmountUnpaid)));
						
						this->PreviousPaidAmountLabel->Text = "$" + OLDINVOICE.INV_AmountPaid;
						this->RemainingAmountLabel->Text = "$" + OLDINVOICE.INV_AmountUnpaid;
						this->PaymentApplyField->Enabled = true;
					}
					else {
						MessageBox::Show("This Invoice Number does not exist.",
							"Fluid Invoice", MessageBoxButtons::OK,
							MessageBoxIcon::Asterisk);
					}
				}
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		if (this->InvoiceNumberField->Text != "" || this->InvoiceNumberField->Text != nullptr) {
			SearchedForInvoiceNumber = this->InvoiceNumberField->Text;
			if (SearchedForInvoiceNumber == "" || SearchedForInvoiceNumber == nullptr) {
				MessageBox::Show("Please Enter an Invoice Number",
					"Fluid Invoice", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}
			else {
				bool wasInputFound = false;

				String^ SQLQuery = "SELECT * FROM Invoices WHERE Invoice_Number = '" + SearchedForInvoiceNumber + "';";
				String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ InputCheck = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;
				String^ Output;

				try {
					Connection->Open();
					DataReader = InputCheck->ExecuteReader();
					while (DataReader->Read()) {
						wasInputFound = true;
					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				if (wasInputFound == true) {
					LoadButtonPressed = true;

					INVOICE OLDINVOICE;

					String^ LoadQuery = "SELECT * FROM Invoices WHERE Invoice_Number = '" + SearchedForInvoiceNumber + "';";
					MySqlCommand^ LoadCommand = gcnew MySqlCommand(LoadQuery, Connection);

					try {
						Connection->Open();
						DataReader = LoadCommand->ExecuteReader();
						while (DataReader->Read()) {
							OLDINVOICE.InvoiceNumber = Convert::ToInt32(DataReader->GetString(0));
							OLDINVOICE.CustomerName = context.marshal_as<std::string>(DataReader->GetString(1));
							OLDINVOICE.InvoiceDate = context.marshal_as<std::string>(DataReader->GetString(2));
							OLDINVOICE.SalespersonName = context.marshal_as<std::string>(DataReader->GetString(3));
							OLDINVOICE.PhoneNumber = context.marshal_as<std::string>(DataReader->GetString(5));
							OLDINVOICE.ShippingAddress = context.marshal_as<std::string>(DataReader->GetString(6));
							OLDINVOICE.SHIPPINGCOST = Convert::ToDouble(DataReader->GetString(7));
							OLDINVOICE.INV_TOTALS = Convert::ToDouble(DataReader->GetString(12));
							OLDINVOICE.INV_AmountPaid = Convert::ToDouble(DataReader->GetString(14));
							OLDINVOICE.INV_AmountUnpaid = Convert::ToDouble(DataReader->GetString(15));
						}
						Connection->Close();
					}
					catch (Exception^ex) {
						MessageBox::Show(ex->Message);
					}

					LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_TOTALS)));
					LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_AmountPaid)));
					LoadedInvoiceStorage.push_back((Convert::ToString(OLDINVOICE.INV_AmountUnpaid)));
					this->PreviousPaidAmountLabel->Text = "$" + OLDINVOICE.INV_AmountPaid;
					this->RemainingAmountLabel->Text = "$" + OLDINVOICE.INV_AmountUnpaid;
					this->PaymentApplyField->Enabled = true;
				}
				else {
					MessageBox::Show("This Invoice Number does not exist.",
						"Fluid Invoice", MessageBoxButtons::OK,
						MessageBoxIcon::Asterisk);
				}
			}
		}
		else {
			MessageBox::Show("Please Enter an Invoice Number",
				"Fluid Invoice", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}
	}

	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void ApplyButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (LoadButtonPressed == true && PaymentApplyField->Text != "0" && PaymentApplyField->Text != "0.00") {
			msclr::interop::marshal_context context;
			LoadedInvoiceStorage[2] = Convert::ToString(NewRemainingAmount);
			LoadedInvoiceStorage[1] = Convert::ToString(NewPaidAmount);

			String^ SQLQuery = "UPDATE Invoices SET Amount_Paid = '" + LoadedInvoiceStorage[1] + "', Amount_Left = '" + LoadedInvoiceStorage[2] + "' WHERE Invoice_Number = '" + SearchedForInvoiceNumber + "';";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ InputCheck = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;
			String^ Output;

			try {
				Connection->Open();
				DataReader = InputCheck->ExecuteReader();
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
			AmountPaidRecorded = Convert::ToDouble(LoadedInvoiceStorage[1]);
			AmountUnpaidRecorded = Convert::ToDouble(LoadedInvoiceStorage[2]);
			this->Close();
		}
		else {
			this->Close();
		}
	}

	Double NewRemainingAmount;
	Double NewPaidAmount;
	Double scale = 0.01;

	private: System::Void PaymentApplyField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		this->RemainingAmountLabel->Text = "$" + LoadedInvoiceStorage[2];
		String^ TEMPORARY1;
		String^ TEMPORARY2;
		Double TEST = 0.00;
		Double TEMP = 0.00;
		Double TEMP2 = 0.00;

		TEMPORARY1 = LoadedInvoiceStorage[2];
		TEMPORARY2 = this->PaymentApplyField->Text;

		if (Double::TryParse(TEMPORARY2, TEST)) {
			TEMP = TEST;
		}
		else {
			TEMP = 0.00;
		}

		if (Double::TryParse(TEMPORARY1, TEST)) {
			TEMP2 = TEST;
		}
		else {
			TEMP2 = 0.00;
		}

		TEMP2 = TEMP2 - TEMP;
		TEMP2 = floor(TEMP2 / scale + 0.5) * scale;

		this->RemainingAmountLabel->Text = "$" + Convert::ToString(TEMP2);

		NewRemainingAmount = TEMP2;
		NewPaidAmount = (Convert::ToDouble(LoadedInvoiceStorage[1]) + TEMP);
	}

//Depracated functions
private: System::Void StaticInvoiceNumberLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void InvoiceNumberField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void StaticPreviousPaidAmountLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void PreviousPaidAmountLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void StaticPaymentToApplyLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void StaticRemainingAmountLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RemainingAmountLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
