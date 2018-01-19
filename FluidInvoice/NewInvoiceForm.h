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
#include "ApplyPaymentForm.h"

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for NewInvoiceForm
	/// </summary>

	

	public ref class NewInvoiceForm : public System::Windows::Forms::Form
	{
	public:
		NewInvoiceForm(void)
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
		~NewInvoiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticCustomerNameLabel;
	protected:
	private: System::Windows::Forms::Label^  StaticInvoiceDateLabel;
	private: System::Windows::Forms::TextBox^  NewInvoiceCustomerNameTextBox;
	private: System::Windows::Forms::DateTimePicker^  NewInvoiceDateBox;
	private: System::Windows::Forms::Button^  NewInvoiceRecordButton;

	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  StaticInvoiceNumberLabel;
	private: System::Windows::Forms::TextBox^  InvoiceNumberField;

	private: System::Windows::Forms::TextBox^  SalespersonNameField;

	private: System::Windows::Forms::Label^  StaticSalespersonNameLabel;

	private: System::Windows::Forms::Label^  StaticShippingTimeLabel;
	private: System::Windows::Forms::TextBox^  EstimatedShippingTimeField;

	private: System::Windows::Forms::DataGridView^  ItemsGridView;

	private: System::Windows::Forms::Label^  StaticSubtotalLabel;
	private: System::Windows::Forms::Label^  StaticSalesTaxGSTLabel;
	private: System::Windows::Forms::Label^  StaticSalesTaxPSTLabel;
	private: System::Windows::Forms::Label^  StaticTotalLabel;
	private: System::Windows::Forms::Label^  SubtotalLabel;
	private: System::Windows::Forms::Label^  GSTLabel;
	private: System::Windows::Forms::Label^  PSTLabel;
	private: System::Windows::Forms::Label^  TotalLabel;

	private: System::Windows::Forms::TextBox^  ShippingAddressTextBox;
	private: System::Windows::Forms::Label^  StaticShippingCostLabel;
	private: System::Windows::Forms::TextBox^  ShippingCostField;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NewInvoiceQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NewInvoiceItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NewInvoiceItemDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NewInvoicePricePerItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NewInvoiceItemTotal;
	private: System::Windows::Forms::Label^  StaticPhoneNumberLabel;
	private: System::Windows::Forms::TextBox^  PhoneNumberField;
	private: System::Windows::Forms::Label^  StaticCommentsLabel;
	private: System::Windows::Forms::TextBox^  CommentsField;
	private: System::Windows::Forms::Label^  StaticPaidLabel;
	private: System::Windows::Forms::Label^  StaticUnpaidLabel;
	private: System::Windows::Forms::Label^  PaidField;
	private: System::Windows::Forms::Label^  UnpaidField;
	private: System::Windows::Forms::ComboBox^  TypeofPayment;
	private: System::Windows::Forms::Label^  StaticPaymentLabel;
	private: System::Windows::Forms::Button^  ApplyPaymentButton;
	private: System::Windows::Forms::Timer^  TotalTimer;
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Label^  StaticShippingAddressLabel;
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NewInvoiceForm::typeid));
			this->StaticCustomerNameLabel = (gcnew System::Windows::Forms::Label());
			this->StaticInvoiceDateLabel = (gcnew System::Windows::Forms::Label());
			this->NewInvoiceCustomerNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewInvoiceDateBox = (gcnew System::Windows::Forms::DateTimePicker());
			this->NewInvoiceRecordButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->StaticInvoiceNumberLabel = (gcnew System::Windows::Forms::Label());
			this->InvoiceNumberField = (gcnew System::Windows::Forms::TextBox());
			this->SalespersonNameField = (gcnew System::Windows::Forms::TextBox());
			this->StaticSalespersonNameLabel = (gcnew System::Windows::Forms::Label());
			this->ItemsGridView = (gcnew System::Windows::Forms::DataGridView());
			this->NewInvoiceQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NewInvoiceItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NewInvoiceItemDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NewInvoicePricePerItem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NewInvoiceItemTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StaticShippingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->EstimatedShippingTimeField = (gcnew System::Windows::Forms::TextBox());
			this->StaticSubtotalLabel = (gcnew System::Windows::Forms::Label());
			this->StaticSalesTaxGSTLabel = (gcnew System::Windows::Forms::Label());
			this->StaticSalesTaxPSTLabel = (gcnew System::Windows::Forms::Label());
			this->StaticTotalLabel = (gcnew System::Windows::Forms::Label());
			this->SubtotalLabel = (gcnew System::Windows::Forms::Label());
			this->GSTLabel = (gcnew System::Windows::Forms::Label());
			this->PSTLabel = (gcnew System::Windows::Forms::Label());
			this->TotalLabel = (gcnew System::Windows::Forms::Label());
			this->ShippingAddressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StaticShippingCostLabel = (gcnew System::Windows::Forms::Label());
			this->ShippingCostField = (gcnew System::Windows::Forms::TextBox());
			this->StaticPhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->PhoneNumberField = (gcnew System::Windows::Forms::TextBox());
			this->StaticCommentsLabel = (gcnew System::Windows::Forms::Label());
			this->CommentsField = (gcnew System::Windows::Forms::TextBox());
			this->StaticPaidLabel = (gcnew System::Windows::Forms::Label());
			this->StaticUnpaidLabel = (gcnew System::Windows::Forms::Label());
			this->PaidField = (gcnew System::Windows::Forms::Label());
			this->UnpaidField = (gcnew System::Windows::Forms::Label());
			this->TypeofPayment = (gcnew System::Windows::Forms::ComboBox());
			this->StaticPaymentLabel = (gcnew System::Windows::Forms::Label());
			this->ApplyPaymentButton = (gcnew System::Windows::Forms::Button());
			this->TotalTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			StaticShippingAddressLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// StaticShippingAddressLabel
			// 
			StaticShippingAddressLabel->AutoSize = true;
			StaticShippingAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			StaticShippingAddressLabel->Location = System::Drawing::Point(13, 123);
			StaticShippingAddressLabel->Name = L"StaticShippingAddressLabel";
			StaticShippingAddressLabel->Size = System::Drawing::Size(189, 26);
			StaticShippingAddressLabel->TabIndex = 15;
			StaticShippingAddressLabel->Text = L"Shipping Address:";
			// 
			// StaticCustomerNameLabel
			// 
			this->StaticCustomerNameLabel->AutoSize = true;
			this->StaticCustomerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticCustomerNameLabel->Location = System::Drawing::Point(13, 14);
			this->StaticCustomerNameLabel->Name = L"StaticCustomerNameLabel";
			this->StaticCustomerNameLabel->Size = System::Drawing::Size(178, 26);
			this->StaticCustomerNameLabel->TabIndex = 0;
			this->StaticCustomerNameLabel->Text = L"Customer Name:";
			// 
			// StaticInvoiceDateLabel
			// 
			this->StaticInvoiceDateLabel->AutoSize = true;
			this->StaticInvoiceDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticInvoiceDateLabel->Location = System::Drawing::Point(13, 53);
			this->StaticInvoiceDateLabel->Name = L"StaticInvoiceDateLabel";
			this->StaticInvoiceDateLabel->Size = System::Drawing::Size(139, 26);
			this->StaticInvoiceDateLabel->TabIndex = 1;
			this->StaticInvoiceDateLabel->Text = L"Invoice Date:";
			// 
			// NewInvoiceCustomerNameTextBox
			// 
			this->NewInvoiceCustomerNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->NewInvoiceCustomerNameTextBox->Location = System::Drawing::Point(223, 14);
			this->NewInvoiceCustomerNameTextBox->Name = L"NewInvoiceCustomerNameTextBox";
			this->NewInvoiceCustomerNameTextBox->Size = System::Drawing::Size(269, 30);
			this->NewInvoiceCustomerNameTextBox->TabIndex = 1;
			// 
			// NewInvoiceDateBox
			// 
			this->NewInvoiceDateBox->Checked = false;
			this->NewInvoiceDateBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->NewInvoiceDateBox->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->NewInvoiceDateBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->NewInvoiceDateBox->Location = System::Drawing::Point(223, 49);
			this->NewInvoiceDateBox->Name = L"NewInvoiceDateBox";
			this->NewInvoiceDateBox->Size = System::Drawing::Size(160, 30);
			this->NewInvoiceDateBox->TabIndex = 7;
			// 
			// NewInvoiceRecordButton
			// 
			this->NewInvoiceRecordButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NewInvoiceRecordButton->Location = System::Drawing::Point(18, 707);
			this->NewInvoiceRecordButton->Name = L"NewInvoiceRecordButton";
			this->NewInvoiceRecordButton->Size = System::Drawing::Size(268, 55);
			this->NewInvoiceRecordButton->TabIndex = 12;
			this->NewInvoiceRecordButton->Text = L"Record and View";
			this->NewInvoiceRecordButton->UseVisualStyleBackColor = true;
			this->NewInvoiceRecordButton->Click += gcnew System::EventHandler(this, &NewInvoiceForm::NewInvoiceRecordButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->Location = System::Drawing::Point(833, 707);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(268, 55);
			this->CancelButton->TabIndex = 14;
			this->CancelButton->Text = L"Close";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &NewInvoiceForm::CancelButton_Click);
			// 
			// StaticInvoiceNumberLabel
			// 
			this->StaticInvoiceNumberLabel->AutoSize = true;
			this->StaticInvoiceNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticInvoiceNumberLabel->Location = System::Drawing::Point(13, 87);
			this->StaticInvoiceNumberLabel->Name = L"StaticInvoiceNumberLabel";
			this->StaticInvoiceNumberLabel->Size = System::Drawing::Size(171, 26);
			this->StaticInvoiceNumberLabel->TabIndex = 6;
			this->StaticInvoiceNumberLabel->Text = L"Invoice Number:";
			// 
			// InvoiceNumberField
			// 
			this->InvoiceNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->InvoiceNumberField->Location = System::Drawing::Point(223, 85);
			this->InvoiceNumberField->Name = L"InvoiceNumberField";
			this->InvoiceNumberField->Size = System::Drawing::Size(269, 30);
			this->InvoiceNumberField->TabIndex = 8;
			this->InvoiceNumberField->TextChanged += gcnew System::EventHandler(this, &NewInvoiceForm::InvoiceNumberField_TextChanged);
			// 
			// SalespersonNameField
			// 
			this->SalespersonNameField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->SalespersonNameField->Location = System::Drawing::Point(1045, 15);
			this->SalespersonNameField->Name = L"SalespersonNameField";
			this->SalespersonNameField->Size = System::Drawing::Size(465, 30);
			this->SalespersonNameField->TabIndex = 2;
			// 
			// StaticSalespersonNameLabel
			// 
			this->StaticSalespersonNameLabel->AutoSize = true;
			this->StaticSalespersonNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticSalespersonNameLabel->Location = System::Drawing::Point(756, 15);
			this->StaticSalespersonNameLabel->Name = L"StaticSalespersonNameLabel";
			this->StaticSalespersonNameLabel->Size = System::Drawing::Size(204, 26);
			this->StaticSalespersonNameLabel->TabIndex = 11;
			this->StaticSalespersonNameLabel->Text = L"Salesperson Name:";
			this->StaticSalespersonNameLabel->Click += gcnew System::EventHandler(this, &NewInvoiceForm::label2_Click);
			// 
			// ItemsGridView
			// 
			this->ItemsGridView->AllowUserToResizeColumns = false;
			this->ItemsGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ItemsGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ItemsGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ItemsGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ItemsGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->ItemsGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ItemsGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->NewInvoiceQuantity,
					this->NewInvoiceItemName, this->NewInvoiceItemDescription, this->NewInvoicePricePerItem, this->NewInvoiceItemTotal
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ItemsGridView->DefaultCellStyle = dataGridViewCellStyle7;
			this->ItemsGridView->Location = System::Drawing::Point(12, 206);
			this->ItemsGridView->Name = L"ItemsGridView";
			this->ItemsGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->ItemsGridView->RowHeadersVisible = false;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ItemsGridView->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->ItemsGridView->RowTemplate->Height = 24;
			this->ItemsGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ItemsGridView->Size = System::Drawing::Size(1498, 364);
			this->ItemsGridView->TabIndex = 9;
			this->ItemsGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NewInvoiceForm::ItemsGridView_CellClick);
			this->ItemsGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NewInvoiceForm::ItemsGridView_CellContentClick);
			// 
			// NewInvoiceQuantity
			// 
			this->NewInvoiceQuantity->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NewInvoiceQuantity->DataPropertyName = L"int";
			dataGridViewCellStyle2->Format = L"N0";
			dataGridViewCellStyle2->NullValue = L"0";
			this->NewInvoiceQuantity->DefaultCellStyle = dataGridViewCellStyle2;
			this->NewInvoiceQuantity->HeaderText = L"Qty";
			this->NewInvoiceQuantity->Name = L"NewInvoiceQuantity";
			this->NewInvoiceQuantity->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// NewInvoiceItemName
			// 
			dataGridViewCellStyle3->NullValue = L"N/A";
			this->NewInvoiceItemName->DefaultCellStyle = dataGridViewCellStyle3;
			this->NewInvoiceItemName->HeaderText = L"Item";
			this->NewInvoiceItemName->Name = L"NewInvoiceItemName";
			// 
			// NewInvoiceItemDescription
			// 
			dataGridViewCellStyle4->NullValue = L"N/A";
			this->NewInvoiceItemDescription->DefaultCellStyle = dataGridViewCellStyle4;
			this->NewInvoiceItemDescription->HeaderText = L"Description";
			this->NewInvoiceItemDescription->Name = L"NewInvoiceItemDescription";
			// 
			// NewInvoicePricePerItem
			// 
			dataGridViewCellStyle5->Format = L"C2";
			dataGridViewCellStyle5->NullValue = L"0";
			this->NewInvoicePricePerItem->DefaultCellStyle = dataGridViewCellStyle5;
			this->NewInvoicePricePerItem->HeaderText = L"Unit Price";
			this->NewInvoicePricePerItem->Name = L"NewInvoicePricePerItem";
			// 
			// NewInvoiceItemTotal
			// 
			dataGridViewCellStyle6->Format = L"N2";
			dataGridViewCellStyle6->NullValue = L"0";
			this->NewInvoiceItemTotal->DefaultCellStyle = dataGridViewCellStyle6;
			this->NewInvoiceItemTotal->HeaderText = L"Total";
			this->NewInvoiceItemTotal->Name = L"NewInvoiceItemTotal";
			// 
			// StaticShippingTimeLabel
			// 
			this->StaticShippingTimeLabel->AutoSize = true;
			this->StaticShippingTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticShippingTimeLabel->Location = System::Drawing::Point(755, 49);
			this->StaticShippingTimeLabel->Name = L"StaticShippingTimeLabel";
			this->StaticShippingTimeLabel->Size = System::Drawing::Size(261, 26);
			this->StaticShippingTimeLabel->TabIndex = 19;
			this->StaticShippingTimeLabel->Text = L"Estimated Shipping Time:";
			this->StaticShippingTimeLabel->Click += gcnew System::EventHandler(this, &NewInvoiceForm::StaticShippingTimeLabel_Click);
			// 
			// EstimatedShippingTimeField
			// 
			this->EstimatedShippingTimeField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->EstimatedShippingTimeField->Location = System::Drawing::Point(1045, 49);
			this->EstimatedShippingTimeField->Name = L"EstimatedShippingTimeField";
			this->EstimatedShippingTimeField->Size = System::Drawing::Size(465, 30);
			this->EstimatedShippingTimeField->TabIndex = 3;
			// 
			// StaticSubtotalLabel
			// 
			this->StaticSubtotalLabel->AutoSize = true;
			this->StaticSubtotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticSubtotalLabel->Location = System::Drawing::Point(1211, 589);
			this->StaticSubtotalLabel->Name = L"StaticSubtotalLabel";
			this->StaticSubtotalLabel->Size = System::Drawing::Size(104, 26);
			this->StaticSubtotalLabel->TabIndex = 22;
			this->StaticSubtotalLabel->Text = L"Subtotal: ";
			// 
			// StaticSalesTaxGSTLabel
			// 
			this->StaticSalesTaxGSTLabel->AutoSize = true;
			this->StaticSalesTaxGSTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticSalesTaxGSTLabel->Location = System::Drawing::Point(1211, 613);
			this->StaticSalesTaxGSTLabel->Name = L"StaticSalesTaxGSTLabel";
			this->StaticSalesTaxGSTLabel->Size = System::Drawing::Size(178, 26);
			this->StaticSalesTaxGSTLabel->TabIndex = 23;
			this->StaticSalesTaxGSTLabel->Text = L"Sales Tax (GST):";
			// 
			// StaticSalesTaxPSTLabel
			// 
			this->StaticSalesTaxPSTLabel->AutoSize = true;
			this->StaticSalesTaxPSTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticSalesTaxPSTLabel->Location = System::Drawing::Point(1211, 639);
			this->StaticSalesTaxPSTLabel->Name = L"StaticSalesTaxPSTLabel";
			this->StaticSalesTaxPSTLabel->Size = System::Drawing::Size(182, 26);
			this->StaticSalesTaxPSTLabel->TabIndex = 24;
			this->StaticSalesTaxPSTLabel->Text = L"Sales Tax (PST): ";
			// 
			// StaticTotalLabel
			// 
			this->StaticTotalLabel->AutoSize = true;
			this->StaticTotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticTotalLabel->Location = System::Drawing::Point(1211, 665);
			this->StaticTotalLabel->Name = L"StaticTotalLabel";
			this->StaticTotalLabel->Size = System::Drawing::Size(65, 26);
			this->StaticTotalLabel->TabIndex = 25;
			this->StaticTotalLabel->Text = L"Total:";
			// 
			// SubtotalLabel
			// 
			this->SubtotalLabel->AutoSize = true;
			this->SubtotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->SubtotalLabel->Location = System::Drawing::Point(1395, 589);
			this->SubtotalLabel->Name = L"SubtotalLabel";
			this->SubtotalLabel->Size = System::Drawing::Size(36, 26);
			this->SubtotalLabel->TabIndex = 26;
			this->SubtotalLabel->Text = L"$0";
			// 
			// GSTLabel
			// 
			this->GSTLabel->AutoSize = true;
			this->GSTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->GSTLabel->Location = System::Drawing::Point(1395, 615);
			this->GSTLabel->Name = L"GSTLabel";
			this->GSTLabel->Size = System::Drawing::Size(36, 26);
			this->GSTLabel->TabIndex = 27;
			this->GSTLabel->Text = L"$0";
			// 
			// PSTLabel
			// 
			this->PSTLabel->AutoSize = true;
			this->PSTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->PSTLabel->Location = System::Drawing::Point(1395, 643);
			this->PSTLabel->Name = L"PSTLabel";
			this->PSTLabel->Size = System::Drawing::Size(36, 26);
			this->PSTLabel->TabIndex = 28;
			this->PSTLabel->Text = L"$0";
			// 
			// TotalLabel
			// 
			this->TotalLabel->AutoSize = true;
			this->TotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->TotalLabel->Location = System::Drawing::Point(1395, 669);
			this->TotalLabel->Name = L"TotalLabel";
			this->TotalLabel->Size = System::Drawing::Size(36, 26);
			this->TotalLabel->TabIndex = 29;
			this->TotalLabel->Text = L"$0";
			// 
			// ShippingAddressTextBox
			// 
			this->ShippingAddressTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ShippingAddressTextBox->Location = System::Drawing::Point(223, 123);
			this->ShippingAddressTextBox->Name = L"ShippingAddressTextBox";
			this->ShippingAddressTextBox->Size = System::Drawing::Size(460, 30);
			this->ShippingAddressTextBox->TabIndex = 5;
			// 
			// StaticShippingCostLabel
			// 
			this->StaticShippingCostLabel->AutoSize = true;
			this->StaticShippingCostLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticShippingCostLabel->Location = System::Drawing::Point(13, 161);
			this->StaticShippingCostLabel->Name = L"StaticShippingCostLabel";
			this->StaticShippingCostLabel->Size = System::Drawing::Size(160, 26);
			this->StaticShippingCostLabel->TabIndex = 31;
			this->StaticShippingCostLabel->Text = L"Shipping Cost: ";
			// 
			// ShippingCostField
			// 
			this->ShippingCostField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ShippingCostField->Location = System::Drawing::Point(223, 159);
			this->ShippingCostField->Name = L"ShippingCostField";
			this->ShippingCostField->Size = System::Drawing::Size(327, 30);
			this->ShippingCostField->TabIndex = 6;
			// 
			// StaticPhoneNumberLabel
			// 
			this->StaticPhoneNumberLabel->AutoSize = true;
			this->StaticPhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticPhoneNumberLabel->Location = System::Drawing::Point(756, 83);
			this->StaticPhoneNumberLabel->Name = L"StaticPhoneNumberLabel";
			this->StaticPhoneNumberLabel->Size = System::Drawing::Size(165, 26);
			this->StaticPhoneNumberLabel->TabIndex = 33;
			this->StaticPhoneNumberLabel->Text = L"Phone Number:";
			this->StaticPhoneNumberLabel->Click += gcnew System::EventHandler(this, &NewInvoiceForm::StaticPhoneNumberLabel_Click);
			// 
			// PhoneNumberField
			// 
			this->PhoneNumberField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->PhoneNumberField->Location = System::Drawing::Point(1045, 85);
			this->PhoneNumberField->Name = L"PhoneNumberField";
			this->PhoneNumberField->Size = System::Drawing::Size(465, 30);
			this->PhoneNumberField->TabIndex = 4;
			this->PhoneNumberField->TextChanged += gcnew System::EventHandler(this, &NewInvoiceForm::textBox1_TextChanged);
			// 
			// StaticCommentsLabel
			// 
			this->StaticCommentsLabel->AutoSize = true;
			this->StaticCommentsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticCommentsLabel->Location = System::Drawing::Point(13, 627);
			this->StaticCommentsLabel->Name = L"StaticCommentsLabel";
			this->StaticCommentsLabel->Size = System::Drawing::Size(125, 26);
			this->StaticCommentsLabel->TabIndex = 35;
			this->StaticCommentsLabel->Text = L"Comments:";
			// 
			// CommentsField
			// 
			this->CommentsField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->CommentsField->Location = System::Drawing::Point(17, 656);
			this->CommentsField->Name = L"CommentsField";
			this->CommentsField->Size = System::Drawing::Size(437, 30);
			this->CommentsField->TabIndex = 11;
			// 
			// StaticPaidLabel
			// 
			this->StaticPaidLabel->AutoSize = true;
			this->StaticPaidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticPaidLabel->Location = System::Drawing::Point(1211, 691);
			this->StaticPaidLabel->Name = L"StaticPaidLabel";
			this->StaticPaidLabel->Size = System::Drawing::Size(62, 26);
			this->StaticPaidLabel->TabIndex = 37;
			this->StaticPaidLabel->Text = L"Paid:";
			// 
			// StaticUnpaidLabel
			// 
			this->StaticUnpaidLabel->AutoSize = true;
			this->StaticUnpaidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticUnpaidLabel->Location = System::Drawing::Point(1211, 717);
			this->StaticUnpaidLabel->Name = L"StaticUnpaidLabel";
			this->StaticUnpaidLabel->Size = System::Drawing::Size(87, 26);
			this->StaticUnpaidLabel->TabIndex = 38;
			this->StaticUnpaidLabel->Text = L"Unpaid:";
			// 
			// PaidField
			// 
			this->PaidField->AutoSize = true;
			this->PaidField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->PaidField->Location = System::Drawing::Point(1395, 695);
			this->PaidField->Name = L"PaidField";
			this->PaidField->Size = System::Drawing::Size(36, 26);
			this->PaidField->TabIndex = 39;
			this->PaidField->Text = L"$0";
			// 
			// UnpaidField
			// 
			this->UnpaidField->AutoSize = true;
			this->UnpaidField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->UnpaidField->Location = System::Drawing::Point(1395, 721);
			this->UnpaidField->Name = L"UnpaidField";
			this->UnpaidField->Size = System::Drawing::Size(36, 26);
			this->UnpaidField->TabIndex = 40;
			this->UnpaidField->Text = L"$0";
			// 
			// TypeofPayment
			// 
			this->TypeofPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->TypeofPayment->FormattingEnabled = true;
			this->TypeofPayment->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Debit", L"Visa", L"Mastercard", L"Cash",
					L"Cheque"
			});
			this->TypeofPayment->Location = System::Drawing::Point(190, 585);
			this->TypeofPayment->Name = L"TypeofPayment";
			this->TypeofPayment->Size = System::Drawing::Size(264, 33);
			this->TypeofPayment->TabIndex = 10;
			// 
			// StaticPaymentLabel
			// 
			this->StaticPaymentLabel->AutoSize = true;
			this->StaticPaymentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->StaticPaymentLabel->Location = System::Drawing::Point(12, 587);
			this->StaticPaymentLabel->Name = L"StaticPaymentLabel";
			this->StaticPaymentLabel->Size = System::Drawing::Size(158, 26);
			this->StaticPaymentLabel->TabIndex = 42;
			this->StaticPaymentLabel->Text = L"Payment Type:";
			this->StaticPaymentLabel->Click += gcnew System::EventHandler(this, &NewInvoiceForm::StaticPaymentLabel_Click);
			// 
			// ApplyPaymentButton
			// 
			this->ApplyPaymentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyPaymentButton->Location = System::Drawing::Point(305, 707);
			this->ApplyPaymentButton->Name = L"ApplyPaymentButton";
			this->ApplyPaymentButton->Size = System::Drawing::Size(268, 55);
			this->ApplyPaymentButton->TabIndex = 13;
			this->ApplyPaymentButton->Text = L"Record and Apply Payment";
			this->ApplyPaymentButton->UseVisualStyleBackColor = true;
			this->ApplyPaymentButton->Click += gcnew System::EventHandler(this, &NewInvoiceForm::ApplyPaymentButton_Click);
			// 
			// TotalTimer
			// 
			this->TotalTimer->Enabled = true;
			this->TotalTimer->Tick += gcnew System::EventHandler(this, &NewInvoiceForm::TotalTimer_Tick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(606, 707);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 55);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Packing Slip";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewInvoiceForm::button1_Click);
			// 
			// NewInvoiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1535, 774);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ApplyPaymentButton);
			this->Controls->Add(this->StaticPaymentLabel);
			this->Controls->Add(this->TypeofPayment);
			this->Controls->Add(this->UnpaidField);
			this->Controls->Add(this->PaidField);
			this->Controls->Add(this->StaticUnpaidLabel);
			this->Controls->Add(this->StaticPaidLabel);
			this->Controls->Add(this->CommentsField);
			this->Controls->Add(this->StaticCommentsLabel);
			this->Controls->Add(this->PhoneNumberField);
			this->Controls->Add(this->StaticPhoneNumberLabel);
			this->Controls->Add(this->ShippingCostField);
			this->Controls->Add(this->StaticShippingCostLabel);
			this->Controls->Add(this->ShippingAddressTextBox);
			this->Controls->Add(this->TotalLabel);
			this->Controls->Add(this->PSTLabel);
			this->Controls->Add(this->GSTLabel);
			this->Controls->Add(this->SubtotalLabel);
			this->Controls->Add(this->StaticTotalLabel);
			this->Controls->Add(this->StaticSalesTaxPSTLabel);
			this->Controls->Add(this->StaticSalesTaxGSTLabel);
			this->Controls->Add(this->StaticSubtotalLabel);
			this->Controls->Add(this->EstimatedShippingTimeField);
			this->Controls->Add(this->StaticShippingTimeLabel);
			this->Controls->Add(this->ItemsGridView);
			this->Controls->Add(StaticShippingAddressLabel);
			this->Controls->Add(this->StaticSalespersonNameLabel);
			this->Controls->Add(this->SalespersonNameField);
			this->Controls->Add(this->InvoiceNumberField);
			this->Controls->Add(this->StaticInvoiceNumberLabel);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->NewInvoiceRecordButton);
			this->Controls->Add(this->NewInvoiceDateBox);
			this->Controls->Add(this->NewInvoiceCustomerNameTextBox);
			this->Controls->Add(this->StaticInvoiceDateLabel);
			this->Controls->Add(this->StaticCustomerNameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewInvoiceForm";
			this->Text = L"Create New Invoice";
			this->Load += gcnew System::EventHandler(this, &NewInvoiceForm::NewInvoiceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	//Public Variables for Calculations
	public: System::String^ InvoiceNumberString;
	public: System::String^ Quantity;
	public: System::String^ UnitPrice;
	public: System::String^ TESTING;
	public: Double test;
	public: Double TOTALS;
	public: Double QTY;
	public: Double UPR;
	public: Double SUBTOTALS;
	public: Double temp;
	public: Double GST;
	public:	Double PST;
	public:	double scale = 0.01;  //round to nearest one hundreth

	public: System::String^ isBoolChecker = "0";
	public: System::String^ SearchedForInvoiceNumber;
	public: int RowCount = 0;
	public: int OLDROWCOUNT = 0;

	private: System::Void NewInvoiceForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->AutoSize = true;
		this->InvoiceNumberField->Text = InvoiceNumberString;
		this->SubtotalLabel->Visible = false;
		this->StaticSubtotalLabel->Visible = false;
		this->StaticSalesTaxGSTLabel->Visible = false;
		this->StaticSalesTaxPSTLabel->Visible = false;
		this->GSTLabel->Visible = false;
		this->PSTLabel->Visible = false;
		this->StaticTotalLabel->Visible = false;
		this->TotalLabel->Visible = false;
		this->StaticPaidLabel->Visible = false;
		this->StaticUnpaidLabel->Visible = false;
		this->PaidField->Visible = false;
		this->UnpaidField->Visible = false;
		SUBTOTALS = 0;
		TOTALS = 0;

		if (isBoolChecker == "1") {
			msclr::interop::marshal_context context;
			String^ SQLQuery = "SELECT * FROM Invoices WHERE Invoice_Number = " + SearchedForInvoiceNumber;
			//MessageBox::Show(SQLQuery);
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;
			INVOICE OLDINVOICE;

			try {
				Connection->Open();
				DataReader = GetExistingInvoiceData->ExecuteReader();

				while (DataReader->Read()) {

					OLDINVOICE.InvoiceNumber = Convert::ToInt32(DataReader->GetString(0));
					OLDINVOICE.CustomerName = context.marshal_as<std::string>(DataReader->GetString(1));
					OLDINVOICE.InvoiceDate = context.marshal_as<std::string>(DataReader->GetString(2));
					OLDINVOICE.SalespersonName = context.marshal_as<std::string>(DataReader->GetString(3));
					OLDINVOICE.ETA = context.marshal_as<std::string>(DataReader->GetString(4));
					OLDINVOICE.PhoneNumber = context.marshal_as<std::string>(DataReader->GetString(5));
					OLDINVOICE.ShippingAddress = context.marshal_as<std::string>(DataReader->GetString(6));
					OLDINVOICE.SHIPPINGCOST = Convert::ToDouble(DataReader->GetString(7));
					OLDINVOICE.PaymentType = context.marshal_as<std::string>(DataReader->GetString(8));
					OLDINVOICE.INV_SUBTOTALS = Convert::ToDouble(DataReader->GetString(9));
					OLDINVOICE.INV_GST = Convert::ToDouble(DataReader->GetString(10));
					OLDINVOICE.INV_PST = Convert::ToDouble(DataReader->GetString(11));
					OLDINVOICE.INV_TOTALS = Convert::ToDouble(DataReader->GetString(12));
					OLDINVOICE.Comments = context.marshal_as<std::string>(DataReader->GetString(13));
					OLDINVOICE.INV_AmountPaid = Convert::ToDouble(DataReader->GetString(14));
					OLDINVOICE.INV_AmountUnpaid = Convert::ToDouble(DataReader->GetString(15));

				}

				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show("This Customer does not exist in the Database.");
				this->Close();
				
			}

			String^ ItemQuery = "SELECT * FROM `" + SearchedForInvoiceNumber + "`";
			MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

			try {
				Connection->Open();
				DataReader = GetExistingItemsData->ExecuteReader();

				int p = 0;

				while (DataReader->Read()) {

					OLDINVOICE.INVOICEITEMS[p].INV_ITEMNAME = context.marshal_as<std::string>(DataReader->GetString(0));
					OLDINVOICE.INVOICEITEMS[p].INV_QUANTITY = Convert::ToInt32(DataReader->GetString(1));
					OLDINVOICE.INVOICEITEMS[p].INV_ITEMDESCRIPTION = context.marshal_as<std::string>(DataReader->GetString(2));
					OLDINVOICE.INVOICEITEMS[p].INV_UNITPRICE = Convert::ToDouble(DataReader->GetString(3));
					OLDINVOICE.INVOICEITEMS[p].INV_ITEMTOTAL = Convert::ToDouble(DataReader->GetString(4));
					p++;

				}

				RowCount = p;

				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show("This Invoice Number does not exist.",
					"Fluid Invoice", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
				this->Close();

			}

			this->NewInvoiceCustomerNameTextBox->Text = gcnew String(OLDINVOICE.CustomerName.c_str());
			this->SalespersonNameField->Text = gcnew String(OLDINVOICE.SalespersonName.c_str());
			this->NewInvoiceDateBox->Text = gcnew String(OLDINVOICE.InvoiceDate.c_str());
			this->ShippingAddressTextBox->Text = gcnew String(OLDINVOICE.ShippingAddress.c_str());
			this->EstimatedShippingTimeField->Text = gcnew String(OLDINVOICE.ETA.c_str());
			this->ShippingCostField->Text = Convert::ToString(OLDINVOICE.SHIPPINGCOST);
			this->PhoneNumberField->Text = gcnew String(OLDINVOICE.PhoneNumber.c_str());
			this->CommentsField->Text = gcnew String(OLDINVOICE.Comments.c_str());
			this->TypeofPayment->Text = gcnew String(OLDINVOICE.PaymentType.c_str());

			if (RowCount < 1) {
				RowCount = 1;
			}
			this->ItemsGridView->Rows->Add(RowCount);


			for (int i = 0; i < RowCount; i++) {

				this->ItemsGridView[0, i]->Value = Convert::ToString(OLDINVOICE.INVOICEITEMS[i].INV_QUANTITY);
				this->ItemsGridView[1, i]->Value = gcnew String(OLDINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str());
				this->ItemsGridView[2, i]->Value = gcnew String(OLDINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str());
				this->ItemsGridView[3, i]->Value = Convert::ToString(OLDINVOICE.INVOICEITEMS[i].INV_UNITPRICE);
				this->ItemsGridView[4, i]->Value = Convert::ToDouble(OLDINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL);
				this->ItemsGridView->NotifyCurrentCellDirty(true);
				this->ItemsGridView->EndEdit();
				this->ItemsGridView->NotifyCurrentCellDirty(false);
			}


			this->TotalLabel->Text = "$" + Convert::ToString(OLDINVOICE.INV_TOTALS);
			this->StaticTotalLabel->Visible = true;
			this->TotalLabel->Visible = true;

			this->SubtotalLabel->Text = "$" + Convert::ToString(OLDINVOICE.INV_SUBTOTALS);
			this->StaticSubtotalLabel->Visible = true;
			this->SubtotalLabel->Visible = true;

			this->GSTLabel->Text = "$" + Convert::ToString(OLDINVOICE.INV_GST);
			this->StaticSalesTaxGSTLabel->Visible = true;
			this->GSTLabel->Visible = true;

			this->PSTLabel->Text = "$" + Convert::ToString(OLDINVOICE.INV_PST);
			this->StaticSalesTaxPSTLabel->Visible = true;
			this->PSTLabel->Visible = true;

			this->PaidField->Text = "$" + Convert::ToString(OLDINVOICE.INV_AmountPaid);
			this->PaidField->Visible = true;
			this->StaticPaidLabel->Visible = true;

			this->UnpaidField->Text = "$" + Convert::ToString(OLDINVOICE.INV_AmountUnpaid);
			this->UnpaidField->Visible = true;
			this->StaticUnpaidLabel->Visible = true;

			OLDROWCOUNT = RowCount;

		}

	}

	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	
	private: System::Void InvoiceNumberField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void ItemsGridView_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int NumberofRows = this->ItemsGridView->RowCount;
		TOTALS = 0;
		//Calculate Item Totals
		for (int i = 0; i < NumberofRows-1; i++) {
			Quantity = safe_cast<String^>(this->ItemsGridView[0, i]->Value);
			UnitPrice = safe_cast<String^>(this->ItemsGridView[3, i]->Value);

			test = 0;
			if (Double::TryParse(Quantity, test)) {
				QTY = test;
			}
			else {
				QTY = 0.0;
			}

			if (Double::TryParse(UnitPrice, test)) {
				UPR = test;
			}
			else {
				UPR = 0.0;
			}
			
			this->ItemsGridView[4, i]->Value = (QTY*UPR);

		}

		//Calculate Invoice Subtotal
		SUBTOTALS = 0;
		for (int i = 0; i < NumberofRows; i++) {
			if (this->ItemsGridView[4, i]->Value != nullptr) {
				temp = safe_cast<Double>(this->ItemsGridView[4, i]->Value);
				SUBTOTALS += temp;
			}
			else {
				continue;
			}

		}
		this->StaticSubtotalLabel->Visible = true;
		this->SubtotalLabel->Visible = true;

		SUBTOTALS = floor(SUBTOTALS / scale + 0.5) * scale;
		TOTALS += SUBTOTALS;
		this->SubtotalLabel->Text = "$" + SUBTOTALS.ToString();

		Double Temporary = 0;

		TESTING = this->ShippingCostField->Text->ToString();

		if (TESTING == nullptr || TESTING == "") {
			TESTING = "0";
		}

		Double ShippingCostDouble;
		test = 0;
		if (TESTING != nullptr && TESTING != "") {
			if (Double::TryParse(TESTING, test)) {
				ShippingCostDouble = test;
			}
			else {
				ShippingCostDouble = 0.00;
			}
		}

		TESTING = this->SubtotalLabel->Text;
		TESTING = TESTING->Replace("$", "");

		//Calculate Taxes
		if (this->SubtotalLabel->Text != nullptr && TESTING != nullptr && TESTING != "") {
			Temporary = Convert::ToDouble(TESTING);
			GST = Temporary*0.05;
			PST = Temporary*0.07;
			TOTALS += ShippingCostDouble;
			ShippingCostDouble = ShippingCostDouble*0.05;
			GST += ShippingCostDouble;
			GST = floor(GST / scale + 0.5) * scale;
			PST = floor(PST / scale + 0.5) * scale;
			TOTALS += GST;
			TOTALS += PST;
			this->StaticSalesTaxGSTLabel->Visible = true;
			this->GSTLabel->Visible = true;

			this->GSTLabel->Text = "$" + GST.ToString();

			this->StaticSalesTaxPSTLabel->Visible = true;
			this->PSTLabel->Visible = true;
			this->PSTLabel->Text = "$" + PST.ToString();

		}

		this->StaticTotalLabel->Visible = true;

		TOTALS = floor(TOTALS / scale + 0.5) * scale;

		this->TotalLabel->Text = "$" + TOTALS;
		this->TotalLabel->Visible = true;

		if (isBoolChecker == "1") {
			TESTING = this->PaidField->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			Double AmountPaid;
			test = 0;
			if (TESTING != nullptr && TESTING != "") {
				if (Double::TryParse(TESTING, test)) {
					AmountPaid = test;
					AmountPaid = floor(AmountPaid / scale + 0.5) * scale;
				}
				else {
					AmountPaid = 0.00;
				}
			}

			Double AmountUnpaid;
			AmountUnpaid = TOTALS - AmountPaid;
			AmountUnpaid = floor(AmountUnpaid / scale + 0.5) * scale;
			this->UnpaidField->Text = "$" + Convert::ToString(AmountUnpaid);
		}
		
	}

	public: System::String^ InvoiceNumbertoSave;
	public: System::String^ isCheckBool = "0";

	private: System::Void NewInvoiceRecordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		INVOICE NEWINVOICE;
		msclr::interop::marshal_context context;
		NEWINVOICE.CustomerName = context.marshal_as<std::string>(this->NewInvoiceCustomerNameTextBox->Text);
		NEWINVOICE.SalespersonName = context.marshal_as<std::string>(this->SalespersonNameField->Text);
		NEWINVOICE.InvoiceDate = context.marshal_as<std::string>(this->NewInvoiceDateBox->Text);
		test = 0;
		InvoiceNumbertoSave = InvoiceNumberField->Text;
		if (Double::TryParse(this->InvoiceNumberField->Text, test)) {
			NEWINVOICE.InvoiceNumber = test;
		}
		else {
			NEWINVOICE.InvoiceNumber = 999999;
		}

		NEWINVOICE.PhoneNumber = context.marshal_as<std::string>(this->PhoneNumberField->Text);
		NEWINVOICE.Comments = context.marshal_as<std::string>(this->CommentsField->Text);

		NEWINVOICE.ShippingAddress = context.marshal_as<std::string>(this->ShippingAddressTextBox->Text);
		NEWINVOICE.ETA = context.marshal_as<std::string>(this->EstimatedShippingTimeField->Text);

		bool ISGOOD = true;

		if ((this->ItemsGridView->RowCount) - 1 == 0){
			MessageBox::Show("You must add an item to record an invoice",
				"Fluid Invoice", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
			ISGOOD = false;
		}

		if (ISGOOD == true) {
			//Entering the full item list into the Invoice Structure
			for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
				TESTING = safe_cast<String^>(this->ItemsGridView[0, i]->Value);
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = test;
				}
				else {
					NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = 0;
				}

				if (this->ItemsGridView[1, i]->Value != nullptr && this->ItemsGridView[1, i]->Value != "") {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[1, i]->Value));
				}

				if (this->ItemsGridView[2, i]->Value != nullptr && this->ItemsGridView[2, i]->Value != "") {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[2, i]->Value));
				}

				TESTING = safe_cast<String^>(this->ItemsGridView[3, i]->Value);
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = test;
				}
				else {
					NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = 0;
				}

				if (this->ItemsGridView[4, i]->Value != nullptr) {
					TESTING = safe_cast<String^>(this->ItemsGridView[4, i]->Value->ToString());
					test = 0;
					if (Double::TryParse(TESTING, test)) {
						NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = test;
					}
					else {
						NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = 0;
					}
				}

			}

			TESTING = this->TotalLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_TOTALS = test;
			}
			else {
				NEWINVOICE.INV_TOTALS = 0.00;
			}

			TESTING = this->SubtotalLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_SUBTOTALS = test;
			}
			else {
				NEWINVOICE.INV_SUBTOTALS = 0.00;
			}

			TESTING = this->GSTLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_GST = test;
			}
			else {
				NEWINVOICE.INV_GST = 0.00;
			}

			TESTING = this->PSTLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_PST = test;
			}
			else {
				NEWINVOICE.INV_PST = 0.00;
			}

			TESTING = this->ShippingCostField->Text->ToString();

			Double ShippingCostDouble;
			test = 0;
			if (TESTING != nullptr && TESTING != "") {
				if (Double::TryParse(TESTING, test)) {
					ShippingCostDouble = test;
				}
				else {
					ShippingCostDouble = 0.00;
				}
			}
			else {
				ShippingCostDouble = 0.00;
			}

			NEWINVOICE.SHIPPINGCOST = ShippingCostDouble;

			if (this->TypeofPayment->Text == nullptr || this->TypeofPayment->Text == "") {
				this->TypeofPayment->Text = "N/A";
			}

			NEWINVOICE.PaymentType = context.marshal_as<std::string>(this->TypeofPayment->Text->ToString());

			if (isBoolChecker == "1") {
				TESTING = this->PaidField->Text->ToString();
				TESTING = TESTING->Replace("$", "");
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INV_AmountPaid = test;
				}
				else {
					NEWINVOICE.INV_AmountPaid = 0.00;
				}

				TESTING = this->UnpaidField->Text->ToString();
				TESTING = TESTING->Replace("$", "");
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INV_AmountUnpaid = test;
				}
				else {
					NEWINVOICE.INV_AmountUnpaid = 0.00;
				}
			}
			else {
				NEWINVOICE.INV_AmountPaid = 0.00;
				NEWINVOICE.INV_AmountUnpaid = NEWINVOICE.INV_TOTALS;
			}

			if (isBoolChecker == "1") {
				String^ SQLQuery = "UPDATE Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
					(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
					"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
					(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
					"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
					NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
					+ ", GST = " + NEWINVOICE.INV_GST
					+ ", PST = " + NEWINVOICE.INV_PST
					+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
					+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
					+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
					+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid
					+ " WHERE Invoice_Number = " + NEWINVOICE.InvoiceNumber + "; DELETE FROM `" + NEWINVOICE.InvoiceNumber + "`;";
				String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;


				try {
					Connection->Open();
					DataReader = GetExistingInvoiceData->ExecuteReader();

					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
					String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
						(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
						+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
						+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
						+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";
					MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

					try {
						Connection->Open();
						DataReader = GetExistingItemsData->ExecuteReader();
						Connection->Close();
					}
					catch (Exception^ex) {
						MessageBox::Show(ex->Message);
					}
				}
			}
			else {
				String^ SQLQuery = "INSERT INTO Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
					(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
					"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
					(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
					"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
					NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
					+ ", GST = " + NEWINVOICE.INV_GST
					+ ", PST = " + NEWINVOICE.INV_PST
					+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
					+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
					+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
					+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid + ";";
				String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;


				try {
					Connection->Open();
					DataReader = GetExistingInvoiceData->ExecuteReader();

					Connection->Close();
				}
				catch (Exception^ex) {
					//MessageBox::Show("WE GOT AN ERROR!");
					MessageBox::Show(ex->Message);

				}

				String^ NewTableEntry = "CREATE TABLE `FluidInvoice`.`" + NEWINVOICE.InvoiceNumber + "` ( `Item_Name` VARCHAR(60) NOT NULL , `Item_Quantity` INT NOT NULL , `Item_Description` VARCHAR(600) NOT NULL , `Item_Unit_Price` DOUBLE NOT NULL , `Item_Total` DOUBLE NOT NULL ) ENGINE = InnoDB;";
				MySqlCommand^ MakeNewTable = gcnew MySqlCommand(NewTableEntry, Connection);

				try {
					Connection->Open();
					DataReader = MakeNewTable->ExecuteReader();
					Connection->Close();
				}
				catch (Exception^ex) {
					//MessageBox::Show("WE GOT AN ERROR!");
					MessageBox::Show(ex->Message);
				}

				for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
					String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
						(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
						+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
						+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
						+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";

					//MessageBox::Show(ItemQuery);
					MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

					try {
						Connection->Open();
						DataReader = GetExistingItemsData->ExecuteReader();
						Connection->Close();
					}
					catch (Exception^ex) {
						//MessageBox::Show("WE GOT AN ERROR!");
						MessageBox::Show(ex->Message);
					}
				}

			}


			std::string CompanyName = "Company Name";
			std::string CompanyAddress = "Company Address";

			std::ofstream InvoiceFile;
			isCheckBool = "1";
			std::string GeneratedInvoiceFilename = context.marshal_as<std::string>(InvoiceNumbertoSave);
			GeneratedInvoiceFilename += ".html";

			InvoiceFile.open(GeneratedInvoiceFilename);

			InvoiceFile << "<!DOCTYPE html><html><header><title>Invoice " + context.marshal_as<std::string>(InvoiceNumbertoSave) + "</title>"; 
			InvoiceFile << "</header>";
			InvoiceFile << "<body style='font-family: Helvetica; font - size: 12px;'>";
			InvoiceFile << "<div style='display: block;'>";
			InvoiceFile << "<table border='0' width='100%' cellpadding='10' cellspacing='0'>";
			InvoiceFile << "<tbody>";
			InvoiceFile << "<tr>";
			InvoiceFile << "<td width='100%'>";
			InvoiceFile << "<table border='0' width='100%'>";
			InvoiceFile << "<tbody>";
			InvoiceFile << "<tr>";

			InvoiceFile << "<td width='65%'>";
			InvoiceFile << "<table border='0'>";
			InvoiceFile << "<tbody> <tr>";
			InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'> <img src='InvoiceLogo.png' border='0' height='75' alt=''></td>";

			InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'>";

			InvoiceFile << "<font color='#000000'><b>" + CompanyName + "</b></font> <br>";
			InvoiceFile << "<font color='#000000'>" + CompanyAddress + "</font>";

			InvoiceFile << "</td> </tr></tbody></table></td>";

			InvoiceFile << "<td><table border='0'><tbody><tr><td colspan='2' align='right'>";
			InvoiceFile << "<p style='font-size: 20px; font-weight: bold; color: #000000'>Invoice</p></td></tr>";

			InvoiceFile << "<tr><td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>Date:<br><b>Invoice No.:</b><br>Salesperson:<br>Payment Type:<br>Phone Number:<br>Estimated Shipping:</td>";

			InvoiceFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" << std::endl << NEWINVOICE.InvoiceDate + "<br><b>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.InvoiceNumber)) + "</b><br>";
			InvoiceFile << NEWINVOICE.SalespersonName + "<br>" + NEWINVOICE.PaymentType + "<br>" + NEWINVOICE.PhoneNumber + "<br>" + NEWINVOICE.ETA + "<br></td></tr></tbody></table></td></tr>";
			
			InvoiceFile << "<tr><td colspan='3'> <table width = '100%' border = '0' cellpadding = '0' cellspacing = '0'><tbody><tr><td width='50%'><table border='1' cellpadding='0' cellspacing='0' style='border: none;'><tbody><tr><td nowrap='nowrap' style='border: none; font-size: 12px;'><p style = 'line-height: 14px; margin: 0px; color: #000000'>";

			InvoiceFile << "<font color='#000000'><b>Customer:</b></font><br><b>" + NEWINVOICE.CustomerName + "<br>" + NEWINVOICE.ShippingAddress + "</b><br></p></td>";
			InvoiceFile << "<td width='100%' style='border: none;'></td>";
			InvoiceFile << "</tr></tbody></table></td></tr></tbody></table></td></tr></tbody></table></td></tr>";

			InvoiceFile << "<tr><td width = '100%'><table border = '1' cellpadding = '0' cellspacing = '0' width = '100%' style = 'border: none;'><tbody>";

			InvoiceFile << "<tr><td align = 'right' style = 'border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Qty</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px'>";
			InvoiceFile << "<font color = '#000000'>Item</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Description</font></td>";
			InvoiceFile << "<td align = 'right' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Unit Price</font></td><td align = 'right' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'>";
			InvoiceFile << "<font color = '#000000'>Total</font></td></tr>";


			for (int y = 0; y < (this->ItemsGridView->RowCount)-1; y++) {
				InvoiceFile << "<tr>";

				InvoiceFile << "<td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_QUANTITY)) + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMNAME + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMDESCRIPTION + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_UNITPRICE)) + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_ITEMTOTAL)) + "</font></td>";

				InvoiceFile << "</tr>";
			}

			InvoiceFile << "<tr>";


			if (NEWINVOICE.SHIPPINGCOST > 0) {
				InvoiceFile << "<td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td align = 'right' nowrap = 'nowrap' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>Shipping<br>Subtotal<br>GST<br>PST<br><b>Total</b><br><b>Paid</b><br><b>Balance</b></p></td>";
				InvoiceFile << "<td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>";
				InvoiceFile << "$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.SHIPPINGCOST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_SUBTOTALS)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_GST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_PST)) + "<br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_TOTALS)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountPaid)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountUnpaid)) + "</b></p>";
			}
			else {
				InvoiceFile << "<td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td align = 'right' nowrap = 'nowrap' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>Subtotal<br>GST<br>PST<br><b>Total</b><br><b>Paid</b><br><b>Balance</b></p></td>";
				InvoiceFile << "<td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>";
				InvoiceFile << "$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_SUBTOTALS)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_GST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_PST)) + "<br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_TOTALS)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountPaid)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountUnpaid)) + "</b></p>";
			}

			InvoiceFile << "</td></tr></tbody></table><br></td></tr></tbody></table>";
			InvoiceFile << "<p style='color: #000000'><br><b>Comments:<br>" + NEWINVOICE.Comments + "<br><br>1. All Sales are Final. No exchange, No refund.<br>2. All payments must be made in full at the store before delivery.<br>3. Any cancellation before delivery will have a 30% restocking fee. (No Refund)<br>4. All warranties will be covered by manufacturers. <br>5. All furniture items need assembling.<br>6. All special or overseas orders may take a longer time than promised but cannot be cancelled. <br>7. Furniture Store is not responsible for any damages to the house during delivery.<br>8. The Customer is 100% responsible for any furniture items that do not fit in their doorways, elevators, homes, etc.<br><br>Purchaser's Signature: __________________<br><br>Receiving Signature: __________________</b><br><br><br><b></b> <br><br><b></b> <br><br><b></b> <br></p>";
			InvoiceFile << "</div></body></html>";

			InvoiceFile.close();

			system(GeneratedInvoiceFilename.c_str());

			this->Close();

		}
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void ApplyPaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {

		INVOICE NEWINVOICE;
		msclr::interop::marshal_context context;
		NEWINVOICE.CustomerName = context.marshal_as<std::string>(this->NewInvoiceCustomerNameTextBox->Text);
		NEWINVOICE.SalespersonName = context.marshal_as<std::string>(this->SalespersonNameField->Text);
		NEWINVOICE.InvoiceDate = context.marshal_as<std::string>(this->NewInvoiceDateBox->Text);
		test = 0;
		InvoiceNumbertoSave = InvoiceNumberField->Text;
		if (Double::TryParse(this->InvoiceNumberField->Text, test)) {
			NEWINVOICE.InvoiceNumber = test;
		}
		else {
			NEWINVOICE.InvoiceNumber = 999999;
		}

		NEWINVOICE.PhoneNumber = context.marshal_as<std::string>(this->PhoneNumberField->Text);
		NEWINVOICE.Comments = context.marshal_as<std::string>(this->CommentsField->Text);

		NEWINVOICE.ShippingAddress = context.marshal_as<std::string>(this->ShippingAddressTextBox->Text);
		NEWINVOICE.ETA = context.marshal_as<std::string>(this->EstimatedShippingTimeField->Text);

		bool ISGOOD = true;

		if ((this->ItemsGridView->RowCount) - 1 == 0) {
			MessageBox::Show("You must add an item to record an invoice",
				"Fluid Invoice", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
			ISGOOD = false;
		}

		if (ISGOOD == true) {
			//Entering the full item list into the Invoice Structure
			for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
				TESTING = safe_cast<String^>(this->ItemsGridView[0, i]->Value);
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = test;
				}
				else {
					NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = 0;
				}

				if (this->ItemsGridView[1, i]->Value != nullptr && this->ItemsGridView[1, i]->Value != "") {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[1, i]->Value));
				}

				if (this->ItemsGridView[2, i]->Value != nullptr && this->ItemsGridView[2, i]->Value != "") {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[2, i]->Value));
				}

				TESTING = safe_cast<String^>(this->ItemsGridView[3, i]->Value);
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = test;
				}
				else {
					NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = 0;
				}

				if (this->ItemsGridView[4, i]->Value != nullptr) {
					TESTING = safe_cast<String^>(this->ItemsGridView[4, i]->Value->ToString());
					test = 0;
					if (Double::TryParse(TESTING, test)) {
						NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = test;
					}
					else {
						NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = 0;
					}
				}

			}

			TESTING = this->TotalLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_TOTALS = test;
			}
			else {
				NEWINVOICE.INV_TOTALS = 0.00;
			}

			TESTING = this->SubtotalLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_SUBTOTALS = test;
			}
			else {
				NEWINVOICE.INV_SUBTOTALS = 0.00;
			}

			TESTING = this->GSTLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_GST = test;
			}
			else {
				NEWINVOICE.INV_GST = 0.00;
			}

			TESTING = this->PSTLabel->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_PST = test;
			}
			else {
				NEWINVOICE.INV_PST = 0.00;
			}

			TESTING = this->ShippingCostField->Text->ToString();

			Double ShippingCostDouble;
			test = 0;
			if (TESTING != nullptr && TESTING != "") {
				if (Double::TryParse(TESTING, test)) {
					ShippingCostDouble = test;
				}
				else {
					ShippingCostDouble = 0.00;
				}
			}
			else {
				ShippingCostDouble = 0.00;
			}

			NEWINVOICE.SHIPPINGCOST = ShippingCostDouble;

			if (this->TypeofPayment->Text == nullptr || this->TypeofPayment->Text == "") {
				this->TypeofPayment->Text = "N/A";
			}

			NEWINVOICE.PaymentType = context.marshal_as<std::string>(this->TypeofPayment->Text->ToString());

			if (isBoolChecker == "1") {
				TESTING = this->PaidField->Text->ToString();
				TESTING = TESTING->Replace("$", "");
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INV_AmountPaid = test;
				}
				else {
					NEWINVOICE.INV_AmountPaid = 0.00;
				}

				TESTING = this->UnpaidField->Text->ToString();
				TESTING = TESTING->Replace("$", "");
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INV_AmountUnpaid = test;
				}
				else {
					NEWINVOICE.INV_AmountUnpaid = 0.00;
				}
			}
			else {
				NEWINVOICE.INV_AmountPaid = 0.00;
				NEWINVOICE.INV_AmountUnpaid = NEWINVOICE.INV_TOTALS;
			}

			if (isBoolChecker == "1") {
				String^ SQLQuery = "UPDATE Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
					(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
					"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
					(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
					"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
					NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
					+ ", GST = " + NEWINVOICE.INV_GST
					+ ", PST = " + NEWINVOICE.INV_PST
					+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
					+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
					+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
					+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid
					+ " WHERE Invoice_Number = " + NEWINVOICE.InvoiceNumber + "; DELETE FROM `" + NEWINVOICE.InvoiceNumber + "`;";
				String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;


				try {
					Connection->Open();
					DataReader = GetExistingInvoiceData->ExecuteReader();

					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}

				for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
					String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
						(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
						+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
						+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
						+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";
					MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

					try {
						Connection->Open();
						DataReader = GetExistingItemsData->ExecuteReader();
						Connection->Close();
					}
					catch (Exception^ex) {
						MessageBox::Show(ex->Message);
					}
				}
			}
			else {
				String^ SQLQuery = "INSERT INTO Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
					(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
					"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
					(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
					"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
					NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
					+ ", GST = " + NEWINVOICE.INV_GST
					+ ", PST = " + NEWINVOICE.INV_PST
					+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
					+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
					+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
					+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid + ";";
				String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
				MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
				MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
				MySqlDataReader^ DataReader;


				try {
					Connection->Open();
					DataReader = GetExistingInvoiceData->ExecuteReader();

					Connection->Close();
				}
				catch (Exception^ex) {
					//MessageBox::Show("WE GOT AN ERROR!");
					MessageBox::Show(ex->Message);

				}

				String^ NewTableEntry = "CREATE TABLE `FluidInvoice`.`" + NEWINVOICE.InvoiceNumber + "` ( `Item_Name` VARCHAR(60) NOT NULL , `Item_Quantity` INT NOT NULL , `Item_Description` VARCHAR(600) NOT NULL , `Item_Unit_Price` DOUBLE NOT NULL , `Item_Total` DOUBLE NOT NULL ) ENGINE = InnoDB;";
				MySqlCommand^ MakeNewTable = gcnew MySqlCommand(NewTableEntry, Connection);

				try {
					Connection->Open();
					DataReader = MakeNewTable->ExecuteReader();
					Connection->Close();
				}
				catch (Exception^ex) {
					//MessageBox::Show("WE GOT AN ERROR!");
					MessageBox::Show(ex->Message);
				}

				for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
					String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
						(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
						+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
						+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
						+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";

					//MessageBox::Show(ItemQuery);
					MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

					try {
						Connection->Open();
						DataReader = GetExistingItemsData->ExecuteReader();
						Connection->Close();
					}
					catch (Exception^ex) {
						//MessageBox::Show("WE GOT AN ERROR!");
						MessageBox::Show(ex->Message);
					}
				}

			}


			ApplyPaymentForm ^ ApplyPayment = gcnew ApplyPaymentForm;
			ApplyPayment->SearchedForInvoiceNumber = Convert::ToString(NEWINVOICE.InvoiceNumber);
			ApplyPayment->FromInvoiceForm = true;
			ApplyPayment->ShowDialog();
			NEWINVOICE.INV_AmountPaid = ApplyPayment->AmountPaidRecorded;
			NEWINVOICE.INV_AmountUnpaid = ApplyPayment->AmountUnpaidRecorded;

			/*
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			String^ UpdatePaidAmount = "UPDATE Invoices SET Amount_Paid = '" + NEWINVOICE.INV_AmountPaid + "', Amount_Left = '" + NEWINVOICE.INV_AmountUnpaid + "' WHERE Invoice_Number = " + NEWINVOICE.InvoiceNumber + "';";
			MySqlCommand^ PaymentQuery = gcnew MySqlCommand(UpdatePaidAmount, Connection);
			MySqlDataReader^ DataReader;
			try {
				Connection->Open();
				DataReader = PaymentQuery->ExecuteReader();
				Connection->Close();
			}
			catch (Exception^ex) {
				//MessageBox::Show("WE GOT AN ERROR!");
				MessageBox::Show(ex->Message);
			}*/


			std::string CompanyName = "Company Name";
			std::string CompanyAddress = "Company Address";

			std::ofstream InvoiceFile;
			isCheckBool = "1";
			std::string GeneratedInvoiceFilename = context.marshal_as<std::string>(InvoiceNumbertoSave);
			GeneratedInvoiceFilename += ".html";

			InvoiceFile.open(GeneratedInvoiceFilename);

			InvoiceFile << "<!DOCTYPE html><html><header><title>Invoice " + context.marshal_as<std::string>(InvoiceNumbertoSave) + "</title>";
			InvoiceFile << "</header>";
			InvoiceFile << "<body style='font-family: Helvetica; font - size: 12px;'>";
			InvoiceFile << "<div style='display: block;'>";
			InvoiceFile << "<table border='0' width='100%' cellpadding='10' cellspacing='0'>";
			InvoiceFile << "<tbody>";
			InvoiceFile << "<tr>";
			InvoiceFile << "<td width='100%'>";
			InvoiceFile << "<table border='0' width='100%'>";
			InvoiceFile << "<tbody>";
			InvoiceFile << "<tr>";

			InvoiceFile << "<td width='65%'>";
			InvoiceFile << "<table border='0'>";
			InvoiceFile << "<tbody> <tr>";
			InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'> <img src='InvoiceLogo.png' border='0' height='75' alt=''></td>";

			InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'>";

			InvoiceFile << "<font color='#000000'><b>" + CompanyName + "</b></font> <br>";
			InvoiceFile << "<font color='#000000'>" + CompanyAddress + "</font>";

			InvoiceFile << "</td> </tr></tbody></table></td>";

			InvoiceFile << "<td><table border='0'><tbody><tr><td colspan='2' align='right'>";
			InvoiceFile << "<p style='font-size: 20px; font-weight: bold; color: #000000'>Invoice</p></td></tr>";

			InvoiceFile << "<tr><td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>Date:<br><b>Invoice No.:</b><br>Salesperson:<br>Payment Type:<br>Phone Number:<br>Estimated Shipping:</td>";

			InvoiceFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" << std::endl << NEWINVOICE.InvoiceDate + "<br><b>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.InvoiceNumber)) + "</b><br>";
			InvoiceFile << NEWINVOICE.SalespersonName + "<br>" + NEWINVOICE.PaymentType + "<br>" + NEWINVOICE.PhoneNumber + "<br>" + NEWINVOICE.ETA + "<br></td></tr></tbody></table></td></tr>";

			InvoiceFile << "<tr><td colspan='3'> <table width = '100%' border = '0' cellpadding = '0' cellspacing = '0'><tbody><tr><td width='50%'><table border='1' cellpadding='0' cellspacing='0' style='border: none;'><tbody><tr><td nowrap='nowrap' style='border: none; font-size: 12px;'><p style = 'line-height: 14px; margin: 0px; color: #000000'>";

			InvoiceFile << "<font color='#000000'><b>Customer:</b></font><br><b>" + NEWINVOICE.CustomerName + "<br>" + NEWINVOICE.ShippingAddress + "</b><br></p></td>";
			InvoiceFile << "<td width='100%' style='border: none;'></td>";
			InvoiceFile << "</tr></tbody></table></td></tr></tbody></table></td></tr></tbody></table></td></tr>";

			InvoiceFile << "<tr><td width = '100%'><table border = '1' cellpadding = '0' cellspacing = '0' width = '100%' style = 'border: none;'><tbody>";

			InvoiceFile << "<tr><td align = 'right' style = 'border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Qty</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px'>";
			InvoiceFile << "<font color = '#000000'>Item</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Description</font></td>";
			InvoiceFile << "<td align = 'right' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Unit Price</font></td><td align = 'right' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'>";
			InvoiceFile << "<font color = '#000000'>Total</font></td></tr>";


			for (int y = 0; y < (this->ItemsGridView->RowCount) - 1; y++) {
				InvoiceFile << "<tr>";

				InvoiceFile << "<td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_QUANTITY)) + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMNAME + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMDESCRIPTION + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_UNITPRICE)) + "</font></td>";
				InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: none; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_ITEMTOTAL)) + "</font></td>";

				InvoiceFile << "</tr>";
			}

			InvoiceFile << "<tr>";


			if (NEWINVOICE.SHIPPINGCOST > 0) {
				InvoiceFile << "<td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td align = 'right' nowrap = 'nowrap' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>Shipping<br>Subtotal<br>GST<br>PST<br><b>Total</b><br><b>Paid</b><br><b>Balance</b></p></td>";
				InvoiceFile << "<td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>";
				InvoiceFile << "$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.SHIPPINGCOST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_SUBTOTALS)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_GST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_PST)) + "<br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_TOTALS)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountPaid)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountUnpaid)) + "</b></p>";
			}
			else {
				InvoiceFile << "<td style='border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: none; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: none;'>&nbsp;</td><td align = 'right' nowrap = 'nowrap' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px;font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>Subtotal<br>GST<br>PST<br><b>Total</b><br><b>Paid</b><br><b>Balance</b></p></td>";
				InvoiceFile << "<td align='right' nowrap='nowrap' style='border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-size: 12px;'><p style = 'line-height: 18px; color: #000000'>";
				InvoiceFile << "$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_SUBTOTALS)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_GST)) + "<br>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_PST)) + "<br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_TOTALS)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountPaid)) + "</b><br><b>$" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INV_AmountUnpaid)) + "</b></p>";
			}

			InvoiceFile << "</td></tr></tbody></table><br></td></tr></tbody></table>";
			InvoiceFile << "<p style='color: #000000'><br><b>Comments:<br>" + NEWINVOICE.Comments + "<br><br>1. All Sales are Final. No exchange, No refund.<br>2. All payments must be made in full at the store before delivery.<br>3. Any cancellation before delivery will have a 30% restocking fee. (No Refund)<br>4. All warranties will be covered by manufacturers. <br>5. All furniture items need assembling.<br>6. All special or overseas orders may take a longer time than promised but cannot be cancelled. <br>7. Furniture Store is not responsible for any damages to the house during delivery.<br>8. The Customer is 100% responsible for any furniture items that do not fit in their doorways, elevators, homes, etc.<br><br>Purchaser's Signature: __________________<br><br>Receiving Signature: __________________</b><br><br><br><b></b> <br><br><b></b> <br><br><b></b> <br></p>";
			InvoiceFile << "</div></body></html>";

			InvoiceFile.close();

			system(GeneratedInvoiceFilename.c_str());

			this->Close();

		}



	}

	private: System::Void PriceUpdate() {
		int NumberofRows = this->ItemsGridView->RowCount;
		TOTALS = 0;
		//Calculate Item Totals
		for (int i = 0; i < NumberofRows - 1; i++) {
			Quantity = safe_cast<String^>(this->ItemsGridView[0, i]->Value);
			UnitPrice = safe_cast<String^>(this->ItemsGridView[3, i]->Value);

			test = 0;
			if (Double::TryParse(Quantity, test)) {
				QTY = test;
			}
			else {
				QTY = 0.0;
			}

			if (Double::TryParse(UnitPrice, test)) {
				UPR = test;
			}
			else {
				UPR = 0.0;
			}

			this->ItemsGridView[4, i]->Value = (QTY*UPR);

		}

		//Calculate Invoice Subtotal
		SUBTOTALS = 0;
		for (int i = 0; i < NumberofRows; i++) {
			if (this->ItemsGridView[4, i]->Value != nullptr) {
				temp = safe_cast<Double>(this->ItemsGridView[4, i]->Value);
				SUBTOTALS += temp;
			}
			else {
				continue;
			}

		}
		this->StaticSubtotalLabel->Visible = true;
		this->SubtotalLabel->Visible = true;

		SUBTOTALS = floor(SUBTOTALS / scale + 0.5) * scale;
		TOTALS += SUBTOTALS;
		this->SubtotalLabel->Text = "$" + SUBTOTALS.ToString();

		Double Temporary = 0;

		TESTING = this->ShippingCostField->Text->ToString();

		if (TESTING == nullptr || TESTING == "") {
			TESTING = "0";
		}

		Double ShippingCostDouble;
		test = 0;
		if (TESTING != nullptr && TESTING != "") {
			if (Double::TryParse(TESTING, test)) {
				ShippingCostDouble = test;
			}
			else {
				ShippingCostDouble = 0.00;
			}
		}

		TESTING = this->SubtotalLabel->Text;
		TESTING = TESTING->Replace("$", "");

		//Calculate Taxes
		if (this->SubtotalLabel->Text != nullptr && TESTING != nullptr && TESTING != "") {
			Temporary = Convert::ToDouble(TESTING);
			GST = Temporary * 0.05;
			PST = Temporary * 0.07;
			TOTALS += ShippingCostDouble;
			ShippingCostDouble = ShippingCostDouble * 0.05;
			GST += ShippingCostDouble;
			GST = floor(GST / scale + 0.5) * scale;
			PST = floor(PST / scale + 0.5) * scale;
			TOTALS += GST;
			TOTALS += PST;
			this->StaticSalesTaxGSTLabel->Visible = true;
			this->GSTLabel->Visible = true;

			this->GSTLabel->Text = "$" + GST.ToString();

			this->StaticSalesTaxPSTLabel->Visible = true;
			this->PSTLabel->Visible = true;
			this->PSTLabel->Text = "$" + PST.ToString();

		}

		this->StaticTotalLabel->Visible = true;

		TOTALS = floor(TOTALS / scale + 0.5) * scale;

		this->TotalLabel->Text = "$" + TOTALS;
		this->TotalLabel->Visible = true;

		if (isBoolChecker == "1") {
			TESTING = this->PaidField->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			Double AmountPaid;
			test = 0;
			if (TESTING != nullptr && TESTING != "") {
				if (Double::TryParse(TESTING, test)) {
					AmountPaid = test;
					AmountPaid = floor(AmountPaid / scale + 0.5) * scale;
				}
				else {
					AmountPaid = 0.00;
				}
			}

			Double AmountUnpaid;
			AmountUnpaid = TOTALS - AmountPaid;
			AmountUnpaid = floor(AmountUnpaid / scale + 0.5) * scale;
			this->UnpaidField->Text = "$" + Convert::ToString(AmountUnpaid);
		}
	}
