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
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbNickname;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbMail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;

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
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbNickname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbMail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(826, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrierung";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(252, 105);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(600, 31);
			this->tbName->TabIndex = 2;
			// 
			// tbNickname
			// 
			this->tbNickname->Location = System::Drawing::Point(252, 155);
			this->tbNickname->Name = L"tbNickname";
			this->tbNickname->Size = System::Drawing::Size(600, 31);
			this->tbNickname->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nickname";
			// 
			// tbMail
			// 
			this->tbMail->Location = System::Drawing::Point(252, 206);
			this->tbMail->Name = L"tbMail";
			this->tbMail->Size = System::Drawing::Size(600, 31);
			this->tbMail->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"E-Mail";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(252, 259);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(600, 31);
			this->tbPassword->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Passwort";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(252, 310);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(600, 31);
			this->tbConfirmPassword->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(206, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Passwort bestätigen";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(252, 367);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(287, 42);
			this->btnOK->TabIndex = 11;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(569, 367);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(283, 42);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Abbrechen";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(789, 9);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(80, 31);
			this->llLogin->TabIndex = 13;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(881, 460);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbMail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbNickname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Registrierung";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

public:
	bool switchToLogin = false;

private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	public:
		User^ user = nullptr;

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbMail->Text;
	String^ nickname = tbNickname->Text;
	String^ password = tbPassword->Text;
	String^ confirmPassword = tbConfirmPassword->Text;

	if (name->Length == 0 || email->Length == 0 || nickname->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
		MessageBox::Show("Bitte alle Felder ausfüllen.", "Felder fehlen", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Passwörter stimmen nicht überein.", "Passwort fehlerhaft", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=PC_Jan\\SQLEXPRESS;Initial Catalog=computershop;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " + "(name, email, password, nickname) VALUES " + "(@name, @email, @password, @nickname);";
		
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@nickname", nickname);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->password = password;
		user->nickname = nickname;

		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("User konnte nicht registriert werden.", "Registrierung nicht möglich", MessageBoxButtons::OK);
	}
}
};
}
