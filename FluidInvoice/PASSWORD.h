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

	/// <summary>
	/// Summary for PASSWORD
	/// </summary>
	public ref class PASSWORD : public System::Windows::Forms::Form
	{
	public:
		PASSWORD(void)
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
		~PASSWORD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  prompt;
	private: System::Windows::Forms::TextBox^  passwordBox;
	private: System::Windows::Forms::Button^  submit;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PASSWORD::typeid));
			this->prompt = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// prompt
			// 
			this->prompt->AutoSize = true;
			this->prompt->Location = System::Drawing::Point(21, 9);
			this->prompt->Name = L"prompt";
			this->prompt->Size = System::Drawing::Size(237, 17);
			this->prompt->TabIndex = 0;
			this->prompt->Text = L"Please enter the password to unlock";
			this->prompt->Click += gcnew System::EventHandler(this, &PASSWORD::prompt_Click);
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(24, 58);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->PasswordChar = '*';
			this->passwordBox->Size = System::Drawing::Size(234, 22);
			this->passwordBox->TabIndex = 0;
			this->passwordBox->UseSystemPasswordChar = true;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(96, 86);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 35);
			this->submit->TabIndex = 1;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &PASSWORD::submit_Click);
			// 
			// PASSWORD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 129);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->prompt);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PASSWORD";
			this->Text = L"PASSWORD";
			this->Load += gcnew System::EventHandler(this, &PASSWORD::PASSWORD_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:	bool authenticated = false;
	public: bool submitted = false;
	private: System::Void PASSWORD_Load(System::Object^  sender, System::EventArgs^  e) {
		authenticated = false;
		submitted = false;
	}
	private: System::Void prompt_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
		submitted = true;
		if (this->passwordBox->Text == "password") {
			authenticated = true;
		}
		else {
			authenticated = false;
		}
		this->Close();
	}
	};
}
