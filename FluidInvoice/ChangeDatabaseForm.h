#pragma once

namespace FluidInvoice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeDatabaseForm
	/// </summary>
	public ref class ChangeDatabaseForm : public System::Windows::Forms::Form
	{
	public:
		ChangeDatabaseForm(void)
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
		~ChangeDatabaseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  SaveButton;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeDatabaseForm::typeid));
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SaveButton
			// 
			this->SaveButton->Location = System::Drawing::Point(169, 174);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(75, 29);
			this->SaveButton->TabIndex = 0;
			this->SaveButton->Text = L"Save";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &ChangeDatabaseForm::SaveButton_Click);
			// 
			// ChangeDatabaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 253);
			this->Controls->Add(this->SaveButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChangeDatabaseForm";
			this->Text = L"Change Database";
			this->Load += gcnew System::EventHandler(this, &ChangeDatabaseForm::ChangeDatabaseForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ChangeDatabaseForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		std::ofstream out("DatabaseInformation");

	}
	};
}
