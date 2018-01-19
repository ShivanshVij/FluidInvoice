#pragma once

#include <vector>

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ViewUnpaidAccounts
	/// </summary>
	public ref class ViewUnpaidAccounts : public System::Windows::Forms::Form
	{
	public:
		ViewUnpaidAccounts(void)
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
		~ViewUnpaidAccounts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  InvoicesGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Customer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Sales_Person;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Phone_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Paid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Unpaid;
	private: System::Windows::Forms::Label^  StaticTotalLabel;
	private: System::Windows::Forms::Label^  TotalSalesLabel;

	private: System::Windows::Forms::Label^  StaticUnpaidLabel;
	private: System::Windows::Forms::Label^  UnpaidAmountLabel;

	private: System::Windows::Forms::Button^  CloseButton;
	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewUnpaidAccounts::typeid));
			this->InvoicesGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Invoice_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Customer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Sales_Person = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Phone_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Paid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_Unpaid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StaticTotalLabel = (gcnew System::Windows::Forms::Label());
			this->TotalSalesLabel = (gcnew System::Windows::Forms::Label());
			this->StaticUnpaidLabel = (gcnew System::Windows::Forms::Label());
			this->UnpaidAmountLabel = (gcnew System::Windows::Forms::Label());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InvoicesGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// InvoicesGridView
			// 
			this->InvoicesGridView->AllowUserToAddRows = false;
			this->InvoicesGridView->AllowUserToDeleteRows = false;
			this->InvoicesGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->InvoicesGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->InvoicesGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->InvoicesGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->InvoicesGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Invoice_Number,
					this->Invoice_Customer, this->Invoice_Date, this->Invoice_Sales_Person, this->Invoice_Phone_Number, this->Invoice_Total, this->Invoice_Paid,
					this->Invoice_Unpaid
			});
			this->InvoicesGridView->Location = System::Drawing::Point(12, 12);
			this->InvoicesGridView->Name = L"InvoicesGridView";
			this->InvoicesGridView->ReadOnly = true;
			this->InvoicesGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->InvoicesGridView->RowHeadersVisible = false;
			this->InvoicesGridView->RowTemplate->Height = 24;
			this->InvoicesGridView->ShowEditingIcon = false;
			this->InvoicesGridView->Size = System::Drawing::Size(1207, 150);
			this->InvoicesGridView->TabIndex = 1;
			// 
			// Invoice_Number
			// 
			this->Invoice_Number->HeaderText = L"Invoice Number";
			this->Invoice_Number->Name = L"Invoice_Number";
			this->Invoice_Number->ReadOnly = true;
			// 
			// Invoice_Customer
			// 
			this->Invoice_Customer->HeaderText = L"Customer Name";
			this->Invoice_Customer->Name = L"Invoice_Customer";
			this->Invoice_Customer->ReadOnly = true;
			// 
			// Invoice_Date
			// 
			this->Invoice_Date->HeaderText = L"Date";
			this->Invoice_Date->Name = L"Invoice_Date";
			this->Invoice_Date->ReadOnly = true;
			// 
			// Invoice_Sales_Person
			// 
			this->Invoice_Sales_Person->HeaderText = L"Sales Person";
			this->Invoice_Sales_Person->Name = L"Invoice_Sales_Person";
			this->Invoice_Sales_Person->ReadOnly = true;
			// 
			// Invoice_Phone_Number
			// 
			this->Invoice_Phone_Number->HeaderText = L"Phone Number";
			this->Invoice_Phone_Number->Name = L"Invoice_Phone_Number";
			this->Invoice_Phone_Number->ReadOnly = true;
			// 
			// Invoice_Total
			// 
			this->Invoice_Total->HeaderText = L"Invoice Total";
			this->Invoice_Total->Name = L"Invoice_Total";
			this->Invoice_Total->ReadOnly = true;
			// 
			// Invoice_Paid
			// 
			this->Invoice_Paid->HeaderText = L"Amount Paid";
			this->Invoice_Paid->Name = L"Invoice_Paid";
			this->Invoice_Paid->ReadOnly = true;
			// 
			// Invoice_Unpaid
			// 
			this->Invoice_Unpaid->HeaderText = L"Amount Unpaid";
			this->Invoice_Unpaid->Name = L"Invoice_Unpaid";
			this->Invoice_Unpaid->ReadOnly = true;
			// 
			// StaticTotalLabel
			// 
			this->StaticTotalLabel->AutoSize = true;
			this->StaticTotalLabel->Location = System::Drawing::Point(1061, 185);
			this->StaticTotalLabel->Name = L"StaticTotalLabel";
			this->StaticTotalLabel->Size = System::Drawing::Size(83, 17);
			this->StaticTotalLabel->TabIndex = 2;
			this->StaticTotalLabel->Text = L"Total Sales:";
			// 
			// TotalSalesLabel
			// 
			this->TotalSalesLabel->AutoSize = true;
			this->TotalSalesLabel->Location = System::Drawing::Point(1149, 185);
			this->TotalSalesLabel->Name = L"TotalSalesLabel";
			this->TotalSalesLabel->Size = System::Drawing::Size(46, 17);
			this->TotalSalesLabel->TabIndex = 3;
			this->TotalSalesLabel->Text = L"label1";
			// 
			// StaticUnpaidLabel
			// 
			this->StaticUnpaidLabel->AutoSize = true;
			this->StaticUnpaidLabel->Location = System::Drawing::Point(1061, 202);
			this->StaticUnpaidLabel->Name = L"StaticUnpaidLabel";
			this->StaticUnpaidLabel->Size = System::Drawing::Size(93, 17);
			this->StaticUnpaidLabel->TabIndex = 4;
			this->StaticUnpaidLabel->Text = L"Total Unpaid:";
			// 
			// UnpaidAmountLabel
			// 
			this->UnpaidAmountLabel->AutoSize = true;
			this->UnpaidAmountLabel->Location = System::Drawing::Point(1149, 202);
			this->UnpaidAmountLabel->Name = L"UnpaidAmountLabel";
			this->UnpaidAmountLabel->Size = System::Drawing::Size(46, 17);
			this->UnpaidAmountLabel->TabIndex = 5;
			this->UnpaidAmountLabel->Text = L"label1";
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(12, 212);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(75, 29);
			this->CloseButton->TabIndex = 6;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &ViewUnpaidAccounts::CloseButton_Click);
			// 
			// ViewUnpaidAccounts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 253);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->UnpaidAmountLabel);
			this->Controls->Add(this->StaticUnpaidLabel);
			this->Controls->Add(this->TotalSalesLabel);
			this->Controls->Add(this->StaticTotalLabel);
			this->Controls->Add(this->InvoicesGridView);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ViewUnpaidAccounts";
			this->Text = L"View Unpaid Accounts";
			this->Load += gcnew System::EventHandler(this, &ViewUnpaidAccounts::ViewUnpaidAccounts_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InvoicesGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ StartingDate;
	public: String^ EndingDate;
	public: bool ViewAll = false;


	private: System::Void ViewUnpaidAccounts_Load(System::Object^  sender, System::EventArgs^  e) {

		DateTime StartDate = DateTime::Parse(StartingDate);
		DateTime EndDate = DateTime::Parse(EndingDate);
	
		/*String^ StartingDateMonth = StartingDate->Substring(0, StartingDate->IndexOf("/"));
		String^ StartingDateDayAndYear = StartingDate->Substring(StartingDate->IndexOf("/") + 1, StartingDate->Length);
		String^ StartingDateDay = StartingDateDayAndYear->Substring(0, StartingDateDayAndYear->IndexOf("/"));
		String^ StartingDateYear = StartingDateDayAndYear->Substring(StartingDateDayAndYear->IndexOf("/") + 1, StartingDateDayAndYear->Length);

		String^ EndingDateMonth = EndingDate->Substring(0, EndingDate->IndexOf("/"));
		String^ EndingDateDayAndYear = EndingDate->Substring(EndingDate->IndexOf("/") + 1, EndingDate->Length);
		String^ EndingDateDay = EndingDateDayAndYear->Substring(0, EndingDateDayAndYear->IndexOf("/"));
		String^ EndingDateYear = EndingDateDayAndYear->Substring(EndingDateDayAndYear->IndexOf("/") + 1, EndingDateDayAndYear->Length);*/
		
		if (ViewAll == false) {
			String^ SQLQuery = "SELECT * FROM Invoices";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;
			std::vector <int> InvoiceNumbers;

			try {
				Connection->Open();
				DataReader = FirstRunCheck->ExecuteReader();
				while (DataReader->Read()) {
					DateTime TEMP;
					Double PaidTemp;
					Double TotalTemp;

					PaidTemp = Convert::ToDouble(DataReader->GetString(14));
					TotalTemp = Convert::ToDouble(DataReader->GetString(12));

					TEMP = DateTime::Parse(DataReader->GetString(2));

					if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0 && PaidTemp < TotalTemp) {
						InvoiceNumbers.push_back(Convert::ToInt32(DataReader->GetString(0)));
					}

				}
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}

			if (InvoiceNumbers.size() > 0) {
				Double TotalSold = 0;
				Double TotalUnpaid = 0;


				try {
					Connection->Open();
					DataReader = FirstRunCheck->ExecuteReader();
					int i = 0;
					while (DataReader->Read()) {
						DateTime TEMP;
						Double PaidTemp;
						Double TotalTemp;


						PaidTemp = Convert::ToDouble(DataReader->GetString(14));
						TotalTemp = Convert::ToDouble(DataReader->GetString(12));

						TEMP = DateTime::Parse(DataReader->GetString(2));

						if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0 && PaidTemp < TotalTemp && i < InvoiceNumbers.size()) {
							this->InvoicesGridView->Rows->Add(1);
							this->InvoicesGridView[0, i]->Value = DataReader->GetString(0);
							this->InvoicesGridView[1, i]->Value = DataReader->GetString(1);
							this->InvoicesGridView[2, i]->Value = DataReader->GetString(2);
							this->InvoicesGridView[3, i]->Value = DataReader->GetString(3);
							this->InvoicesGridView[4, i]->Value = DataReader->GetString(5);
							this->InvoicesGridView[5, i]->Value = DataReader->GetString(12);
							this->InvoicesGridView[6, i]->Value = DataReader->GetString(14);
							this->InvoicesGridView[7, i]->Value = DataReader->GetString(15);
							TotalSold += Convert::ToDouble(DataReader->GetString(12));
							TotalUnpaid += Convert::ToDouble(DataReader->GetString(15));
							i++;
						}

					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}


				this->TotalSalesLabel->Text = "$" + TotalSold;
				this->UnpaidAmountLabel->Text = "$" + TotalUnpaid;



			}
			else {
				MessageBox::Show("No Invoices found within the specified dates");
				this->Close();
			}

		}
		else {
			String^ SQLQuery = "SELECT * FROM Invoices";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;
			std::vector <int> InvoiceNumbers;

			try {
				Connection->Open();
				DataReader = FirstRunCheck->ExecuteReader();
				while (DataReader->Read()) {
					DateTime TEMP;

					TEMP = DateTime::Parse(DataReader->GetString(2));

					if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0) {
						InvoiceNumbers.push_back(Convert::ToInt32(DataReader->GetString(0)));
					}

				}
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}

			if (InvoiceNumbers.size() > 0) {
				Double TotalSold = 0;
				Double TotalUnpaid = 0;
				this->Text = L"View All Accounts";

				try {
					Connection->Open();
					DataReader = FirstRunCheck->ExecuteReader();
					int i = 0;
					while (DataReader->Read()) {
						DateTime TEMP;
						Double PaidTemp;
						Double TotalTemp;


						PaidTemp = Convert::ToDouble(DataReader->GetString(14));
						TotalTemp = Convert::ToDouble(DataReader->GetString(12));

						TEMP = DateTime::Parse(DataReader->GetString(2));

						if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0 && i < InvoiceNumbers.size()) {
							this->InvoicesGridView->Rows->Add(1);
							this->InvoicesGridView[0, i]->Value = DataReader->GetString(0);
							this->InvoicesGridView[1, i]->Value = DataReader->GetString(1);
							this->InvoicesGridView[2, i]->Value = DataReader->GetString(2);
							this->InvoicesGridView[3, i]->Value = DataReader->GetString(3);
							this->InvoicesGridView[4, i]->Value = DataReader->GetString(5);
							this->InvoicesGridView[5, i]->Value = DataReader->GetString(12);
							this->InvoicesGridView[6, i]->Value = DataReader->GetString(14);
							this->InvoicesGridView[7, i]->Value = DataReader->GetString(15);
							TotalSold += Convert::ToDouble(DataReader->GetString(12));
							TotalUnpaid += Convert::ToDouble(DataReader->GetString(15));
							i++;
						}

					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}


				this->TotalSalesLabel->Text = "$" + TotalSold;
				this->UnpaidAmountLabel->Text = "$" + TotalUnpaid;




			}
			else {
				MessageBox::Show("No Invoices found within the specified dates");
				this->Close();
			}


		}


	}


private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
