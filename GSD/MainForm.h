#pragma once
#include "User.h"
#include "LoginForm.h"

namespace GSD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUser->Text = "Welcome, " + user->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ buLogout;
	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ bu_AddList;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ bu_Home;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ bu_Settings;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ bu_Cash;
	private: System::Windows::Forms::Label^ lb_cash;
	private: System::Windows::Forms::Label^ lb_settings;
	private: System::Windows::Forms::Label^ lb_addlist;
	private: System::Windows::Forms::Label^ lb_home;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->bu_Settings = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->bu_Cash = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bu_AddList = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->bu_Home = (gcnew System::Windows::Forms::Button());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->buLogout = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lb_cash = (gcnew System::Windows::Forms::Label());
			this->lb_settings = (gcnew System::Windows::Forms::Label());
			this->lb_addlist = (gcnew System::Windows::Forms::Label());
			this->lb_home = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->bu_Settings);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->bu_Cash);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->bu_AddList);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->bu_Home);
			this->panel1->Controls->Add(this->lbUser);
			this->panel1->Controls->Add(this->buLogout);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 769);
			this->panel1->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 425);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 2);
			this->panel7->TabIndex = 34;
			// 
			// bu_Settings
			// 
			this->bu_Settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bu_Settings->FlatAppearance->BorderSize = 0;
			this->bu_Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_Settings->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu_Settings->Location = System::Drawing::Point(0, 391);
			this->bu_Settings->Name = L"bu_Settings";
			this->bu_Settings->Size = System::Drawing::Size(200, 36);
			this->bu_Settings->TabIndex = 33;
			this->bu_Settings->Text = L"Settings";
			this->bu_Settings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bu_Settings->UseVisualStyleBackColor = true;
			this->bu_Settings->Click += gcnew System::EventHandler(this, &MainForm::bu_Settings_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(0, 388);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 2);
			this->panel6->TabIndex = 32;
			// 
			// bu_Cash
			// 
			this->bu_Cash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bu_Cash->FlatAppearance->BorderSize = 0;
			this->bu_Cash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_Cash->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu_Cash->Location = System::Drawing::Point(0, 354);
			this->bu_Cash->Name = L"bu_Cash";
			this->bu_Cash->Size = System::Drawing::Size(200, 36);
			this->bu_Cash->TabIndex = 31;
			this->bu_Cash->Text = L"Cash In/Out";
			this->bu_Cash->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bu_Cash->UseVisualStyleBackColor = true;
			this->bu_Cash->Click += gcnew System::EventHandler(this, &MainForm::bu_Cash_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(0, 349);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 2);
			this->panel5->TabIndex = 30;
			// 
			// bu_AddList
			// 
			this->bu_AddList->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bu_AddList->FlatAppearance->BorderSize = 0;
			this->bu_AddList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_AddList->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu_AddList->Location = System::Drawing::Point(0, 315);
			this->bu_AddList->Name = L"bu_AddList";
			this->bu_AddList->Size = System::Drawing::Size(200, 36);
			this->bu_AddList->TabIndex = 29;
			this->bu_AddList->Text = L"Add List";
			this->bu_AddList->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bu_AddList->UseVisualStyleBackColor = true;
			this->bu_AddList->Click += gcnew System::EventHandler(this, &MainForm::bu_AddList_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 311);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 2);
			this->panel4->TabIndex = 10;
			// 
			// bu_Home
			// 
			this->bu_Home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bu_Home->FlatAppearance->BorderSize = 0;
			this->bu_Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_Home->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu_Home->Location = System::Drawing::Point(0, 277);
			this->bu_Home->Name = L"bu_Home";
			this->bu_Home->Size = System::Drawing::Size(200, 36);
			this->bu_Home->TabIndex = 28;
			this->bu_Home->Text = L"Home";
			this->bu_Home->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bu_Home->UseVisualStyleBackColor = true;
			this->bu_Home->Click += gcnew System::EventHandler(this, &MainForm::bu_Home_Click);
			// 
			// lbUser
			// 
			this->lbUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUser->ForeColor = System::Drawing::Color::White;
			this->lbUser->Location = System::Drawing::Point(3, 167);
			this->lbUser->Name = L"lbUser";
			this->lbUser->Size = System::Drawing::Size(196, 51);
			this->lbUser->TabIndex = 26;
			this->lbUser->Text = L"Welcome User";
			this->lbUser->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buLogout
			// 
			this->buLogout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buLogout.BackgroundImage")));
			this->buLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buLogout->FlatAppearance->BorderSize = 0;
			this->buLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buLogout->Location = System::Drawing::Point(83, 685);
			this->buLogout->Name = L"buLogout";
			this->buLogout->Size = System::Drawing::Size(36, 36);
			this->buLogout->TabIndex = 25;
			this->buLogout->UseVisualStyleBackColor = true;
			this->buLogout->Click += gcnew System::EventHandler(this, &MainForm::buLogout_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(145, 739);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Beta v1.0";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(3, 739);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"HNT Co. Ltd.";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 165);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->lb_cash);
			this->panel3->Controls->Add(this->lb_settings);
			this->panel3->Controls->Add(this->lb_addlist);
			this->panel3->Controls->Add(this->lb_home);
			this->panel3->Location = System::Drawing::Point(199, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(994, 766);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(48, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(848, 330);
			this->label2->TabIndex = 40;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(16, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Show List";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// lb_cash
			// 
			this->lb_cash->AutoSize = true;
			this->lb_cash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_cash->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_cash->ForeColor = System::Drawing::Color::White;
			this->lb_cash->Location = System::Drawing::Point(7, 9);
			this->lb_cash->Name = L"lb_cash";
			this->lb_cash->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lb_cash->Size = System::Drawing::Size(206, 47);
			this->lb_cash->TabIndex = 38;
			this->lb_cash->Text = L"Cash In/Out";
			this->lb_cash->Visible = false;
			// 
			// lb_settings
			// 
			this->lb_settings->AutoSize = true;
			this->lb_settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_settings->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_settings->ForeColor = System::Drawing::Color::White;
			this->lb_settings->Location = System::Drawing::Point(8, 9);
			this->lb_settings->Name = L"lb_settings";
			this->lb_settings->Size = System::Drawing::Size(145, 47);
			this->lb_settings->TabIndex = 37;
			this->lb_settings->Text = L"Settings";
			this->lb_settings->Visible = false;
			// 
			// lb_addlist
			// 
			this->lb_addlist->AutoSize = true;
			this->lb_addlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_addlist->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_addlist->ForeColor = System::Drawing::Color::White;
			this->lb_addlist->Location = System::Drawing::Point(7, 9);
			this->lb_addlist->Name = L"lb_addlist";
			this->lb_addlist->Size = System::Drawing::Size(146, 47);
			this->lb_addlist->TabIndex = 36;
			this->lb_addlist->Text = L"Add List";
			this->lb_addlist->Visible = false;
			// 
			// lb_home
			// 
			this->lb_home->AutoSize = true;
			this->lb_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_home->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_home->ForeColor = System::Drawing::Color::White;
			this->lb_home->Location = System::Drawing::Point(7, 9);
			this->lb_home->Name = L"lb_home";
			this->lb_home->Size = System::Drawing::Size(114, 47);
			this->lb_home->TabIndex = 35;
			this->lb_home->Text = L"Home";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Home";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: User^ user = nullptr;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to logout?", "Logut", MessageBoxButtons::OKCancel, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::OK) {
			Application::Exit();
		}
	}

	private: System::Void bu_Home_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Visible
		this->lb_home->Visible = true;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;

	}
	private: System::Void bu_AddList_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		//Add List ~ Visible
		this->lb_addlist->Visible = true;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;
	}
	private: System::Void bu_Cash_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		//Cash In/Out ~ Visible
		this->lb_cash->Visible = true;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;
	}
	private: System::Void bu_Settings_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Visible
		this->lb_settings->Visible = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		StreamReader^ input_file = File::OpenText("user" + user->id + ".txt");
		String^ line;

		while ((line = input_file->ReadLine()) != nullptr) {
			label2->Text += line + "\n";
		}
	}
	};
}
