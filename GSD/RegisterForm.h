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
	using namespace System::IO;
	using namespace std;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ text_email;

	private: System::Windows::Forms::TextBox^ text_name;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_email;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ text_confirmPassword;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ text_password;



	private: System::Windows::Forms::Button^ button_create;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Cancel;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_create = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->text_confirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->text_password = (gcnew System::Windows::Forms::TextBox());
			this->label_email = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->text_email = (gcnew System::Windows::Forms::TextBox());
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Cancel);
			this->panel1->Controls->Add(this->button_create);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->text_confirmPassword);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->text_password);
			this->panel1->Controls->Add(this->label_email);
			this->panel1->Controls->Add(this->label_name);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->text_email);
			this->panel1->Controls->Add(this->text_name);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(422, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 601);
			this->panel1->TabIndex = 1;
			// 
			// button_create
			// 
			this->button_create->BackColor = System::Drawing::Color::White;
			this->button_create->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_create->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_create->ForeColor = System::Drawing::Color::Black;
			this->button_create->Location = System::Drawing::Point(45, 506);
			this->button_create->Name = L"button_create";
			this->button_create->Size = System::Drawing::Size(255, 37);
			this->button_create->TabIndex = 23;
			this->button_create->Text = L"Create Account";
			this->button_create->UseVisualStyleBackColor = false;
			this->button_create->Click += gcnew System::EventHandler(this, &RegisterForm::button_create_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(41, 398);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 21);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Confirm Password";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(45, 444);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(255, 2);
			this->panel7->TabIndex = 21;
			// 
			// text_confirmPassword
			// 
			this->text_confirmPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_confirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->text_confirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->text_confirmPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->text_confirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_confirmPassword->ForeColor = System::Drawing::SystemColors::Window;
			this->text_confirmPassword->Location = System::Drawing::Point(45, 422);
			this->text_confirmPassword->Name = L"text_confirmPassword";
			this->text_confirmPassword->Size = System::Drawing::Size(255, 22);
			this->text_confirmPassword->TabIndex = 20;
			this->text_confirmPassword->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(41, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 21);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Password";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(45, 377);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(255, 2);
			this->panel5->TabIndex = 17;
			// 
			// text_password
			// 
			this->text_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->text_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->text_password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->text_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_password->ForeColor = System::Drawing::SystemColors::Window;
			this->text_password->Location = System::Drawing::Point(45, 355);
			this->text_password->Name = L"text_password";
			this->text_password->Size = System::Drawing::Size(255, 22);
			this->text_password->TabIndex = 15;
			this->text_password->UseSystemPasswordChar = true;
			this->text_password->TextChanged += gcnew System::EventHandler(this, &RegisterForm::text_password_TextChanged);
			// 
			// label_email
			// 
			this->label_email->AutoSize = true;
			this->label_email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_email->ForeColor = System::Drawing::Color::White;
			this->label_email->Location = System::Drawing::Point(41, 262);
			this->label_email->Name = L"label_email";
			this->label_email->Size = System::Drawing::Size(48, 21);
			this->label_email->TabIndex = 13;
			this->label_email->Text = L"Email";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_name->ForeColor = System::Drawing::Color::White;
			this->label_name->Location = System::Drawing::Point(41, 194);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(81, 21);
			this->label_name->TabIndex = 12;
			this->label_name->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(54, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 37);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Create an Account";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(45, 308);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(255, 2);
			this->panel4->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(45, 240);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 2);
			this->panel3->TabIndex = 9;
			// 
			// text_email
			// 
			this->text_email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->text_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->text_email->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->text_email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_email->ForeColor = System::Drawing::SystemColors::Window;
			this->text_email->Location = System::Drawing::Point(45, 286);
			this->text_email->Name = L"text_email";
			this->text_email->Size = System::Drawing::Size(255, 22);
			this->text_email->TabIndex = 5;
			// 
			// text_name
			// 
			this->text_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->text_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->text_name->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->text_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_name->ForeColor = System::Drawing::SystemColors::Window;
			this->text_name->Location = System::Drawing::Point(45, 218);
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(255, 22);
			this->text_name->TabIndex = 0;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(1120, 739);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Beta v1.0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 739);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"HNT Co. Ltd.";
			// 
			// Cancel
			// 
			this->Cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cancel.BackgroundImage")));
			this->Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cancel->FlatAppearance->BorderSize = 0;
			this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel->Location = System::Drawing::Point(25, 31);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(29, 27);
			this->Cancel->TabIndex = 24;
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &RegisterForm::Cancel_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1200, 800);
			this->MinimumSize = System::Drawing::Size(1200, 800);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchLogin = false;
	public: User^ user = nullptr;

	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchLogin = true;
		this->Close();
	}

	private: System::Void button_create_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = text_name->Text;
		String^ email = text_email->Text;
		String^ password = text_password->Text;
		String^ confirmPassword = text_confirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter all fields", "One or more empty fields", MessageBoxButtons::OK);

			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);

			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GSDData;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " + "(name, email, password) VALUES " + "(@name, @email, @password); ";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->password = password;
			StreamWriter^ output_file = File::CreateText("user" + user->id + ".txt");
			this->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
		}
	}

private: System::Void text_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}