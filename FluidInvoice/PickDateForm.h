#pragma once

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PickDateForm
	/// </summary>
	public ref class PickDateForm : public System::Windows::Forms::Form
	{
	public:
		PickDateForm(void)
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
		~PickDateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StaticPromptLabel;
	protected:
	private: System::Windows::Forms::Label^  StaticStartingLabel;
	private: System::Windows::Forms::Label^  StaticEndingLabel;
	private: System::Windows::Forms::DateTimePicker^  StartingDate;
	private: System::Windows::Forms::DateTimePicker^  EndingDate;
	private: System::Windows::Forms::Button^  SearchButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PickDateForm::typeid));
			this->StaticPromptLabel = (gcnew System::Windows::Forms::Label());
			this->StaticStartingLabel = (gcnew System::Windows::Forms::Label());
			this->StaticEndingLabel = (gcnew System::Windows::Forms::Label());
			this->StartingDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->EndingDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StaticPromptLabel
			// 
			this->StaticPromptLabel->AutoSize = true;
			this->StaticPromptLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticPromptLabel->Location = System::Drawing::Point(12, 9);
			this->StaticPromptLabel->Name = L"StaticPromptLabel";
			this->StaticPromptLabel->Size = System::Drawing::Size(308, 20);
			this->StaticPromptLabel->TabIndex = 0;
			this->StaticPromptLabel->Text = L"Please Pick a Starting and Ending Date:";
			// 
			// StaticStartingLabel
			// 
			this->StaticStartingLabel->AutoSize = true;
			this->StaticStartingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticStartingLabel->Location = System::Drawing::Point(32, 47);
			this->StaticStartingLabel->Name = L"StaticStartingLabel";
			this->StaticStartingLabel->Size = System::Drawing::Size(113, 20);
			this->StaticStartingLabel->TabIndex = 1;
			this->StaticStartingLabel->Text = L"Starting Date:";
			// 
			// StaticEndingLabel
			// 
			this->StaticEndingLabel->AutoSize = true;
			this->StaticEndingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StaticEndingLabel->Location = System::Drawing::Point(35, 79);
			this->StaticEndingLabel->Name = L"StaticEndingLabel";
			this->StaticEndingLabel->Size = System::Drawing::Size(106, 20);
			this->StaticEndingLabel->TabIndex = 2;
			this->StaticEndingLabel->Text = L"Ending Date:";
			// 
			// StartingDate
			// 
			this->StartingDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StartingDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->StartingDate->Location = System::Drawing::Point(151, 42);
			this->StartingDate->Name = L"StartingDate";
			this->StartingDate->Size = System::Drawing::Size(127, 26);
			this->StartingDate->TabIndex = 3;
			// 
			// EndingDate
			// 
			this->EndingDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->EndingDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->EndingDate->Location = System::Drawing::Point(151, 79);
			this->EndingDate->Name = L"EndingDate";
			this->EndingDate->Size = System::Drawing::Size(127, 26);
			this->EndingDate->TabIndex = 4;
			// 
			// SearchButton
			// 
			this->SearchButton->AutoSize = true;
			this->SearchButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SearchButton->Location = System::Drawing::Point(115, 120);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(72, 30);
			this->SearchButton->TabIndex = 5;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &PickDateForm::SearchButton_Click);
			// 
			// PickDateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(419, 267);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->EndingDate);
			this->Controls->Add(this->StartingDate);
			this->Controls->Add(this->StaticEndingLabel);
			this->Controls->Add(this->StaticStartingLabel);
			this->Controls->Add(this->StaticPromptLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PickDateForm";
			this->Text = L"Pick Dates";
			this->Load += gcnew System::EventHandler(this, &PickDateForm::PickDateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ StartingDateString;
	public: String^ EndingDateString;
	public: bool Searched = false;

	private: System::Void PickDateForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Searched = true;
		StartingDateString = this->StartingDate->Text;
		EndingDateString = this->EndingDate->Text;
		this->Close();
	}
};
}
