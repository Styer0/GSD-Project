#pragma once

namespace GSD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_user;
	private: System::Windows::Forms::Label^ label_pass;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->label_pass = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label_pass);
			this->panel1->Controls->Add(this->label_user);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(422, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 601);
			this->panel1->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(45, 335);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(255, 2);
			this->panel4->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(45, 267);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 2);
			this->panel3->TabIndex = 9;
			// 
			// password
			// 
			this->password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::SystemColors::Window;
			this->password->Location = System::Drawing::Point(45, 313);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(255, 22);
			this->password->TabIndex = 5;
			this->password->UseSystemPasswordChar = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(107, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(125, 122);
			this->panel2->TabIndex = 1;
			// 
			// username
			// 
			this->username->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::SystemColors::Window;
			this->username->Location = System::Drawing::Point(45, 245);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(255, 22);
			this->username->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(100, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 47);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Register";
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_user->ForeColor = System::Drawing::Color::White;
			this->label_user->Location = System::Drawing::Point(41, 221);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(81, 21);
			this->label_user->TabIndex = 12;
			this->label_user->Text = L"Username";
			// 
			// label_pass
			// 
			this->label_pass->AutoSize = true;
			this->label_pass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pass->ForeColor = System::Drawing::Color::White;
			this->label_pass->Location = System::Drawing::Point(41, 289);
			this->label_pass->Name = L"label_pass";
			this->label_pass->Size = System::Drawing::Size(76, 21);
			this->label_pass->TabIndex = 13;
			this->label_pass->Text = L"Password";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1200, 800);
			this->MinimumSize = System::Drawing::Size(1200, 800);
			this->Name = L"RegisterForm";
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
