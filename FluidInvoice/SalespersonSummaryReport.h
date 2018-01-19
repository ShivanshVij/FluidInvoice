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
	/// Summary for SalespersonSummaryReport
	/// </summary>
	public ref class SalespersonSummaryReport : public System::Windows::Forms::Form
	{
	public:
		SalespersonSummaryReport(void)
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
		~SalespersonSummaryReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  SalespersonGridView;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Salesperson;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sale_Amount;
	private: System::Windows::Forms::Button^  PrintButton;
	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  StaticTotalLabel;
	private: System::Windows::Forms::Label^  TotalLabel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SalespersonSummaryReport::typeid));
			this->SalespersonGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Salesperson = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sale_Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrintButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->StaticTotalLabel = (gcnew System::Windows::Forms::Label());
			this->TotalLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SalespersonGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// SalespersonGridView
			// 
			this->SalespersonGridView->AllowUserToAddRows = false;
			this->SalespersonGridView->AllowUserToDeleteRows = false;
			this->SalespersonGridView->AllowUserToResizeColumns = false;
			this->SalespersonGridView->AllowUserToResizeRows = false;
			this->SalespersonGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->SalespersonGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->SalespersonGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->SalespersonGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SalespersonGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Salesperson,
					this->Sale_Amount
			});
			this->SalespersonGridView->Location = System::Drawing::Point(12, 12);
			this->SalespersonGridView->Name = L"SalespersonGridView";
			this->SalespersonGridView->ReadOnly = true;
			this->SalespersonGridView->RowHeadersVisible = false;
			this->SalespersonGridView->RowTemplate->Height = 24;
			this->SalespersonGridView->Size = System::Drawing::Size(559, 150);
			this->SalespersonGridView->TabIndex = 0;
			// 
			// Salesperson
			// 
			this->Salesperson->HeaderText = L"Salesperson";
			this->Salesperson->Name = L"Salesperson";
			this->Salesperson->ReadOnly = true;
			// 
			// Sale_Amount
			// 
			this->Sale_Amount->HeaderText = L"Sale Amount";
			this->Sale_Amount->Name = L"Sale_Amount";
			this->Sale_Amount->ReadOnly = true;
			// 
			// PrintButton
			// 
			this->PrintButton->Location = System::Drawing::Point(496, 168);
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(75, 33);
			this->PrintButton->TabIndex = 2;
			this->PrintButton->Text = L"Print";
			this->PrintButton->UseVisualStyleBackColor = true;
			this->PrintButton->Click += gcnew System::EventHandler(this, &SalespersonSummaryReport::PrintButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(12, 168);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 33);
			this->CancelButton->TabIndex = 3;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &SalespersonSummaryReport::CancelButton_Click);
			// 
			// StaticTotalLabel
			// 
			this->StaticTotalLabel->AutoSize = true;
			this->StaticTotalLabel->Location = System::Drawing::Point(212, 176);
			this->StaticTotalLabel->Name = L"StaticTotalLabel";
			this->StaticTotalLabel->Size = System::Drawing::Size(44, 17);
			this->StaticTotalLabel->TabIndex = 4;
			this->StaticTotalLabel->Text = L"Total:";
			// 
			// TotalLabel
			// 
			this->TotalLabel->AutoSize = true;
			this->TotalLabel->Location = System::Drawing::Point(262, 176);
			this->TotalLabel->Name = L"TotalLabel";
			this->TotalLabel->Size = System::Drawing::Size(46, 17);
			this->TotalLabel->TabIndex = 5;
			this->TotalLabel->Text = L"label2";
			// 
			// SalespersonSummaryReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 213);
			this->Controls->Add(this->TotalLabel);
			this->Controls->Add(this->StaticTotalLabel);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->PrintButton);
			this->Controls->Add(this->SalespersonGridView);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SalespersonSummaryReport";
			this->Text = L"Salesperson Summary Report";
			this->Load += gcnew System::EventHandler(this, &SalespersonSummaryReport::SalespersonSummaryReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SalespersonGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ StartingDate;
	public: String^ EndingDate;
	public: String^ Salesperson_Searched_Name;
	public: bool ViewAll = false;
	public: int i = 0;
	public: Double TOTALSALES = 0;

	private: System::Void SalespersonSummaryReport_Load(System::Object^  sender, System::EventArgs^  e) {
		this->StaticTotalLabel->Visible = false;
		this->AutoSize = true;
		this->TotalLabel->Visible = false;
		DateTime StartDate = DateTime::Parse(StartingDate);
		DateTime EndDate = DateTime::Parse(EndingDate);

		//get the various sales people
		if (ViewAll == true) {
			String^ DistinctSalespeopleQuery = "SELECT DISTINCT Sales_Person FROM Invoices";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ DistinctQuery = gcnew MySqlCommand(DistinctSalespeopleQuery, Connection);
			MySqlDataReader^ DataReader;
			array<String^> ^ SalespersonNames = gcnew array<String^>(100);
			i = 0;

			try {
				Connection->Open();
				DataReader = DistinctQuery->ExecuteReader();
				while (DataReader->Read()) {
					SalespersonNames[i] = DataReader->GetString(0);
					i++;
				}
				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}

			if (i > 0) {
				TOTALSALES = 0;
				for (int q = 0; q < i; q++) {
					String^ AdditionQuery = "SELECT * FROM Invoices WHERE Sales_Person = '" + SalespersonNames[q] + "';";
					MySqlCommand^ AdditionCommand = gcnew MySqlCommand(AdditionQuery, Connection);
					Double salesperson_total = 0;

					try {
						Connection->Open();
						DataReader = AdditionCommand->ExecuteReader();

						while (DataReader->Read()) {
							DateTime TEMP;
							TEMP = DateTime::Parse(DataReader->GetString(2));
							if(DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0) {
								salesperson_total += Convert::ToDouble(DataReader->GetString(9));
							}
						}

						Connection->Close();
					}
					catch (Exception^ex) {
						MessageBox::Show(ex->Message);
					}
					this->SalespersonGridView->Rows->Add(1);
					this->SalespersonGridView[0, q]->Value = SalespersonNames[q];
					this->SalespersonGridView[1, q]->Value = "$" + salesperson_total;
					TOTALSALES += salesperson_total;
				}

			}
		}

		else {
			String^ SQLQuery = "SELECT * FROM Invoices WHERE Sales_Person LIKE '%" + Salesperson_Searched_Name + "%';";
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
				this->Text = L"Individual Sales Reports";

				try {
					Connection->Open();
					DataReader = FirstRunCheck->ExecuteReader();
					i = 0;
					while (DataReader->Read()) {
						DateTime TEMP;
						Double TotalTemp;

						TotalTemp = Convert::ToDouble(DataReader->GetString(12));

						TEMP = DateTime::Parse(DataReader->GetString(2));

						if (DateTime::Compare(StartDate, TEMP) <= 0 && DateTime::Compare(EndDate, TEMP) >= 0 && i < InvoiceNumbers.size()) {
							this->SalespersonGridView->Rows->Add(1);
							this->SalespersonGridView[0, i]->Value = DataReader->GetString(3);
							this->SalespersonGridView[1, i]->Value = DataReader->GetString(9);
							TotalSold += Convert::ToDouble(DataReader->GetString(9));
							i++;
						}

					}
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				TOTALSALES = TotalSold;
				this->TotalLabel->Text = "$" + TotalSold;
				this->TotalLabel->Visible = true;
				this->StaticTotalLabel->Visible = true;

			}
			else {
				MessageBox::Show("No Invoices found within the specified dates");
				this->Close();
			}


		}
		
	}

	private: System::Void PrintButton_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		std::string CompanyName = "Company Name";
		std::string CompanyAddress = "Company Address";

		std::ofstream ReportFile;
		std::string SalespersonFileName;

		if (ViewAll == true) {
			SalespersonFileName = "SalespersonSummaryReport.html";

			ReportFile.open(SalespersonFileName);

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
			ReportFile << "<td><table border = '0'><tbody><tr><td colspan = '2' align = 'right'><p style = 'font-size: 20px; font-weight: bold; color: #000000'>Salesperson Summary</p></td></tr><tr><td nowrap = 'nowrap' style = 'font-size: 12px; line-height: 14px; color: #000000'>Date Range : <br>Number of Salespeople : <br><b>Total Sales : </b></td>";
			ReportFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" + context.marshal_as<std::string>(StartingDate) + " TO " + context.marshal_as<std::string>(EndingDate) + "<br>" + context.marshal_as<std::string>(Convert::ToString(i)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(TOTALSALES)) + "</td>";
			ReportFile << "</tr></tbody></table></td></tr><tr> <td colspan='3'> <table width='100%' border='0' cellpadding='0' cellspacing='0'> <tbody> <tr> <td width='50%'> <table border='1' cellpadding='0' cellspacing='0' style='border: none;'> <tbody> <tr> <td nowrap='nowrap' style='border: none; font-size: 12px;'> </td> <td width='100%' style='border: none;'> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr>";
			ReportFile << "<tr> <td width='100%'> <table border='1' cellpadding='0' cellspacing='0' width='100%' style='border: none;'> <tbody> <tr>";
			ReportFile << "<td align='right' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Salesperson</font> </td>";
			ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Total Sales</font> </td> </tr>";

			for (int p = 0; p < i; p++) {
				ReportFile << "<tr><td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalespersonGridView[0, p]->Value->ToString()) + "</font></td>";
				ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'> <font color='#000000'>" + context.marshal_as<std::string>(this->SalespersonGridView[1, p]->Value->ToString()) + "</font> </td> </tr>";
			}

			ReportFile << "<tr> <td align='right' nowrap='nowrap' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>Total Sales</b></p> </td> <td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>$";
			ReportFile << context.marshal_as<std::string>(Convert::ToString(TOTALSALES));
			ReportFile << "</b></p> </td> </tr> </tbody> </table> <br> </td> </tr> </tbody> </table> </div> </body> </html>";

			ReportFile.close();
			system(SalespersonFileName.c_str());

			this->Close();

		}
		else {
			SalespersonFileName = "SalespersonIndividualReport.html";

			ReportFile.open(SalespersonFileName);

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
			ReportFile << "<td><table border = '0'><tbody><tr><td colspan = '2' align = 'right'><p style = 'font-size: 20px; font-weight: bold; color: #000000'>Salesperson Summary</p></td></tr><tr><td nowrap = 'nowrap' style = 'font-size: 12px; line-height: 14px; color: #000000'>Date Range : <br><b>Total Sales : </b></td>";
			ReportFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" + context.marshal_as<std::string>(StartingDate) + " TO " + context.marshal_as<std::string>(EndingDate) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(TOTALSALES)) + "</td>";
			ReportFile << "</tr></tbody></table></td></tr><tr> <td colspan='3'> <table width='100%' border='0' cellpadding='0' cellspacing='0'> <tbody> <tr> <td width='50%'> <table border='1' cellpadding='0' cellspacing='0' style='border: none;'> <tbody> <tr> <td nowrap='nowrap' style='border: none; font-size: 12px;'> </td> <td width='100%' style='border: none;'> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr> </tbody> </table> </td> </tr>";
			ReportFile << "<tr> <td width='100%'> <table border='1' cellpadding='0' cellspacing='0' width='100%' style='border: none;'> <tbody> <tr>";
			ReportFile << "<td align='right' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Salesperson</font> </td>";
			ReportFile << "<td align='right' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'> <font color='#000000'>Total Sales</font> </td> </tr>";

			for (int p = 0; p < i; p++) {
				ReportFile << "<tr><td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(this->SalespersonGridView[0, p]->Value->ToString()) + "</font></td>";
				ReportFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'> <font color='#000000'>" + context.marshal_as<std::string>(this->SalespersonGridView[1, p]->Value->ToString()) + "</font> </td> </tr>";
			}

			ReportFile << "<tr> <td align='right' nowrap='nowrap' style='border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>Total Sales</b></p> </td> <td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'> <p style='line-height: 18px; color: #000000'><b>$";
			ReportFile << context.marshal_as<std::string>(Convert::ToString(TOTALSALES));
			ReportFile << "</b></p> </td> </tr> </tbody> </table> <br> </td> </tr> </tbody> </table> </div> </body> </html>";

			ReportFile.close();
			system(SalespersonFileName.c_str());

			this->Close();


		}

		

	}

	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