private: System::Void StaticShippingTimeLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void StaticPhoneNumberLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void StaticPaymentLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TotalTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	PriceUpdate();
}
private: System::Void ItemsGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	INVOICE NEWINVOICE;
	msclr::interop::marshal_context context;
	NEWINVOICE.CustomerName = context.marshal_as<std::string>(this->NewInvoiceCustomerNameTextBox->Text);
	NEWINVOICE.SalespersonName = context.marshal_as<std::string>(this->SalespersonNameField->Text);
	NEWINVOICE.InvoiceDate = context.marshal_as<std::string>(this->NewInvoiceDateBox->Text);
	test = 0;
	InvoiceNumbertoSave = InvoiceNumberField->Text;
	if (Double::TryParse(this->InvoiceNumberField->Text, test)) {
		NEWINVOICE.InvoiceNumber = test;
	}
	else {
		NEWINVOICE.InvoiceNumber = 999999;
	}

	NEWINVOICE.PhoneNumber = context.marshal_as<std::string>(this->PhoneNumberField->Text);
	NEWINVOICE.Comments = context.marshal_as<std::string>(this->CommentsField->Text);

	NEWINVOICE.ShippingAddress = context.marshal_as<std::string>(this->ShippingAddressTextBox->Text);
	NEWINVOICE.ETA = context.marshal_as<std::string>(this->EstimatedShippingTimeField->Text);

	bool ISGOOD = true;

	if ((this->ItemsGridView->RowCount) - 1 == 0) {
		MessageBox::Show("You must add an item to record an invoice",
			"Fluid Invoice", MessageBoxButtons::OK,
			MessageBoxIcon::Asterisk);
		ISGOOD = false;
	}

	if (ISGOOD == true) {
		//Entering the full item list into the Invoice Structure
		for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
			TESTING = safe_cast<String^>(this->ItemsGridView[0, i]->Value);
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = test;
			}
			else {
				NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY = 0;
			}

			if (this->ItemsGridView[1, i]->Value != nullptr && this->ItemsGridView[1, i]->Value != "") {
				NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[1, i]->Value));
			}

			if (this->ItemsGridView[2, i]->Value != nullptr && this->ItemsGridView[2, i]->Value != "") {
				NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION = context.marshal_as<std::string>(safe_cast<String^>(this->ItemsGridView[2, i]->Value));
			}

			TESTING = safe_cast<String^>(this->ItemsGridView[3, i]->Value);
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = test;
			}
			else {
				NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE = 0;
			}

			if (this->ItemsGridView[4, i]->Value != nullptr) {
				TESTING = safe_cast<String^>(this->ItemsGridView[4, i]->Value->ToString());
				test = 0;
				if (Double::TryParse(TESTING, test)) {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = test;
				}
				else {
					NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL = 0;
				}
			}

		}

		TESTING = this->TotalLabel->Text->ToString();
		TESTING = TESTING->Replace("$", "");
		test = 0;
		if (Double::TryParse(TESTING, test)) {
			NEWINVOICE.INV_TOTALS = test;
		}
		else {
			NEWINVOICE.INV_TOTALS = 0.00;
		}

		TESTING = this->SubtotalLabel->Text->ToString();
		TESTING = TESTING->Replace("$", "");
		test = 0;
		if (Double::TryParse(TESTING, test)) {
			NEWINVOICE.INV_SUBTOTALS = test;
		}
		else {
			NEWINVOICE.INV_SUBTOTALS = 0.00;
		}

		TESTING = this->GSTLabel->Text->ToString();
		TESTING = TESTING->Replace("$", "");
		test = 0;
		if (Double::TryParse(TESTING, test)) {
			NEWINVOICE.INV_GST = test;
		}
		else {
			NEWINVOICE.INV_GST = 0.00;
		}

		TESTING = this->PSTLabel->Text->ToString();
		TESTING = TESTING->Replace("$", "");
		test = 0;
		if (Double::TryParse(TESTING, test)) {
			NEWINVOICE.INV_PST = test;
		}
		else {
			NEWINVOICE.INV_PST = 0.00;
		}

		TESTING = this->ShippingCostField->Text->ToString();

		Double ShippingCostDouble;
		test = 0;
		if (TESTING != nullptr && TESTING != "") {
			if (Double::TryParse(TESTING, test)) {
				ShippingCostDouble = test;
			}
			else {
				ShippingCostDouble = 0.00;
			}
		}
		else {
			ShippingCostDouble = 0.00;
		}

		NEWINVOICE.SHIPPINGCOST = ShippingCostDouble;

		if (this->TypeofPayment->Text == nullptr || this->TypeofPayment->Text == "") {
			this->TypeofPayment->Text = "N/A";
		}

		NEWINVOICE.PaymentType = context.marshal_as<std::string>(this->TypeofPayment->Text->ToString());

		if (isBoolChecker == "1") {
			TESTING = this->PaidField->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_AmountPaid = test;
			}
			else {
				NEWINVOICE.INV_AmountPaid = 0.00;
			}

			TESTING = this->UnpaidField->Text->ToString();
			TESTING = TESTING->Replace("$", "");
			test = 0;
			if (Double::TryParse(TESTING, test)) {
				NEWINVOICE.INV_AmountUnpaid = test;
			}
			else {
				NEWINVOICE.INV_AmountUnpaid = 0.00;
			}
		}
		else {
			NEWINVOICE.INV_AmountPaid = 0.00;
			NEWINVOICE.INV_AmountUnpaid = NEWINVOICE.INV_TOTALS;
		}

		if (isBoolChecker == "1") {
			String^ SQLQuery = "UPDATE Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
				(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
				"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
				(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
				"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
				NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
				+ ", GST = " + NEWINVOICE.INV_GST
				+ ", PST = " + NEWINVOICE.INV_PST
				+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
				+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
				+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
				+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid
				+ " WHERE Invoice_Number = " + NEWINVOICE.InvoiceNumber + "; DELETE FROM `" + NEWINVOICE.InvoiceNumber + "`;";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;


			try {
				Connection->Open();
				DataReader = GetExistingInvoiceData->ExecuteReader();

				Connection->Close();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}

			for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
				String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
					(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
					+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
					+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
					+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";
				MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

				try {
					Connection->Open();
					DataReader = GetExistingItemsData->ExecuteReader();
					Connection->Close();
				}
				catch (Exception^ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}
		else {
			String^ SQLQuery = "INSERT INTO Invoices SET Invoice_Number = " + NEWINVOICE.InvoiceNumber + ", Customer_Name = '" +
				(gcnew String(NEWINVOICE.CustomerName.c_str())) + "', Invoice_Date = '" + (gcnew String(NEWINVOICE.InvoiceDate.c_str())) +
				"', Sales_Person = '" + (gcnew String(NEWINVOICE.SalespersonName.c_str())) + "', Estimated_Shipping_Time = '" +
				(gcnew String(NEWINVOICE.ETA.c_str())) + "', Phone_Number = '" + (gcnew String(NEWINVOICE.PhoneNumber.c_str())) +
				"', Shipping_Address = '" + (gcnew String(NEWINVOICE.ShippingAddress.c_str())) + "', Shipping_Cost = " +
				NEWINVOICE.SHIPPINGCOST + ", Payment_Type = '" + (gcnew String(NEWINVOICE.PaymentType.c_str())) + "', Subtotal = " + NEWINVOICE.INV_SUBTOTALS
				+ ", GST = " + NEWINVOICE.INV_GST
				+ ", PST = " + NEWINVOICE.INV_PST
				+ ", TOTAL = " + NEWINVOICE.INV_TOTALS
				+ ", Comments = '" + (gcnew String(NEWINVOICE.Comments.c_str()))
				+ "', Amount_Paid = " + NEWINVOICE.INV_AmountPaid
				+ ", Amount_Left = " + NEWINVOICE.INV_AmountUnpaid + ";";
			String^ connectionInfo = "Server = SERVERIP; Port = 3306; Database = FluidInvoice; Uid = FluidInvoice; Pwd = PASSWORD";
			MySqlConnection^ Connection = gcnew MySqlConnection(connectionInfo);
			MySqlCommand^ GetExistingInvoiceData = gcnew MySqlCommand(SQLQuery, Connection);
			MySqlDataReader^ DataReader;


			try {
				Connection->Open();
				DataReader = GetExistingInvoiceData->ExecuteReader();

				Connection->Close();
			}
			catch (Exception^ex) {
				//MessageBox::Show("WE GOT AN ERROR!");
				MessageBox::Show(ex->Message);

			}

			String^ NewTableEntry = "CREATE TABLE `FluidInvoice`.`" + NEWINVOICE.InvoiceNumber + "` ( `Item_Name` VARCHAR(60) NOT NULL , `Item_Quantity` INT NOT NULL , `Item_Description` VARCHAR(600) NOT NULL , `Item_Unit_Price` DOUBLE NOT NULL , `Item_Total` DOUBLE NOT NULL ) ENGINE = InnoDB;";
			MySqlCommand^ MakeNewTable = gcnew MySqlCommand(NewTableEntry, Connection);

			try {
				Connection->Open();
				DataReader = MakeNewTable->ExecuteReader();
				Connection->Close();
			}
			catch (Exception^ex) {
				//MessageBox::Show("WE GOT AN ERROR!");
				MessageBox::Show(ex->Message);
			}

			for (int i = 0; i < (this->ItemsGridView->RowCount) - 1; i++) {
				String^ ItemQuery = "INSERT INTO `" + NEWINVOICE.InvoiceNumber + "` (Item_Name, Item_Quantity, Item_Description, Item_Unit_Price, Item_Total) VALUES('" +
					(gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMNAME.c_str())) + "', " + NEWINVOICE.INVOICEITEMS[i].INV_QUANTITY
					+ ", '" + (gcnew String(NEWINVOICE.INVOICEITEMS[i].INV_ITEMDESCRIPTION.c_str()))
					+ "', " + NEWINVOICE.INVOICEITEMS[i].INV_UNITPRICE
					+ ", " + NEWINVOICE.INVOICEITEMS[i].INV_ITEMTOTAL + ");";

				//MessageBox::Show(ItemQuery);
				MySqlCommand^ GetExistingItemsData = gcnew MySqlCommand(ItemQuery, Connection);

				try {
					Connection->Open();
					DataReader = GetExistingItemsData->ExecuteReader();
					Connection->Close();
				}
				catch (Exception^ex) {
					//MessageBox::Show("WE GOT AN ERROR!");
					MessageBox::Show(ex->Message);
				}
			}

		}


		std::string CompanyName = "Company Name";
		std::string CompanyAddress = "Company Address";

		std::ofstream InvoiceFile;
		isCheckBool = "1";
		std::string GeneratedInvoiceFilename = context.marshal_as<std::string>(InvoiceNumbertoSave);
		GeneratedInvoiceFilename += ".html";

		InvoiceFile.open(GeneratedInvoiceFilename);

		InvoiceFile << "<!DOCTYPE html><html><header><title>Invoice " + context.marshal_as<std::string>(InvoiceNumbertoSave) + "</title>";
		InvoiceFile << "</header>";
		InvoiceFile << "<body style='font-family: Helvetica; font - size: 12px;'>";
		InvoiceFile << "<div style='display: block;'>";
		InvoiceFile << "<table border='0' width='100%' cellpadding='10' cellspacing='0'>";
		InvoiceFile << "<tbody>";
		InvoiceFile << "<tr>";
		InvoiceFile << "<td width='100%'>";
		InvoiceFile << "<table border='0' width='100%'>";
		InvoiceFile << "<tbody>";
		InvoiceFile << "<tr>";

		InvoiceFile << "<td width='65%'>";
		InvoiceFile << "<table border='0'>";
		InvoiceFile << "<tbody> <tr>";
		InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'> <img src='InvoiceLogo.png' border='0' height='75' alt=''></td>";

		InvoiceFile << "<td valign='top' nowrap='nowrap' style='font-size: 12px;'>";

		InvoiceFile << "<font color='#000000'><b>" + CompanyName + "</b></font> <br>";
		InvoiceFile << "<font color='#000000'>" + CompanyAddress + "</font>";

		InvoiceFile << "</td> </tr></tbody></table></td>";

		InvoiceFile << "<td><table border='0'><tbody><tr><td colspan='2' align='right'>";
		InvoiceFile << "<p style='font-size: 20px; font-weight: bold; color: #000000'>Invoice</p></td></tr>";

		InvoiceFile << "<tr><td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>Date:<br><b>Invoice No.:</b><br>Salesperson:<br>Phone Number:<br>Estimated Shipping:</td>";

		InvoiceFile << "<td nowrap='nowrap' style='font-size: 12px; line-height: 14px; color: #000000'>" << std::endl << NEWINVOICE.InvoiceDate + "<br><b>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.InvoiceNumber)) + "</b><br>";
		InvoiceFile << NEWINVOICE.SalespersonName + "<br>" + NEWINVOICE.PhoneNumber + "<br>" + NEWINVOICE.ETA + "<br></td></tr></tbody></table></td></tr>";

		InvoiceFile << "<tr><td colspan='3'> <table width = '100%' border = '0' cellpadding = '0' cellspacing = '0'><tbody><tr><td width='50%'><table border='1' cellpadding='0' cellspacing='0' style='border: none;'><tbody><tr><td nowrap='nowrap' style='border: none; font-size: 12px;'><p style = 'line-height: 14px; margin: 0px; color: #000000'>";

		InvoiceFile << "<font color='#000000'><b>Customer:</b></font><br><b>" + NEWINVOICE.CustomerName + "<br>" + NEWINVOICE.ShippingAddress + "</b><br></p></td>";
		InvoiceFile << "<td width='100%' style='border: none;'></td>";
		InvoiceFile << "</tr></tbody></table></td></tr></tbody></table></td></tr></tbody></table></td></tr>";

		InvoiceFile << "<tr><td width = '100%'><table border = '1' cellpadding = '0' cellspacing = '0' width = '100%' style = 'border: none;'><tbody>";

		InvoiceFile << "<tr><td align = 'right' style = 'border-left: 1px solid; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Qty</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px'>";
		InvoiceFile << "<font color = '#000000'>Item</font></td><td align = 'left' style = 'border-left: none; border-right: 1px solid; border-top: 1px solid; border-bottom: 1px solid; padding: 6px; font-weight: bold; font-size: 12px;'><font color = '#000000'>Description</font></td></tr>";

		for (int y = 0; y < (this->ItemsGridView->RowCount) - 1; y++) {
			InvoiceFile << "<tr>";

			InvoiceFile << "<td style='border-left: 1px solid; border-right: 1px solid; border-top: none; border-bottom: 1px solid; padding-left: 6px; padding-right: 6px; font-size: 12px;' align='right'><font color = '#000000'>" + context.marshal_as<std::string>(Convert::ToString(NEWINVOICE.INVOICEITEMS[y].INV_QUANTITY)) + "</font></td>";
			InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: 1px solid; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMNAME + "</font></td>";
			InvoiceFile << "<td style='border-left: none; border-right: 1px solid; border-top: none; border-bottom: 1px solid; padding-left: 6px; padding-right: 6px; font-size: 12px;'><font color = '#000000'>" + NEWINVOICE.INVOICEITEMS[y].INV_ITEMDESCRIPTION + "</font></td>";

			InvoiceFile << "</tr>";
		}

		InvoiceFile << "</tbody></table><br></td></tr></tbody></table>";
		InvoiceFile << "<p style='color: #000000'><br><b>Comments:<br>" + NEWINVOICE.Comments + "<br><br>1. All Sales are Final. No exchange, No refund.<br>2. All payments must be made in full at the store before delivery.<br>3. Any cancellation before delivery will have a 30% restocking fee. (No Refund)<br>4. All warranties will be covered by manufacturers. <br>5. All furniture items need assembling.<br>6. All special or overseas orders may take a longer time than promised but cannot be cancelled. <br>7. Furniture Store is not responsible for any damages to the house during delivery.<br>8. The Customer is 100% responsible for any furniture items that do not fit in their doorways, elevators, homes, etc.<br><br>Purchaser's Signature: __________________<br><br>Receiving Signature: __________________</b><br><br><br><b></b> <br><br><b></b> <br><br><b></b> <br></p>";
		InvoiceFile << "</div></body></html>";

		InvoiceFile.close();

		system(GeneratedInvoiceFilename.c_str());

		this->Close();

	}
}
};
}
