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


namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for SalesTaxReport
	/// </summary>
	public ref class SalesTaxReport : public System::Windows::Forms::Form
	{
	public:
		SalesTaxReport(void)
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
		~SalesTaxReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  SalesGridView;
	protected:








	private: System::Windows::Forms::Button^  CloseButton;
	private: System::Windows::Forms::Label^  StaticTotalPSTLabel;
	private: System::Windows::Forms::Label^  StaticTotalGSTLabel;
	private: System::Windows::Forms::Label^  StaticTotalTaxesLabel;
	private: System::Windows::Forms::Label^  PSTLabel;
	private: System::Windows::Forms::Label^  GSTLabel;
	private: System::Windows::Forms::Label^  TotalTaxesLabel;
	private: System::Windows::Forms::Button^  PrintButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Invoice_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Customer_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Subtotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Shipping;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  GST;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PST;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tax_Total;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesTaxReport::typeid));
			this->SalesGridView = (gcnew System::Windows::Forms::DataGridView());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->StaticTotalPSTLabel = (gcnew System::Windows::Forms::Label());
			this->StaticTotalGSTLabel = (gcnew System::Windows::Forms::Label());
			this->StaticTotalTaxesLabel = (gcnew System::Windows::Forms::Label());
			this->PSTLabel = (gcnew System::Windows::Forms::Label());
			this->GSTLabel = (gcnew System::Windows::Forms::Label());
			this->TotalTaxesLabel = (gcnew System::Windows::Forms::Label());
			this->PrintButton = (gcnew System::Windows::Forms::Button());
			this->Invoice_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Customer_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Shipping = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GST = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PST = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tax_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SalesGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// SalesGridView
			// 
			this->SalesGridView->AllowUserToAddRows = false;
			this->SalesGridView->AllowUserToDeleteRows = false;
			this->SalesGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->SalesGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->SalesGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->SalesGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SalesGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Invoice_Number,
					this->Customer_Name, this->Date, this->Subtotal, this->Shipping, this->GST, this->PST, this->Total, this->Tax_Total
			});
			this->SalesGridView->Location = System::Drawing::Point(12, 12);
			this->SalesGridView->Name = L"SalesGridView";
			this->SalesGridView->ReadOnly = true;
			this->SalesGridView->RowHeadersVisible = false;
			this->SalesGridView->RowTemplate->Height = 24;
			this->SalesGridView->Size = System::Drawing::Size(985, 242);
			this->SalesGridView->TabIndex = 0;
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(12, 331);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(75, 36);
			this->CloseButton->TabIndex = 1;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &SalesTaxReport::CloseButton_Click);
			// 
			// StaticTotalPSTLabel
			// 
			this->StaticTotalPSTLabel->AutoSize = true;
			this->StaticTotalPSTLabel->Location = System::Drawing::Point(833, 270);
			this->StaticTotalPSTLabel->Name = L"StaticTotalPSTLabel";
			this->StaticTotalPSTLabel->Size = System::Drawing::Size(75, 17);
			this->StaticTotalPSTLabel->TabIndex = 2;
			this->StaticTotalPSTLabel->Text = L"Total PST:";
			// 
			// StaticTotalGSTLabel
			// 
			this->StaticTotalGSTLabel->AutoSize = true;
			this->StaticTotalGSTLabel->Location = System::Drawing::Point(833, 287);
			this->StaticTotalGSTLabel->Name = L"StaticTotalGSTLabel";
			this->StaticTotalGSTLabel->Size = System::Drawing::Size(77, 17);
			this->StaticTotalGSTLabel->TabIndex = 3;
			this->StaticTotalGSTLabel->Text = L"Total GST:";
			// 
			// StaticTotalTaxesLabel
			// 
			this->StaticTotalTaxesLabel->AutoSize = true;
			this->StaticTotalTaxesLabel->Location = System::Drawing::Point(833, 304);
			this->StaticTotalTaxesLabel->Name = L"StaticTotalTaxesLabel";
			this->StaticTotalTaxesLabel->Size = System::Drawing::Size(86, 17);
			this->StaticTotalTaxesLabel->TabIndex = 4;
			this->StaticTotalTaxesLabel->Text = L"Total Taxes:";
			// 
			// PSTLabel
			// 
			this->PSTLabel->AutoSize = true;
			this->PSTLabel->Location = System::Drawing::Point(916, 270);
			this->PSTLabel->Name = L"PSTLabel";
			this->PSTLabel->Size = System::Drawing::Size(46, 17);
			this->PSTLabel->TabIndex = 5;
			this->PSTLabel->Text = L"label4";
			// 
			// GSTLabel
			// 
			this->GSTLabel->AutoSize = true;
			this->GSTLabel->Location = System::Drawing::Point(916, 287);
			this->GSTLabel->Name = L"GSTLabel";
			this->GSTLabel->Size = System::Drawing::Size(46, 17);
			this->GSTLabel->TabIndex = 6;
			this->GSTLabel->Text = L"label5";
			// 
			// TotalTaxesLabel
			// 
			this->TotalTaxesLabel->AutoSize = true;
			this->TotalTaxesLabel->Location = System::Drawing::Point(916, 304);
			this->TotalTaxesLabel->Name = L"TotalTaxesLabel";
			this->TotalTaxesLabel->Size = System::Drawing::Size(46, 17);
			this->TotalTaxesLabel->TabIndex = 7;
			this->TotalTaxesLabel->Text = L"label6";
			// 
			// PrintButton
			// 
			this->PrintButton->Location = System::Drawing::Point(864, 331);
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(75, 36);
			this->PrintButton->TabIndex = 8;
			this->PrintButton->Text = L"Print";
			this->PrintButton->UseVisualStyleBackColor = true;
			this->PrintButton->Click += gcnew System::EventHandler(this, &SalesTaxReport::PrintButton_Click);
			// 
			// Invoice_Number
			// 
			this->Invoice_Number->HeaderText = L"Invoice Number";
			this->Invoice_Number->Name = L"Invoice_Number";
			this->Invoice_Number->ReadOnly = true;
			// 
			// Customer_Name
			// 
			this->Customer_Name->HeaderText = L"Customer Name";
			this->Customer_Name->Name = L"Customer_Name";
			this->Customer_Name->ReadOnly = true;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->ReadOnly = true;
			// 
			// Shipping
			// 
			this->Shipping->HeaderText = L"Shipping";
			this->Shipping->Name = L"Shipping";
			this->Shipping->ReadOnly = true;
			// 
			// GST
			// 
			this->GST->HeaderText = L"GST";
			this->GST->Name = L"GST";
			this->GST->ReadOnly = true;
			// 
			// PST
			// 
			this->PST->HeaderText = L"PST";
			this->PST->Name = L"PST";
			this->PST->ReadOnly = true;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->ReadOnly = true;
			// 
			// Tax_Total
			// 
			this->Tax_Total->HeaderText = L"Tax Total";
			this->Tax_Total->Name = L"Tax_Total";
			this->Tax_Total->ReadOnly = true;
			// 
			// SalesTaxReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 379);
			this->Controls->Add(this->PrintButton);
			this->Controls->Add(this->TotalTaxesLabel);
			this->Controls->Add(this->GSTLabel);
			this->Controls->Add(this->PSTLabel);
			this->Controls->Add(this->StaticTotalTaxesLabel);
			this->Controls->Add(this->StaticTotalGSTLabel);
			this->Controls->Add(this->StaticTotalPSTLabel);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->SalesGridView);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SalesTaxReport";
			this->Text = L"Sales Tax Report";
			this->Load += gcnew System::EventHandler(this, &SalesTaxReport::SalesTaxReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SalesGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ StartingDate;
	public: String^ EndingDate;
	public: int i = 0;
	public: Double TotalShipping = 0;

	private: System::Void SalesTaxReport_Load(System::Object^  sender, System::EventArgs^  e) {
		DateTime StartDate = DateTime::Parse(StartingDate);
		DateTime EndDate = DateTime::Parse(EndingDate);
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
			Double TotalPST = 0;
			Double TotalGST = 0;
			Double TotalTax = 0;

			try {
				Connection->Open();
				DataReader = FirstRunCheck->ExecuteReader();
				i = 0;
				while (DataReader->Read()) {
					DateTime TEMP;

					TEMP = DateTime::Parse(DataReader->GetString(2));

					if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0 && i < InvoiceNumbers.size()) {
						this->SalesGridView->Rows->Add(1);
						this->SalesGridView[0, i]->Value = DataReader->GetString(0);
						this->SalesGridView[1, i]->Value = DataReader->GetString(1);
						this->SalesGridView[2, i]->Value = DataReader->GetString(2);
						this->SalesGridView[3, i]->Value = DataReader->GetString(9);
						this->SalesGridView[4, i]->Value = DataReader->GetString(7);
						this->SalesGridView[5, i]->Value = DataReader->GetString(10);
						this->SalesGridView[6, i]->Value = DataReader->GetString(11);
						this->SalesGridView[7, i]->Value = DataReader->GetString(12);
						this->SalesGridView[8, i]->Value = Convert::ToDouble(this->SalesGridView[5, i]->Value) + Convert::ToDouble(this->SalesGridView[6, i]->Value);
						TotalSold += Convert::ToDouble(this->SalesGridView[7, i]->Value);
						TotalPST += Convert::ToDouble(DataReader->GetString(11));
						TotalGST += Convert::ToDouble(DataReader->GetString(10));
						TotalTax += Convert::ToDouble(SalesGridView[8, i]->Value);
						TotalShipping += Convert::ToDouble(DataReader->GetString(7));
						i++;
					}

				}
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}


			this->PSTLabel->Text = "$" + TotalPST;
			this->GSTLabel->Text = "$" + TotalGST;
			this->TotalTaxesLabel->Text = "$" + TotalTax;
		}
		else {
			MessageBox::Show("No Invoices found within the specified dates");
			this->Close();
		}


	}
	private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void PrintButton_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		std::string CompanyName = "Company Name";
		std::string CompanyAddress = "Company Address";

		std::ofstream ReportFile;
		std::string SalestaxFileName;

		SalestaxFileName = "SalesTaxReport.html";

		ReportFile.open(SalestaxFileName);

		ReportFile << "<!DOCTYPE html><html><header><title>Salesperson Report</title>";
		ReportFile << "</header>";
		ReportFile << "<body style='font-family: Helvetica; font - size: 12px;'>";
		ReportFile << "<div style='display: block;'>";
		ReportFile << "<table border='0' width='100%' cellpadding='10' cellspacing='0'>";
		ReportFile << "<tbody>";
		ReportFile << "<tr>";
		ReportFile << "<td width='100%'>";
		ReportFile << "<table border='0' width='100%'>";
		ReportFile << "<tbody>";
		ReportFile << "<tr>";
		ReportFile << "<td width='65%'>";
		ReportFile << "<table border='0'>";
		ReportFile << "<tbody> <tr>";
		ReportFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'> <img src='InvoiceLogo.png' border='0' height='75' alt=''></td>";
		ReportFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'>";
		ReportFile << "<font color='#000000'><b>" + CompanyName + "</b></font> <br>";
		ReportFile << "<font color='#000000'>" + CompanyAddress + "</font>";
		ReportFile << "</td> </tr></tbody></table></td>";
		ReportFile << "<td><table border = '0'><tbody><tr><td colspan = '2' align = 'right'><p style = 'font-size: 20px; font-weight: bold; color: #000000'>Salesperson Summary</p></td></tr><tr><td nowrap = 'nowrap' style = 'font-size: 12px; line-height: 14px; color: #000000'>Date Range : <br><b>Total Taxes : </b></td>";
		ReportFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" + context.marshal_as<std::string>(StartingDate) + " TO " + context.marshal_as<std::string>(EndingDate) + "<br>" + context.marshal_as<std::string>(Convert::ToString(this->TotalTaxesLabel->Text)) + "</td>";
		ReportFile << "</tr></tbody></table></td></tr><tr> <td colspan='3'> <table width='100%' border='0' cellpadding='0' cellspacing='0'> <tbody> <tr> <td width='50%'> <table border='1' cellpadding='0' cellspacing='0' style='border: none;'> <tbody> <tr> <td nowrap='nowrap' style='border: none; font-size: 12px;'> </td> <td width='100%' style='border: none;'> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr>";
		ReportFile << "<tr> <td width='100%'> <table border='1' cellpadding='0' cellspacing='0' width='100%' style='border: none;'> <tbody> <tr>";
		ReportFile << "<td align='right' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Invoice Number</font> </td>";
		ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>GST</font> </td>";
		ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>PST</font> </td>";
		ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Shipping</font> </td>";
		ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Total Taxes</font> </td> </tr>";

		for (int p = 0; p < i; p++) {
			ReportFile << "<tr><td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalesGridView[0, p]->Value->ToString()) + "</font></td>";
			ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalesGridView[5, p]->Value->ToString()) + "</font></td>";
			ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalesGridView[6, p]->Value->ToString()) + "</font></td>";
			ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalesGridView[4, p]->Value->ToString()) + "</font></td>";
			ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'> <font color='#000000'>" + context.marshal_as<std::string>(this->SalesGridView[8, p]->Value->ToString()) + "</font> </td> </tr>";
		}

		ReportFile << "<tr><td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td> <td align='right' nowrap='nowrap' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>Total Taxes</b><br><b>Total Shipping</b></p> </td> <td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>";
		ReportFile << context.marshal_as<std::string>(Convert::ToString(this->TotalTaxesLabel->Text));
		ReportFile << "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(TotalShipping)) + "</b></p> </td> </tr> </tbody> </table> <br> </td> </tr> </tbody> </table> </div> </body> </html>";

		ReportFile.close();
		system(SalestaxFileName.c_str());

		this->Close();
	}
};
}
