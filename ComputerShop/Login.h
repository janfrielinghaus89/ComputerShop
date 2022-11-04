#pragma once
#include "User.h"

namespace ComputerShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbNickMail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbNickMail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(533, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nickname/E-Mail:";
			// 
			// tbNickMail
			// 
			this->tbNickMail->Location = System::Drawing::Point(192, 89);
			this->tbNickMail->Name = L"tbNickMail";
			this->tbNickMail->Size = System::Drawing::Size(357, 31);
			this->tbNickMail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Passwort:";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(192, 145);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(357, 31);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(69, 212);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(186, 38);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Login::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(309, 212);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(186, 38);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Abbrechen";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Login::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(428, 9);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(128, 25);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Registrieren";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::llRegister_LinkClicked);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->ClientSize = System::Drawing::Size(568, 288);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbNickMail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"ComputerShop Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Button Behaviour
	// Cancel / Abbrechen
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

	// OK
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ emailNick = this->tbNickMail->Text;
		String^ password = this->tbPassword->Text;

		// Check if textboxes are filled
		if (emailNick->Length == 0 || password->Length == 0) {
			MessageBox::Show("Bitte tragen Sie Ihre Login-Informationen ein", "Login-Informationen fehlen", MessageBoxButtons::OK);
		}

		// Get connection to SQL Server
		try {
			String^ connString = "Data Source=PC_Jan\\SQLEXPRESS;Initial Catalog=computershop;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			// Create SQL Query
			String^ sqlQuery = "SELECT * FROM users WHERE password=@password AND (email=@emailNick OR nickname=@emailNick)";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@emailNick", emailNick);

			// start SQL Reader and get database information
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->password = reader->GetString(3);
				user->nickname = reader->GetString(4);

				this->Close();
			}
			else {
				MessageBox::Show("E-Mail/Nickname oder Passwort inkorrekt.", "Zugangsdaten fehlerhaft", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Verbindung zur Datenbank kann nicht aufgebaut werden.", "Keine Verbindung", MessageBoxButtons::OK);
		}
	}
public:
	bool switchToRegister = false;

private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
