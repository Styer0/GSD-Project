#pragma once
#include "User.h"

namespace GSD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbEmail;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_pass;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Label^ label_user;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->label_pass = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->button_login);
			this->panel1->Controls->Add(this->label_pass);
			this->panel1->Controls->Add(this->tbPassword);
			this->panel1->Controls->Add(this->label_user);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tbEmail);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(418, 79);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 601);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel1_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(45, 390);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(255, 2);
			this->panel4->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(45, 322);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 2);
			this->panel3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(82, 568);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Don\'t have an account\?";
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(209, 568);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(61, 20);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Sign Up";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::LightGray;
			this->linkLabel1->Location = System::Drawing::Point(202, 406);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(118, 19);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Forgot Password\?";
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::White;
			this->button_login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_login->ForeColor = System::Drawing::Color::Black;
			this->button_login->Location = System::Drawing::Point(45, 461);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(255, 37);
			this->button_login->TabIndex = 1;
			this->button_login->Text = L"Login";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &LoginForm::button_login_Click_1);
			// 
			// label_pass
			// 
			this->label_pass->AutoSize = true;
			this->label_pass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pass->ForeColor = System::Drawing::Color::White;
			this->label_pass->Location = System::Drawing::Point(41, 341);
			this->label_pass->Name = L"label_pass";
			this->label_pass->Size = System::Drawing::Size(93, 28);
			this->label_pass->TabIndex = 6;
			this->label_pass->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::Window;
			this->tbPassword->Location = System::Drawing::Point(45, 368);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(255, 27);
			this->tbPassword->TabIndex = 5;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_user->ForeColor = System::Drawing::Color::White;
			this->label_user->Location = System::Drawing::Point(41, 273);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(68, 28);
			this->label_user->TabIndex = 4;
			this->label_user->Text = L"E-Mail";
			this->label_user->Click += gcnew System::EventHandler(this, &LoginForm::label_user_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(116, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->ForeColor = System::Drawing::SystemColors::Window;
			this->tbEmail->Location = System::Drawing::Point(45, 300);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(255, 27);
			this->tbEmail->TabIndex = 0;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::Username_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(107, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(125, 122);
			this->panel2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(1120, 739);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Beta v1.0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(12, 739);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 19);
			this->label4->TabIndex = 12;
			this->label4->Text = L"HNT Co. Ltd.";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1200, 800);
			this->MinimumSize = System::Drawing::Size(1200, 800);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	public: bool switchRegister = false;

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchRegister = true;
		this->Close();
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label_user_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void button_login_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
			return;

		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GSDData;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->password = reader->GetString(3);

				this->Close();
			}

			else {
				MessageBox::Show("Email or password is incorrect", "Email of Password Error", MessageBoxButtons::OK);
			}
		}

		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
}
};
}
