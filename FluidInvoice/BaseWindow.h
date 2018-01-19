#pragma once
#include "NewInvoiceForm.h"
#include "SearchForm.h"
#include "ChangeInvoiceNumberForm.h"
#include "PhoneNumberSearchForm.h"
#include "SearchByCustomerNameForm.h"
#include "ApplyPaymentForm.h"
#include "SelectInvoiceForm.h"
#include "PickDateForm.h"
#include "ViewUnpaidAccounts.h"
#include "SalespersonSummaryReport.h"
#include "SalespersonIndividualReport.h"
#include "SalesTaxReport.h"
#include "PASSWORD.h"
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

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class BaseWindow : public System::Windows::Forms::Form
	{
	public:
		BaseWindow(void)
		{
			InitializeComponent();
		}

	protected:
		~BaseWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CreateNewInvoiceButton;
	protected:
	private: System::Windows::Forms::Label^  StaticSearchOptionsLabel;
	private: System::Windows::Forms::Button^  SearchByInvoiceNumberButton;

	private: System::Windows::Forms::Label^  StaticInvoiceOptionsLabel;
	private: System::Windows::Forms::Button^  ApplyAPaymentButton;
	private: System::Windows::Forms::Label^  StaticReportingOptionsLabel;
	private: System::Windows::Forms::Button^  ViewUnpaidAccountsReportButton;

	private: System::Windows::Forms::Button^  ViewSalespersonSummaryReportButton;
	private: System::Windows::Forms::Button^  ViewSalesTaxReportButton;
	private: System::Windows::Forms::Button^  ViewSalespersonIndividualReportButton;
	private: System::Windows::Forms::Label^  StaticInvoiceNumberLabel;
	private: System::Windows::Forms::Label^  NextInvoiceNumber;
	private: System::Windows::Forms::Button^  ChangeInvoiceNumberButton;
	private: System::Windows::Forms::Button^  SaveAndCloseButton;
	private: System::Windows::Forms::Button^  SearchByPhoneNumberButton;
	private: System::Windows::Forms::Button^  SearchByCustomerNameButton;
	private: System::Windows::Forms::Button^  ViewInvoicesReportButton;
	private: System::Windows::Forms::Button^  DeleteInvoice;
	private: System::Windows::Forms::Label^  ConnectedStatusLabel;
	private: System::Windows::Forms::Label^  StaticConnectionStatusLabel;
	private: System::Windows::Forms::Label^  AuthorLabel;
	private: System::Windows::Forms::Timer^  InvoiceLoop;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BaseWindow::typeid));
			this->CreateNewInvoiceButton = (gcnew System::Windows::Forms::Button());
			this->StaticSearchOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->SearchByInvoiceNumberButton = (gcnew System::Windows::Forms::Button());
			this->StaticInvoiceOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->ApplyAPaymentButton = (gcnew System::Windows::Forms::Button());
			this->StaticReportingOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->ViewUnpaidAccountsReportButton = (gcnew System::Windows::Forms::Button());
			this->ViewSalespersonSummaryReportButton = (gcnew System::Windows::Forms::Button());
			this->ViewSalesTaxReportButton = (gcnew System::Windows::Forms::Button());
			this->ViewSalespersonIndividualReportButton = (gcnew System::Windows::Forms::Button());
			this->StaticInvoiceNumberLabel = (gcnew System::Windows::Forms::Label());
			this->NextInvoiceNumber = (gcnew System::Windows::Forms::Label());
			this->ChangeInvoiceNumberButton = (gcnew System::Windows::Forms::Button());
			this->SaveAndCloseButton = (gcnew System::Windows::Forms::Button());
			this->SearchByPhoneNumberButton = (gcnew System::Windows::Forms::Button());
			this->SearchByCustomerNameButton = (gcnew System::Windows::Forms::Button());
			this->ViewInvoicesReportButton = (gcnew System::Windows::Forms::Button());
			this->DeleteInvoice = (gcnew System::Windows::Forms::Button());
			this->StaticConnectionStatusLabel = (gcnew System::Windows::Forms::Label());
			this->ConnectedStatusLabel = (gcnew System::Windows::Forms::Label());
			this->AuthorLabel = (gcnew System::Windows::Forms::Label());
			this->InvoiceLoop = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// CreateNewInvoiceButton
			// 
			this->CreateNewInvoiceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold));
			this->CreateNewInvoiceButton->Location = System::Drawing::Point(297, 35);
			this->CreateNewInvoiceButton->Name = L"CreateNewInvoiceButton";
			this->CreateNewInvoiceButton->Size = System::Drawing::Size(272, 77);
			this->CreateNewInvoiceButton->TabIndex = 0;
			this->CreateNewInvoiceButton->Text = L"Create New Invoice";
			this->CreateNewInvoiceButton->UseVisualStyleBackColor = true;
			this->CreateNewInvoiceButton->Click += gcnew System::EventHandler(this, &BaseWindow::CreateNewInvoiceButton_Click);
			// 
			// StaticSearchOptionsLabel
			// 
			this->StaticSearchOptionsLabel->AutoSize = true;
			this->StaticSearchOptionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold));
			this->StaticSearchOptionsLabel->Location = System::Drawing::Point(89, 9);
			this->StaticSearchOptionsLabel->Name = L"StaticSearchOptionsLabel";
			this->StaticSearchOptionsLabel->Size = System::Drawing::Size(125, 18);
			this->StaticSearchOptionsLabel->TabIndex = 1;
			this->StaticSearchOptionsLabel->Text = L"Search Options";
			// 
			// SearchByInvoiceNumberButton
			// 
			this->SearchByInvoiceNumberButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SearchByInvoiceNumberButton->Location = System::Drawing::Point(13, 35);
			this->SearchByInvoiceNumberButton->Name = L"SearchByInvoiceNumberButton";
			this->SearchByInvoiceNumberButton->Size = System::Drawing::Size(263, 77);
			this->SearchByInvoiceNumberButton->TabIndex = 2;
			this->SearchByInvoiceNumberButton->Text = L"Search by Invoice Number";
			this->SearchByInvoiceNumberButton->UseVisualStyleBackColor = true;
			this->SearchByInvoiceNumberButton->Click += gcnew System::EventHandler(this, &BaseWindow::SearchByInvoiceNumberButton_Click);
			// 
			// StaticInvoiceOptionsLabel
			// 
			this->StaticInvoiceOptionsLabel->AutoSize = true;
			this->StaticInvoiceOptionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold));
			this->StaticInvoiceOptionsLabel->Location = System::Drawing::Point(374, 9);
			this->StaticInvoiceOptionsLabel->Name = L"StaticInvoiceOptionsLabel";
			this->StaticInvoiceOptionsLabel->Size = System::Drawing::Size(125, 18);
			this->StaticInvoiceOptionsLabel->TabIndex = 5;
			this->StaticInvoiceOptionsLabel->Text = L"Invoice Options";
			// 
			// ApplyAPaymentButton
			// 
			this->ApplyAPaymentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ApplyAPaymentButton->Location = System::Drawing::Point(297, 118);
			this->ApplyAPaymentButton->Name = L"ApplyAPaymentButton";
			this->ApplyAPaymentButton->Size = System::Drawing::Size(272, 78);
			this->ApplyAPaymentButton->TabIndex = 6;
			this->ApplyAPaymentButton->Text = L"Apply a Payment";
			this->ApplyAPaymentButton->UseVisualStyleBackColor = true;
			this->ApplyAPaymentButton->Click += gcnew System::EventHandler(this, &BaseWindow::ApplyAPaymentButton_Click);
			// 
			// StaticReportingOptionsLabel
			// 
			this->StaticReportingOptionsLabel->AutoSize = true;
			this->StaticReportingOptionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold));
			this->StaticReportingOptionsLabel->Location = System::Drawing::Point(660, 9);
			this->StaticReportingOptionsLabel->Name = L"StaticReportingOptionsLabel";
			this->StaticReportingOptionsLabel->Size = System::Drawing::Size(145, 18);
			this->StaticReportingOptionsLabel->TabIndex = 7;
			this->StaticReportingOptionsLabel->Text = L"Reporting Options";
			// 
			// ViewUnpaidAccountsReportButton
			// 
			this->ViewUnpaidAccountsReportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ViewUnpaidAccountsReportButton->Location = System::Drawing::Point(592, 35);
			this->ViewUnpaidAccountsReportButton->Name = L"ViewUnpaidAccountsReportButton";
			this->ViewUnpaidAccountsReportButton->Size = System::Drawing::Size(272, 77);
			this->ViewUnpaidAccountsReportButton->TabIndex = 8;
			this->ViewUnpaidAccountsReportButton->Text = L"View Unpaid Accounts Report";
			this->ViewUnpaidAccountsReportButton->UseVisualStyleBackColor = true;
			this->ViewUnpaidAccountsReportButton->Click += gcnew System::EventHandler(this, &BaseWindow::ViewUnpaidAccountsReportButton_Click);
			// 
			// ViewSalespersonSummaryReportButton
			// 
			this->ViewSalespersonSummaryReportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ViewSalespersonSummaryReportButton->Location = System::Drawing::Point(592, 202);
			this->ViewSalespersonSummaryReportButton->Name = L"ViewSalespersonSummaryReportButton";
			this->ViewSalespersonSummaryReportButton->Size = System::Drawing::Size(272, 78);
			this->ViewSalespersonSummaryReportButton->TabIndex = 11;
			this->ViewSalespersonSummaryReportButton->Text = L"View Salesperson Summary Report";
			this->ViewSalespersonSummaryReportButton->UseVisualStyleBackColor = true;
			this->ViewSalespersonSummaryReportButton->Click += gcnew System::EventHandler(this, &BaseWindow::ViewSalespersonSummaryReportButton_Click);
			// 
			// ViewSalesTaxReportButton
			// 
			this->ViewSalesTaxReportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ViewSalesTaxReportButton->Location = System::Drawing::Point(592, 370);
			this->ViewSalesTaxReportButton->Name = L"ViewSalesTaxReportButton";
			this->ViewSalesTaxReportButton->Size = System::Drawing::Size(272, 78);
			this->ViewSalesTaxReportButton->TabIndex = 12;
			this->ViewSalesTaxReportButton->Text = L"View Sales Tax Report";
			this->ViewSalesTaxReportButton->UseVisualStyleBackColor = true;
			this->ViewSalesTaxReportButton->Click += gcnew System::EventHandler(this, &BaseWindow::ViewSalesTaxReportButton_Click);
			// 
			// ViewSalespersonIndividualReportButton
			// 
			this->ViewSalespersonIndividualReportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ViewSalespersonIndividualReportButton->Location = System::Drawing::Point(592, 286);
			this->ViewSalespersonIndividualReportButton->Name = L"ViewSalespersonIndividualReportButton";
			this->ViewSalespersonIndividualReportButton->Size = System::Drawing::Size(272, 78);
			this->ViewSalespersonIndividualReportButton->TabIndex = 13;
			this->ViewSalespersonIndividualReportButton->Text = L"View Salesperson Individual Report";
			this->ViewSalespersonIndividualReportButton->UseVisualStyleBackColor = true;
			this->ViewSalespersonIndividualReportButton->Click += gcnew System::EventHandler(this, &BaseWindow::ViewSalespersonIndividualReportButton_Click);
			// 
			// StaticInvoiceNumberLabel
			// 
			this->StaticInvoiceNumberLabel->AutoSize = true;
			this->StaticInvoiceNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->StaticInvoiceNumberLabel->Location = System::Drawing::Point(12, 343);
			this->StaticInvoiceNumberLabel->Name = L"StaticInvoiceNumberLabel";
			this->StaticInvoiceNumberLabel->Size = System::Drawing::Size(149, 18);
			this->StaticInvoiceNumberLabel->TabIndex = 14;
			this->StaticInvoiceNumberLabel->Text = L"Next Invoice Number:";
			// 
			// NextInvoiceNumber
			// 
			this->NextInvoiceNumber->AutoSize = true;
			this->NextInvoiceNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->NextInvoiceNumber->Location = System::Drawing::Point(160, 343);
			this->NextInvoiceNumber->Name = L"NextInvoiceNumber";
			this->NextInvoiceNumber->Size = System::Drawing::Size(42, 18);
			this->NextInvoiceNumber->TabIndex = 15;
			this->NextInvoiceNumber->Text = L"Error";
			this->NextInvoiceNumber->Click += gcnew System::EventHandler(this, &BaseWindow::NextInvoiceNumber_Click);
			// 
			// ChangeInvoiceNumberButton
			// 
			this->ChangeInvoiceNumberButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ChangeInvoiceNumberButton->Location = System::Drawing::Point(14, 370);
			this->ChangeInvoiceNumberButton->Name = L"ChangeInvoiceNumberButton";
			this->ChangeInvoiceNumberButton->Size = System::Drawing::Size(263, 78);
			this->ChangeInvoiceNumberButton->TabIndex = 16;
			this->ChangeInvoiceNumberButton->Text = L"Change Next Invoice Number";
			this->ChangeInvoiceNumberButton->UseVisualStyleBackColor = true;
			this->ChangeInvoiceNumberButton->Click += gcnew System::EventHandler(this, &BaseWindow::ChangeInvoiceNumberButton_Click);
			// 
			// SaveAndCloseButton
			// 
			this->SaveAndCloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SaveAndCloseButton->Location = System::Drawing::Point(307, 371);
			this->SaveAndCloseButton->Name = L"SaveAndCloseButton";
			this->SaveAndCloseButton->Size = System::Drawing::Size(262, 77);
			this->SaveAndCloseButton->TabIndex = 17;
			this->SaveAndCloseButton->Text = L"Save and Close";
			this->SaveAndCloseButton->UseVisualStyleBackColor = true;
			this->SaveAndCloseButton->Click += gcnew System::EventHandler(this, &BaseWindow::SaveAndCloseButton_Click);
			// 
			// SearchByPhoneNumberButton
			// 
			this->SearchByPhoneNumberButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SearchByPhoneNumberButton->Location = System::Drawing::Point(13, 118);
			this->SearchByPhoneNumberButton->Name = L"SearchByPhoneNumberButton";
			this->SearchByPhoneNumberButton->Size = System::Drawing::Size(263, 78);
			this->SearchByPhoneNumberButton->TabIndex = 18;
			this->SearchByPhoneNumberButton->Text = L"Search by Phone Number";
			this->SearchByPhoneNumberButton->UseVisualStyleBackColor = true;
			this->SearchByPhoneNumberButton->Click += gcnew System::EventHandler(this, &BaseWindow::SearchByPhoneNumberButton_Click);
			// 
			// SearchByCustomerNameButton
			// 
			this->SearchByCustomerNameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SearchByCustomerNameButton->Location = System::Drawing::Point(14, 202);
			this->SearchByCustomerNameButton->Name = L"SearchByCustomerNameButton";
			this->SearchByCustomerNameButton->Size = System::Drawing::Size(262, 78);
			this->SearchByCustomerNameButton->TabIndex = 19;
			this->SearchByCustomerNameButton->Text = L"Search by Customer Name";
			this->SearchByCustomerNameButton->UseVisualStyleBackColor = true;
			this->SearchByCustomerNameButton->Click += gcnew System::EventHandler(this, &BaseWindow::SearchByCustomerNameButton_Click);
			// 
			// ViewInvoicesReportButton
			// 
			this->ViewInvoicesReportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ViewInvoicesReportButton->Location = System::Drawing::Point(592, 118);
			this->ViewInvoicesReportButton->Name = L"ViewInvoicesReportButton";
			this->ViewInvoicesReportButton->Size = System::Drawing::Size(272, 78);
			this->ViewInvoicesReportButton->TabIndex = 9;
			this->ViewInvoicesReportButton->Text = L"View Invoices Report";
			this->ViewInvoicesReportButton->UseVisualStyleBackColor = true;
			this->ViewInvoicesReportButton->Click += gcnew System::EventHandler(this, &BaseWindow::ViewInvoicesReportButton_Click);
			// 
			// DeleteInvoice
			// 
			this->DeleteInvoice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->DeleteInvoice->Location = System::Drawing::Point(297, 202);
			this->DeleteInvoice->Name = L"DeleteInvoice";
			this->DeleteInvoice->Size = System::Drawing::Size(272, 78);
			this->DeleteInvoice->TabIndex = 20;
			this->DeleteInvoice->Text = L"Delete Invoice";
			this->DeleteInvoice->UseVisualStyleBackColor = true;
			this->DeleteInvoice->Click += gcnew System::EventHandler(this, &BaseWindow::DeleteInvoice_Click);
			// 
			// StaticConnectionStatusLabel
			// 
			this->StaticConnectionStatusLabel->AutoSize = true;
			this->StaticConnectionStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->StaticConnectionStatusLabel->Location = System::Drawing::Point(339, 317);
			this->StaticConnectionStatusLabel->Name = L"StaticConnectionStatusLabel";
			this->StaticConnectionStatusLabel->Size = System::Drawing::Size(201, 18);
			this->StaticConnectionStatusLabel->TabIndex = 21;
			this->StaticConnectionStatusLabel->Text = L"Database Connection Status:";
			// 
			// ConnectedStatusLabel
			// 
			this->ConnectedStatusLabel->AutoSize = true;
			this->ConnectedStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->ConnectedStatusLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->ConnectedStatusLabel->Location = System::Drawing::Point(403, 343);
			this->ConnectedStatusLabel->Name = L"ConnectedStatusLabel";
			this->ConnectedStatusLabel->Size = System::Drawing::Size(80, 18);
			this->ConnectedStatusLabel->TabIndex = 22;
			this->ConnectedStatusLabel->Text = L"Connected";
			// 
			// AuthorLabel
			// 
			this->AuthorLabel->AutoSize = true;
			this->AuthorLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AuthorLabel->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->AuthorLabel->Location = System::Drawing::Point(12, 461);
			this->AuthorLabel->Name = L"AuthorLabel";
			this->AuthorLabel->Size = System::Drawing::Size(208, 23);
			this->AuthorLabel->TabIndex = 23;
			this->AuthorLabel->Text = L"Hexagon Industries";
			// 
			// InvoiceLoop
			// 
			this->InvoiceLoop->Enabled = true;
			this->InvoiceLoop->Tick += gcnew System::EventHandler(this, &BaseWindow::InvoiceLoop_Tick);
			// 
			// BaseWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(881, 494);
			this->Controls->Add(this->AuthorLabel);
			this->Controls->Add(this->ConnectedStatusLabel);
			this->Controls->Add(this->StaticConnectionStatusLabel);
			this->Controls->Add(this->DeleteInvoice);
			this->Controls->Add(this->SearchByCustomerNameButton);
			this->Controls->Add(this->SearchByPhoneNumberButton);
			this->Controls->Add(this->SaveAndCloseButton);
			this->Controls->Add(this->ChangeInvoiceNumberButton);
			this->Controls->Add(this->NextInvoiceNumber);
			this->Controls->Add(this->StaticInvoiceNumberLabel);
			this->Controls->Add(this->ViewSalespersonIndividualReportButton);
			this->Controls->Add(this->ViewSalesTaxReportButton);
			this->Controls->Add(this->ViewSalespersonSummaryReportButton);
			this->Controls->Add(this->ViewInvoicesReportButton);
			this->Controls->Add(this->ViewUnpaidAccountsReportButton);
			this->Controls->Add(this->StaticReportingOptionsLabel);
			this->Controls->Add(this->ApplyAPaymentButton);
			this->Controls->Add(this->StaticInvoiceOptionsLabel);
			this->Controls->Add(this->SearchByInvoiceNumberButton);
			this->Controls->Add(this->StaticSearchOptionsLabel);
			this->Controls->Add(this->CreateNewInvoiceButton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"BaseWindow";
			this->Text = L"Fluid Invoice";
			this->Load += gcnew System::EventHandler(this, &BaseWindow::BaseWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::String^ DynamicInvoiceNumberString = "10000";

	private: System::Void BaseWindow_Load(System::Object^  sender, System::EventArgs^  e) {
		this->AutoSize = true;
		String^ SQLQuery = "SELECT * FROM Software_Base";
		String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
		MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
		MySqlDataReader^ DataReader;
		String^ Output;

		try {
			Connection->Open();
			DataReader = FirstRunCheck->ExecuteReader();
			while (DataReader->Read()) {
				Output = DataReader->GetString(0);
			}
			Connection->Close();
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}


		if (Output == "0") {
			Connection->Open();
			MySqlCommand^ UpdateFirstRun = gcnew MySqlCommand("UPDATE Software_Base SET FirstRun = 1", Connection);
			DataReader = UpdateFirstRun->ExecuteReader();
			Connection->Close();

			Connection->Open();
			MySqlCommand^ SetInvoiceNumber = gcnew MySqlCommand("UPDATE Software_Base SET Current_Invoice_Number = 10000", Connection);
			DataReader = SetInvoiceNumber->ExecuteReader();
			Connection->Close();

			Connection->Open();
			MySqlCommand^ GetInvoiceNumber = gcnew MySqlCommand("SELECT * FROM Software_Base", Connection);
			DataReader = GetInvoiceNumber->ExecuteReader();
			while (DataReader->Read()) {
				DynamicInvoiceNumberString = DataReader->GetString(1);
			}
			Connection->Close();
		}
		else {
			//MessageBox::Show("Database Connection Successful!");
			Connection->Open();
			MySqlCommand^ GetInvoiceNumber = gcnew MySqlCommand("SELECT * FROM Software_Base", Connection);
			DataReader = GetInvoiceNumber->ExecuteReader();
			while (DataReader->Read()) {
				DynamicInvoiceNumberString = DataReader->GetString(1);
			}
			Connection->Close();
		}
		this->NextInvoiceNumber->Text = DynamicInvoiceNumberString;
	}

	private: System::Void CreateNewInvoiceButton_Click(System::Object^  sender, System::EventArgs^  e) {
		NewInvoiceForm ^ CreateNewInvoiceForm = gcnew NewInvoiceForm;
		CreateNewInvoiceForm->InvoiceNumberString = DynamicInvoiceNumberString;
		CreateNewInvoiceForm->ShowDialog();
		if (CreateNewInvoiceForm->isCheckBool == "1") {
			msclr::interop::marshal_context context;

			int temp = Convert::ToInt32(DynamicInvoiceNumberString);
			temp++;
			DynamicInvoiceNumberString = Convert::ToString(temp);
			this->NextInvoiceNumber->Text = DynamicInvoiceNumberString;

			String^ SQLQuery = "UPDATE Software_Base SET Current_Invoice_Number = " + DynamicInvoiceNumberString;
			String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ SetInvoiceNumber = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;

			try {
				Connection->Open();
				DataReader = SetInvoiceNumber->ExecuteReader();
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}


	private: System::Void SearchByInvoiceNumberButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SearchForm ^ NewSearchForm = gcnew SearchForm;
		NewSearchForm->DynamicLabelString = L"Invoice Number";
		NewSearchForm->ShowDialog();
		msclr::interop::marshal_context context;

		if (NewSearchForm->isCheckBool == "1") {

			bool wasInputFound = true;
			if (wasInputFound == true) {
				NewInvoiceForm ^ SearchOldInvoiceForm = gcnew NewInvoiceForm;
				SearchOldInvoiceForm->isBoolChecker = "1";
				SearchOldInvoiceForm->InvoiceNumberString = NewSearchForm->SEARCHINGFORINVOICENUMBER;
				SearchOldInvoiceForm->SearchedForInvoiceNumber = NewSearchForm->SEARCHINGFORINVOICENUMBER;
				SearchOldInvoiceForm->ShowDialog();
			}
			else {
				MessageBox::Show("This Invoice Number does not exist.",
					"Fluid Invoice", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}

		}
	}

	private: System::Void ChangeInvoiceNumberButton_Click(System::Object^  sender, System::EventArgs^  e) {
		ChangeInvoiceNumberForm ^ NewChangeInvoiceNumberForm = gcnew ChangeInvoiceNumberForm;
		msclr::interop::marshal_context context;
		NewChangeInvoiceNumberForm->InvoiceNumberString = DynamicInvoiceNumberString;
		NewChangeInvoiceNumberForm->ShowDialog();
		if (NewChangeInvoiceNumberForm->CheckingString == "1") {
			this->NextInvoiceNumber->Text = NewChangeInvoiceNumberForm->InvoiceNumberString;
			DynamicInvoiceNumberString = NewChangeInvoiceNumberForm->InvoiceNumberString;
		}

		String^ SQLQuery = "UPDATE Software_Base SET Current_Invoice_Number = " + DynamicInvoiceNumberString;
		String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
		MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ SetInvoiceNumber = gcnew MySqlCommand(SQLQuery, Connection);
		MySqlDataReader^ DataReader;


		try {
			Connection->Open();
			DataReader = SetInvoiceNumber->ExecuteReader();
			Connection->Close();
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void SaveAndCloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	public: System::String^ SearchingForInvoiceNumber;

	private: System::Void SearchByPhoneNumberButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PhoneNumberSearchForm ^ NewSearchForm = gcnew PhoneNumberSearchForm;
		NewSearchForm->ShowDialog();
		msclr::interop::marshal_context context;

		if (NewSearchForm->CheckingBool == "1") {
			;
			bool wasInputFound = true;

			if (wasInputFound == true) {

				String^ TESTING = NewSearchForm->SEARCHINGFORPHONENUMBER;
				String^ SQLQuery = "SELECT * FROM Invoices WHERE Phone_Number LIKE '%" + TESTING + "%';";
				String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;

				array<String^> ^ OtherDateList = gcnew array<String^>(100);
				array<String^> ^ OtherINVLIST = gcnew array<String^>(100);
				array<String^> ^ OtherCUSTNameList = gcnew array<String^>(100);
				array<String^> ^ OtherPhoneNumberList = gcnew array<String^>(100);
				array<String^> ^ OtherSalesPersonList = gcnew array<String^>(100);

				try {
					Connection->Open();
					DataReader = FirstRunCheck->ExecuteReader();
					int q = 0;
					while (DataReader->Read()) {
						SearchingForInvoiceNumber = DataReader->GetString(0);
						OtherDateList[q] = DataReader->GetString(2);
						OtherINVLIST[q] = DataReader->GetString(0);
						OtherCUSTNameList[q] = DataReader->GetString(1);
						OtherPhoneNumberList[q] = DataReader->GetString(5);
						OtherSalesPersonList[q] = DataReader->GetString(3);
						q++;
					}

					if (q > 1) {
						SelectInvoiceForm ^ SelectPhoneForm = gcnew SelectInvoiceForm;
						SelectPhoneForm->WhichSearch = "1";
						SelectPhoneForm->HowMany = q;

						for (int i = 0; i < q; i++) {

							SelectPhoneForm->DateList[i] = OtherDateList[i];
							SelectPhoneForm->INV_List[i] = OtherINVLIST[i];
							SelectPhoneForm->CUSTNameList[i] = OtherCUSTNameList[i];
							SelectPhoneForm->PhoneNumberList[i] = OtherPhoneNumberList[i];
							SelectPhoneForm->SalesPersonList[i] = OtherSalesPersonList[i];
						}
						SelectPhoneForm->ShowDialog();

						if (SelectPhoneForm->SelectBool = "1") {
							SearchingForInvoiceNumber = SelectPhoneForm->SelectedInvoiceNumber;
						}
					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				NewInvoiceForm ^ SearchOldInvoiceForm = gcnew NewInvoiceForm;
				SearchOldInvoiceForm->isBoolChecker = "1";
				SearchOldInvoiceForm->InvoiceNumberString = SearchingForInvoiceNumber;
				SearchOldInvoiceForm->SearchedForInvoiceNumber = SearchingForInvoiceNumber;
				SearchOldInvoiceForm->ShowDialog();
			}
			else {
				MessageBox::Show("This Customer's name was not found.",
					"Fluid Invoice", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}

		}
	}

	private: System::Void CheckInvoiceNumber() {
		String^ SQLQuery = "SELECT * FROM Software_Base;";
		String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
		MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
		MySqlDataReader^ DataReader;
		try {
			Connection->Open();
			DataReader = FirstRunCheck->ExecuteReader();
			while (DataReader->Read()) {
				DynamicInvoiceNumberString = DataReader->GetString(1);
			}
			Connection->Close();
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
		this->NextInvoiceNumber->Text = DynamicInvoiceNumberString;
	}

	private: System::Void SearchByCustomerNameButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SearchByCustomerNameForm ^ NewSearchForm = gcnew SearchByCustomerNameForm;
		NewSearchForm->ShowDialog();
		msclr::interop::marshal_context context;

		if (NewSearchForm->CheckingBool == "1") {
			bool wasInputFound = true;

			if (wasInputFound == true) {

				String^ TESTING = NewSearchForm->SEARCHINGFORCUSTOMERNAME;
				String^ SQLQuery = "SELECT * FROM Invoices WHERE Customer_Name LIKE '%" + TESTING + "%';";
				String^ connectionInfo = "Server=SERVERIP;Port=3306;Database=FluidInvoice;Uid=FluidInvoice;Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ FirstRunCheck = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;

				array<String^> ^ OtherDateList = gcnew array<String^>(100);
				array<String^> ^ OtherINVLIST = gcnew array<String^>(100);
				array<String^> ^ OtherCUSTNameList = gcnew array<String^>(100);
				array<String^> ^ OtherPhoneNumberList = gcnew array<String^>(100);
				array<String^> ^ OtherSalesPersonList = gcnew array<String^>(100);

				try {
					Connection->Open();
					DataReader = FirstRunCheck->ExecuteReader();
					int q = 0;
					while (DataReader->Read()) {
						SearchingForInvoiceNumber = DataReader->GetString(0);
						OtherDateList[q] = DataReader->GetString(2);
						OtherINVLIST[q] = DataReader->GetString(0);
						OtherCUSTNameList[q] = DataReader->GetString(1);
						OtherPhoneNumberList[q] = DataReader->GetString(5);
						OtherSalesPersonList[q] = DataReader->GetString(3);

						q++;
					}

					if (q > 1) {
						SelectInvoiceForm ^ SelectCustomerForm = gcnew SelectInvoiceForm;
						SelectCustomerForm->WhichSearch = "1";
						SelectCustomerForm->HowMany = q;

						for (int i = 0; i < q; i++) {

							SelectCustomerForm->DateList[i] = OtherDateList[i];
							SelectCustomerForm->INV_List[i] = OtherINVLIST[i];
							SelectCustomerForm->CUSTNameList[i] = OtherCUSTNameList[i];
							SelectCustomerForm->PhoneNumberList[i] = OtherPhoneNumberList[i];
							SelectCustomerForm->SalesPersonList[i] = OtherSalesPersonList[i];
						}
						SelectCustomerForm->ShowDialog();

						if (SelectCustomerForm->SelectBool = "1") {
							SearchingForInvoiceNumber = SelectCustomerForm->SelectedInvoiceNumber;
						}
					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				NewInvoiceForm ^ SearchOldInvoiceForm = gcnew NewInvoiceForm;
				SearchOldInvoiceForm->isBoolChecker = "1";
				SearchOldInvoiceForm->InvoiceNumberString = SearchingForInvoiceNumber;
				SearchOldInvoiceForm->SearchedForInvoiceNumber = SearchingForInvoiceNumber;
				SearchOldInvoiceForm->ShowDialog();
			}
			else {
				MessageBox::Show("This Customer's name was not found.",
					"Fluid Invoice", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}

		}
	}

	private: System::Void ApplyAPaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
		ApplyPaymentForm ^ ApplyPayment = gcnew ApplyPaymentForm;
		ApplyPayment->ShowDialog();
	}

	private: System::Void ViewUnpaidAccountsReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PASSWORD ^ password = gcnew PASSWORD;
		password->ShowDialog();
		if (password->submitted == true) {
			if (password->authenticated == true) {
				PickDateForm ^ PickDates = gcnew PickDateForm;
				PickDates->ShowDialog();
				if (PickDates->Searched == true) {
					ViewUnpaidAccounts ^ UnpaidAccountsList = gcnew ViewUnpaidAccounts;
					UnpaidAccountsList->StartingDate = PickDates->StartingDateString;
					UnpaidAccountsList->EndingDate = PickDates->EndingDateString;
					UnpaidAccountsList->Show();
				}
			}
			else {
				MessageBox::Show("Incorrect Password.");
			}
		}
	}

	private: System::Void ViewInvoicesReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PASSWORD ^ password = gcnew PASSWORD;
		password->ShowDialog();
		if (password->submitted == true) {
			if (password->authenticated == true) {
				PickDateForm ^ PickDates = gcnew PickDateForm;
				PickDates->ShowDialog();
				if (PickDates->Searched == true) {
					ViewUnpaidAccounts ^ UnpaidAccountsList = gcnew ViewUnpaidAccounts;
					UnpaidAccountsList->StartingDate = PickDates->StartingDateString;
					UnpaidAccountsList->EndingDate = PickDates->EndingDateString;
					UnpaidAccountsList->ViewAll = true;
					UnpaidAccountsList->Show();
				}
			}
			else {
				MessageBox::Show("Incorrect Password.");
			}
		}
	}

	private: System::Void ViewSalespersonSummaryReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PASSWORD ^ password = gcnew PASSWORD;
		password->ShowDialog();
		if (password->submitted == true) {
			if (password->authenticated == true) {
				PickDateForm ^ PickDates = gcnew PickDateForm;
				PickDates->ShowDialog();
				if (PickDates->Searched == true) {
					SalespersonSummaryReport ^ SPSummary = gcnew SalespersonSummaryReport;
					SPSummary->StartingDate = PickDates->StartingDateString;
					SPSummary->EndingDate = PickDates->EndingDateString;
					SPSummary->ViewAll = true;
					SPSummary->Show();
				}
			}
			else {
				MessageBox::Show("Incorrect Password.");
			}
		}
	}

	private: System::Void DeleteInvoice_Click(System::Object^  sender, System::EventArgs^  e) {
		SearchForm ^ NewSearchForm = gcnew SearchForm;
		NewSearchForm->DynamicLabelString = L"Invoice Number";
		NewSearchForm->ShowDialog();
		msclr::interop::marshal_context context;

		if (NewSearchForm->isCheckBool == "1") {

			String^ SQLQuery = "SELECT * FROM Invoices WHERE Invoice_Number = " + NewSearchForm->SEARCHINGFORINVOICENUMBER;
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ GetInvoiceNumber = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;

			try {
				Connection->Open();
				DataReader = GetInvoiceNumber->ExecuteReader();
				Connection->Close();
				String^ DeleteQuery = "DELETE FROM Invoices WHERE Invoice_Number = " + NewSearchForm->SEARCHINGFORINVOICENUMBER + "; DROP TABLE `" + NewSearchForm->SEARCHINGFORINVOICENUMBER + "`;";
				MySqlCommand^ DeleteInvoiceNumber = gcnew MySqlCommand(DeleteQuery, Connection);

				try {
					Connection->Open();
					DataReader = DeleteInvoiceNumber->ExecuteReader();
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void ViewSalespersonIndividualReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PASSWORD ^ password = gcnew PASSWORD;
		password->ShowDialog();
		if (password->submitted == true) {
			if (password->authenticated == true) {
				String^ SearchedForSalesperson;
				SalespersonIndividualReport ^ SearchSalesperson = gcnew SalespersonIndividualReport;
				SearchSalesperson->ShowDialog();
				if (SearchSalesperson->wasSearched == true) {
					SearchedForSalesperson = SearchSalesperson->Salesperson_Name;
					PickDateForm ^ PickDates = gcnew PickDateForm;
					PickDates->ShowDialog();
					if (PickDates->Searched == true) {
						SalespersonSummaryReport ^ SPSummary = gcnew SalespersonSummaryReport;
						SPSummary->StartingDate = PickDates->StartingDateString;
						SPSummary->EndingDate = PickDates->EndingDateString;
						SPSummary->Salesperson_Searched_Name = SearchedForSalesperson;
						SPSummary->ViewAll = false;
						SPSummary->Show();
					}
				}
			}
			else {
				MessageBox::Show("Incorrect Password.");
			}
		}
	}

	private: System::Void ViewSalesTaxReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PASSWORD ^ password = gcnew PASSWORD;
		password->ShowDialog();
		if (password->submitted == true) {
			if (password->authenticated == true) {
				PickDateForm ^ PickDates = gcnew PickDateForm;
				PickDates->ShowDialog();
				if (PickDates->Searched == true) {
					SalesTaxReport ^ TaxReport = gcnew SalesTaxReport;
					TaxReport->StartingDate = PickDates->StartingDateString;
					TaxReport->EndingDate = PickDates->EndingDateString;
					TaxReport->Show();
				}
			}
			else {
				MessageBox::Show("Incorrect Password.");
			}
		}
	}

//Deprecated functions below
private: System::Void NextInvoiceNumber_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void InvoiceLoop_Tick(System::Object^  sender, System::EventArgs^  e) {
	CheckInvoiceNumber();
}
};
}