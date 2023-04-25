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

			StreamReader^ entry = File::OpenText("user" + user->id + ".txt");
			String^ line = "";
			int inc = 1;
			while ((line = entry->ReadLine()) != nullptr) {
				lb_entry->Text += inc + ". " + line + "\n";
				++inc;
			}
			entry->Close();
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
	private: System::Windows::Forms::Panel^ p_activity;
	private: System::Windows::Forms::Label^ lb_activity;
	private: System::Windows::Forms::Label^ lb_balance;
	private: System::Windows::Forms::Panel^ bottom_panel;
	private: System::Windows::Forms::Button^ finish_button;
	private: System::Windows::Forms::TextBox^ cvv_text;
	private: System::Windows::Forms::Label^ cvv_label;
	private: System::Windows::Forms::Label^ slash_text;
	private: System::Windows::Forms::TextBox^ expDate2_text;
	private: System::Windows::Forms::TextBox^ expDate1_text;
	private: System::Windows::Forms::Label^ expDate_label;
	private: System::Windows::Forms::TextBox^ cardName_text;
	private: System::Windows::Forms::Label^ cardName_label;
	private: System::Windows::Forms::TextBox^ cardNum_text;
	private: System::Windows::Forms::Label^ cardNum_label;
	private: System::Windows::Forms::Label^ payment_label;
	private: System::Windows::Forms::TextBox^ amount_text;
	private: System::Windows::Forms::Label^ cin_amount_label;
	private: System::Windows::Forms::Button^ cout_button;
	private: System::Windows::Forms::Button^ cin_button;
	private: System::Windows::Forms::Panel^ top_panel;
	private: System::Windows::Forms::Panel^ pan_settings;
	private: System::Windows::Forms::Label^ lb_settings;
	private: System::Windows::Forms::Panel^ pan_addlist;
	private: System::Windows::Forms::Label^ lb_addlist;
	private: System::Windows::Forms::Panel^ pan_home;

	private: System::Windows::Forms::Label^ lb_home;


	private: System::Windows::Forms::Label^ lb_entry;
	private: System::Windows::Forms::Panel^ p_cout;
	private: System::Windows::Forms::Label^ cout_amount_label;
	private: System::Windows::Forms::TextBox^ account_text;
	private: System::Windows::Forms::Label^ account_label;


	private: System::Windows::Forms::TextBox^ cout_text;
	private: System::Windows::Forms::Button^ button_finish;
	private: System::Windows::Forms::Button^ bu_submit;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ pan_home_sub;
	private: System::Windows::Forms::Panel^ pan_image;
	private: System::Windows::Forms::Button^ tb_submit2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ lb_sube;
private: System::Windows::Forms::TextBox^ tb_taskno;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ tx_submit_add;
private: System::Windows::Forms::TextBox^ tb_entry_insert;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ tb_deadline;
private: System::Windows::Forms::Label^ label11;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label12;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pan_home_sub = (gcnew System::Windows::Forms::Panel());
			this->lb_sube = (gcnew System::Windows::Forms::Label());
			this->tb_taskno = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->pan_image = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_submit2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pan_home = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bu_submit = (gcnew System::Windows::Forms::Button());
			this->lb_entry = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lb_home = (gcnew System::Windows::Forms::Label());
			this->lb_cash = (gcnew System::Windows::Forms::Label());
			this->p_activity = (gcnew System::Windows::Forms::Panel());
			this->lb_activity = (gcnew System::Windows::Forms::Label());
			this->pan_settings = (gcnew System::Windows::Forms::Panel());
			this->pan_addlist = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_deadline = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tx_submit_add = (gcnew System::Windows::Forms::Button());
			this->tb_entry_insert = (gcnew System::Windows::Forms::TextBox());
			this->lb_addlist = (gcnew System::Windows::Forms::Label());
			this->lb_settings = (gcnew System::Windows::Forms::Label());
			this->lb_balance = (gcnew System::Windows::Forms::Label());
			this->bottom_panel = (gcnew System::Windows::Forms::Panel());
			this->finish_button = (gcnew System::Windows::Forms::Button());
			this->cvv_text = (gcnew System::Windows::Forms::TextBox());
			this->cvv_label = (gcnew System::Windows::Forms::Label());
			this->slash_text = (gcnew System::Windows::Forms::Label());
			this->expDate2_text = (gcnew System::Windows::Forms::TextBox());
			this->expDate1_text = (gcnew System::Windows::Forms::TextBox());
			this->expDate_label = (gcnew System::Windows::Forms::Label());
			this->cardName_text = (gcnew System::Windows::Forms::TextBox());
			this->cardName_label = (gcnew System::Windows::Forms::Label());
			this->cardNum_text = (gcnew System::Windows::Forms::TextBox());
			this->cardNum_label = (gcnew System::Windows::Forms::Label());
			this->payment_label = (gcnew System::Windows::Forms::Label());
			this->amount_text = (gcnew System::Windows::Forms::TextBox());
			this->cin_amount_label = (gcnew System::Windows::Forms::Label());
			this->cout_button = (gcnew System::Windows::Forms::Button());
			this->cin_button = (gcnew System::Windows::Forms::Button());
			this->top_panel = (gcnew System::Windows::Forms::Panel());
			this->p_cout = (gcnew System::Windows::Forms::Panel());
			this->button_finish = (gcnew System::Windows::Forms::Button());
			this->account_text = (gcnew System::Windows::Forms::TextBox());
			this->account_label = (gcnew System::Windows::Forms::Label());
			this->cout_text = (gcnew System::Windows::Forms::TextBox());
			this->cout_amount_label = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->pan_home_sub->SuspendLayout();
			this->pan_image->SuspendLayout();
			this->pan_home->SuspendLayout();
			this->p_activity->SuspendLayout();
			this->pan_settings->SuspendLayout();
			this->pan_addlist->SuspendLayout();
			this->bottom_panel->SuspendLayout();
			this->top_panel->SuspendLayout();
			this->p_cout->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->buLogout->Location = System::Drawing::Point(83, 683);
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
			this->label1->Location = System::Drawing::Point(145, 737);
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
			this->label4->Location = System::Drawing::Point(3, 737);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"HNT Co. Ltd.";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 165);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(197, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(985, 761);
			this->panel3->TabIndex = 46;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(815, 666);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 53);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Submit to Review";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(15, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(942, 456);
			this->label3->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(11, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 41);
			this->label5->TabIndex = 38;
			this->label5->Text = L"List:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(10, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 47);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Home";
			// 
			// pan_home_sub
			// 
			this->pan_home_sub->Controls->Add(this->lb_sube);
			this->pan_home_sub->Controls->Add(this->tb_taskno);
			this->pan_home_sub->Controls->Add(this->button3);
			this->pan_home_sub->Controls->Add(this->Cancel);
			this->pan_home_sub->Controls->Add(this->pan_image);
			this->pan_home_sub->Controls->Add(this->tb_submit2);
			this->pan_home_sub->Controls->Add(this->label9);
			this->pan_home_sub->Location = System::Drawing::Point(-1, 0);
			this->pan_home_sub->Name = L"pan_home_sub";
			this->pan_home_sub->Size = System::Drawing::Size(985, 761);
			this->pan_home_sub->TabIndex = 46;
			this->pan_home_sub->Visible = false;
			// 
			// lb_sube
			// 
			this->lb_sube->AutoSize = true;
			this->lb_sube->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lb_sube->Location = System::Drawing::Point(17, 210);
			this->lb_sube->Name = L"lb_sube";
			this->lb_sube->Size = System::Drawing::Size(167, 17);
			this->lb_sube->TabIndex = 45;
			this->lb_sube->Text = L"Enter Specify Task Number:";
			// 
			// tb_taskno
			// 
			this->tb_taskno->Location = System::Drawing::Point(43, 236);
			this->tb_taskno->Name = L"tb_taskno";
			this->tb_taskno->Size = System::Drawing::Size(104, 25);
			this->tb_taskno->TabIndex = 44;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(453, 672);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 43;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Cancel
			// 
			this->Cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cancel.BackgroundImage")));
			this->Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cancel->FlatAppearance->BorderSize = 0;
			this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel->Location = System::Drawing::Point(21, 134);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(35, 35);
			this->Cancel->TabIndex = 42;
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &MainForm::Cancel_Click);
			// 
			// pan_image
			// 
			this->pan_image->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pan_image->Controls->Add(this->label7);
			this->pan_image->ForeColor = System::Drawing::Color::Transparent;
			this->pan_image->Location = System::Drawing::Point(226, 134);
			this->pan_image->Name = L"pan_image";
			this->pan_image->Size = System::Drawing::Size(490, 490);
			this->pan_image->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(189, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 17);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Upload an Image";
			// 
			// tb_submit2
			// 
			this->tb_submit2->BackColor = System::Drawing::Color::White;
			this->tb_submit2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tb_submit2->Location = System::Drawing::Point(815, 666);
			this->tb_submit2->Name = L"tb_submit2";
			this->tb_submit2->Size = System::Drawing::Size(142, 53);
			this->tb_submit2->TabIndex = 40;
			this->tb_submit2->Text = L"Submit";
			this->tb_submit2->UseVisualStyleBackColor = false;
			this->tb_submit2->Click += gcnew System::EventHandler(this, &MainForm::tb_submit2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(10, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(268, 47);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Home > Submit";
			// 
			// pan_home
			// 
			this->pan_home->Controls->Add(this->button2);
			this->pan_home->Controls->Add(this->bu_submit);
			this->pan_home->Controls->Add(this->lb_entry);
			this->pan_home->Controls->Add(this->label2);
			this->pan_home->Controls->Add(this->lb_home);
			this->pan_home->Location = System::Drawing::Point(-1, 0);
			this->pan_home->Name = L"pan_home";
			this->pan_home->Size = System::Drawing::Size(985, 761);
			this->pan_home->TabIndex = 45;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(13, 666);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 53);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Update List";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// bu_submit
			// 
			this->bu_submit->BackColor = System::Drawing::Color::White;
			this->bu_submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_submit->Location = System::Drawing::Point(815, 666);
			this->bu_submit->Name = L"bu_submit";
			this->bu_submit->Size = System::Drawing::Size(142, 53);
			this->bu_submit->TabIndex = 40;
			this->bu_submit->Text = L"Submit to Review";
			this->bu_submit->UseVisualStyleBackColor = false;
			this->bu_submit->Click += gcnew System::EventHandler(this, &MainForm::bu_submit_Click);
			// 
			// lb_entry
			// 
			this->lb_entry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->lb_entry->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lb_entry->Location = System::Drawing::Point(15, 207);
			this->lb_entry->Name = L"lb_entry";
			this->lb_entry->Size = System::Drawing::Size(942, 456);
			this->lb_entry->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 41);
			this->label2->TabIndex = 38;
			this->label2->Text = L"List:";
			// 
			// lb_home
			// 
			this->lb_home->AutoSize = true;
			this->lb_home->BackColor = System::Drawing::Color::Transparent;
			this->lb_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_home->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_home->ForeColor = System::Drawing::Color::White;
			this->lb_home->Location = System::Drawing::Point(10, 10);
			this->lb_home->Name = L"lb_home";
			this->lb_home->Size = System::Drawing::Size(114, 47);
			this->lb_home->TabIndex = 37;
			this->lb_home->Text = L"Home";
			// 
			// lb_cash
			// 
			this->lb_cash->AutoSize = true;
			this->lb_cash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_cash->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_cash->ForeColor = System::Drawing::Color::White;
			this->lb_cash->Location = System::Drawing::Point(3, 10);
			this->lb_cash->Name = L"lb_cash";
			this->lb_cash->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lb_cash->Size = System::Drawing::Size(206, 47);
			this->lb_cash->TabIndex = 38;
			this->lb_cash->Text = L"Cash In/Out";
			this->lb_cash->Visible = false;
			// 
			// p_activity
			// 
			this->p_activity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->p_activity->BackColor = System::Drawing::Color::Transparent;
			this->p_activity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p_activity->Controls->Add(this->lb_activity);
			this->p_activity->ForeColor = System::Drawing::SystemColors::ControlText;
			this->p_activity->Location = System::Drawing::Point(661, 0);
			this->p_activity->Name = L"p_activity";
			this->p_activity->Size = System::Drawing::Size(328, 767);
			this->p_activity->TabIndex = 39;
			this->p_activity->Visible = false;
			// 
			// lb_activity
			// 
			this->lb_activity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_activity->AutoSize = true;
			this->lb_activity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_activity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_activity->ForeColor = System::Drawing::Color::White;
			this->lb_activity->Location = System::Drawing::Point(65, 9);
			this->lb_activity->Name = L"lb_activity";
			this->lb_activity->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lb_activity->Size = System::Drawing::Size(190, 37);
			this->lb_activity->TabIndex = 40;
			this->lb_activity->Text = L"Recent Activity";
			this->lb_activity->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lb_activity->Visible = false;
			// 
			// pan_settings
			// 
			this->pan_settings->Controls->Add(this->pan_home_sub);
			this->pan_settings->Controls->Add(this->pan_addlist);
			this->pan_settings->Controls->Add(this->lb_settings);
			this->pan_settings->Location = System::Drawing::Point(0, 0);
			this->pan_settings->Name = L"pan_settings";
			this->pan_settings->Size = System::Drawing::Size(985, 761);
			this->pan_settings->TabIndex = 43;
			// 
			// pan_addlist
			// 
			this->pan_addlist->Controls->Add(this->pan_home);
			this->pan_addlist->Controls->Add(this->label11);
			this->pan_addlist->Controls->Add(this->label10);
			this->pan_addlist->Controls->Add(this->tb_deadline);
			this->pan_addlist->Controls->Add(this->label8);
			this->pan_addlist->Controls->Add(this->tx_submit_add);
			this->pan_addlist->Controls->Add(this->tb_entry_insert);
			this->pan_addlist->Controls->Add(this->lb_addlist);
			this->pan_addlist->Location = System::Drawing::Point(1, 0);
			this->pan_addlist->Name = L"pan_addlist";
			this->pan_addlist->Size = System::Drawing::Size(985, 761);
			this->pan_addlist->TabIndex = 44;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(98, 671);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(123, 17);
			this->label11->TabIndex = 45;
			this->label11->Text = L"*date MM/DD/YYYY";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(26, 669);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 21);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Deadline:";
			// 
			// tb_deadline
			// 
			this->tb_deadline->Location = System::Drawing::Point(29, 693);
			this->tb_deadline->Name = L"tb_deadline";
			this->tb_deadline->Size = System::Drawing::Size(100, 25);
			this->tb_deadline->TabIndex = 43;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(23, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 37);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Text Entry:";
			// 
			// tx_submit_add
			// 
			this->tx_submit_add->BackColor = System::Drawing::Color::White;
			this->tx_submit_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tx_submit_add->Location = System::Drawing::Point(803, 675);
			this->tx_submit_add->Name = L"tx_submit_add";
			this->tx_submit_add->Size = System::Drawing::Size(142, 53);
			this->tx_submit_add->TabIndex = 41;
			this->tx_submit_add->Text = L"Add to list";
			this->tx_submit_add->UseVisualStyleBackColor = false;
			this->tx_submit_add->Click += gcnew System::EventHandler(this, &MainForm::tx_submit_add_Click);
			// 
			// tb_entry_insert
			// 
			this->tb_entry_insert->Location = System::Drawing::Point(27, 267);
			this->tb_entry_insert->Multiline = true;
			this->tb_entry_insert->Name = L"tb_entry_insert";
			this->tb_entry_insert->Size = System::Drawing::Size(918, 367);
			this->tb_entry_insert->TabIndex = 38;
			// 
			// lb_addlist
			// 
			this->lb_addlist->AutoSize = true;
			this->lb_addlist->BackColor = System::Drawing::Color::Transparent;
			this->lb_addlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_addlist->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_addlist->ForeColor = System::Drawing::Color::White;
			this->lb_addlist->Location = System::Drawing::Point(10, 10);
			this->lb_addlist->Name = L"lb_addlist";
			this->lb_addlist->Size = System::Drawing::Size(146, 47);
			this->lb_addlist->TabIndex = 37;
			this->lb_addlist->Text = L"Add List";
			this->lb_addlist->Visible = false;
			// 
			// lb_settings
			// 
			this->lb_settings->AutoSize = true;
			this->lb_settings->BackColor = System::Drawing::Color::Transparent;
			this->lb_settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_settings->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_settings->ForeColor = System::Drawing::Color::White;
			this->lb_settings->Location = System::Drawing::Point(10, 10);
			this->lb_settings->Name = L"lb_settings";
			this->lb_settings->Size = System::Drawing::Size(145, 47);
			this->lb_settings->TabIndex = 37;
			this->lb_settings->Text = L"Settings";
			this->lb_settings->Visible = false;
			// 
			// lb_balance
			// 
			this->lb_balance->AutoSize = true;
			this->lb_balance->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_balance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_balance->ForeColor = System::Drawing::Color::White;
			this->lb_balance->Location = System::Drawing::Point(10, 119);
			this->lb_balance->Name = L"lb_balance";
			this->lb_balance->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lb_balance->Size = System::Drawing::Size(115, 37);
			this->lb_balance->TabIndex = 41;
			this->lb_balance->Text = L"Balance:";
			this->lb_balance->Visible = false;
			// 
			// bottom_panel
			// 
			this->bottom_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bottom_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottom_panel->Controls->Add(this->finish_button);
			this->bottom_panel->Controls->Add(this->cvv_text);
			this->bottom_panel->Controls->Add(this->cvv_label);
			this->bottom_panel->Controls->Add(this->slash_text);
			this->bottom_panel->Controls->Add(this->expDate2_text);
			this->bottom_panel->Controls->Add(this->expDate1_text);
			this->bottom_panel->Controls->Add(this->expDate_label);
			this->bottom_panel->Controls->Add(this->cardName_text);
			this->bottom_panel->Controls->Add(this->cardName_label);
			this->bottom_panel->Controls->Add(this->cardNum_text);
			this->bottom_panel->Controls->Add(this->cardNum_label);
			this->bottom_panel->Controls->Add(this->payment_label);
			this->bottom_panel->Controls->Add(this->amount_text);
			this->bottom_panel->Controls->Add(this->cin_amount_label);
			this->bottom_panel->Location = System::Drawing::Point(0, 230);
			this->bottom_panel->Name = L"bottom_panel";
			this->bottom_panel->Size = System::Drawing::Size(661, 537);
			this->bottom_panel->TabIndex = 42;
			this->bottom_panel->Visible = false;
			// 
			// finish_button
			// 
			this->finish_button->BackColor = System::Drawing::Color::Transparent;
			this->finish_button->ForeColor = System::Drawing::Color::White;
			this->finish_button->Location = System::Drawing::Point(390, 367);
			this->finish_button->Name = L"finish_button";
			this->finish_button->Size = System::Drawing::Size(129, 26);
			this->finish_button->TabIndex = 15;
			this->finish_button->Text = L"Finish";
			this->finish_button->UseVisualStyleBackColor = false;
			// 
			// cvv_text
			// 
			this->cvv_text->BackColor = System::Drawing::Color::White;
			this->cvv_text->Location = System::Drawing::Point(440, 198);
			this->cvv_text->Name = L"cvv_text";
			this->cvv_text->Size = System::Drawing::Size(56, 25);
			this->cvv_text->TabIndex = 14;
			// 
			// cvv_label
			// 
			this->cvv_label->AutoSize = true;
			this->cvv_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cvv_label->ForeColor = System::Drawing::Color::White;
			this->cvv_label->Location = System::Drawing::Point(390, 204);
			this->cvv_label->Name = L"cvv_label";
			this->cvv_label->Size = System::Drawing::Size(36, 19);
			this->cvv_label->TabIndex = 13;
			this->cvv_label->Text = L"CVV";
			// 
			// slash_text
			// 
			this->slash_text->AutoSize = true;
			this->slash_text->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->slash_text->ForeColor = System::Drawing::Color::White;
			this->slash_text->Location = System::Drawing::Point(194, 296);
			this->slash_text->Name = L"slash_text";
			this->slash_text->Size = System::Drawing::Size(19, 25);
			this->slash_text->TabIndex = 12;
			this->slash_text->Text = L"/";
			// 
			// expDate2_text
			// 
			this->expDate2_text->BackColor = System::Drawing::Color::White;
			this->expDate2_text->Location = System::Drawing::Point(218, 299);
			this->expDate2_text->Name = L"expDate2_text";
			this->expDate2_text->Size = System::Drawing::Size(56, 25);
			this->expDate2_text->TabIndex = 11;
			// 
			// expDate1_text
			// 
			this->expDate1_text->BackColor = System::Drawing::Color::White;
			this->expDate1_text->Location = System::Drawing::Point(133, 299);
			this->expDate1_text->Name = L"expDate1_text";
			this->expDate1_text->Size = System::Drawing::Size(56, 25);
			this->expDate1_text->TabIndex = 10;
			// 
			// expDate_label
			// 
			this->expDate_label->AutoSize = true;
			this->expDate_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expDate_label->ForeColor = System::Drawing::Color::White;
			this->expDate_label->Location = System::Drawing::Point(13, 299);
			this->expDate_label->Name = L"expDate_label";
			this->expDate_label->Size = System::Drawing::Size(66, 19);
			this->expDate_label->TabIndex = 9;
			this->expDate_label->Text = L"Exp. Date";
			// 
			// cardName_text
			// 
			this->cardName_text->BackColor = System::Drawing::Color::White;
			this->cardName_text->Location = System::Drawing::Point(133, 250);
			this->cardName_text->Name = L"cardName_text";
			this->cardName_text->Size = System::Drawing::Size(209, 25);
			this->cardName_text->TabIndex = 8;
			// 
			// cardName_label
			// 
			this->cardName_label->AutoSize = true;
			this->cardName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardName_label->ForeColor = System::Drawing::Color::White;
			this->cardName_label->Location = System::Drawing::Point(13, 250);
			this->cardName_label->Name = L"cardName_label";
			this->cardName_label->Size = System::Drawing::Size(78, 19);
			this->cardName_label->TabIndex = 7;
			this->cardName_label->Text = L"Card Name";
			// 
			// cardNum_text
			// 
			this->cardNum_text->BackColor = System::Drawing::Color::White;
			this->cardNum_text->Location = System::Drawing::Point(133, 198);
			this->cardNum_text->Name = L"cardNum_text";
			this->cardNum_text->Size = System::Drawing::Size(209, 25);
			this->cardNum_text->TabIndex = 6;
			// 
			// cardNum_label
			// 
			this->cardNum_label->AutoSize = true;
			this->cardNum_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardNum_label->ForeColor = System::Drawing::Color::White;
			this->cardNum_label->Location = System::Drawing::Point(13, 204);
			this->cardNum_label->Name = L"cardNum_label";
			this->cardNum_label->Size = System::Drawing::Size(92, 19);
			this->cardNum_label->TabIndex = 5;
			this->cardNum_label->Text = L"Card Number";
			// 
			// payment_label
			// 
			this->payment_label->AutoSize = true;
			this->payment_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payment_label->ForeColor = System::Drawing::Color::White;
			this->payment_label->Location = System::Drawing::Point(13, 145);
			this->payment_label->Name = L"payment_label";
			this->payment_label->Size = System::Drawing::Size(156, 21);
			this->payment_label->TabIndex = 4;
			this->payment_label->Text = L"Payment Information";
			// 
			// amount_text
			// 
			this->amount_text->BackColor = System::Drawing::Color::White;
			this->amount_text->Location = System::Drawing::Point(172, 59);
			this->amount_text->Name = L"amount_text";
			this->amount_text->Size = System::Drawing::Size(122, 25);
			this->amount_text->TabIndex = 3;
			this->amount_text->Text = L"$";
			this->amount_text->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged_1);
			// 
			// cin_amount_label
			// 
			this->cin_amount_label->AutoSize = true;
			this->cin_amount_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cin_amount_label->ForeColor = System::Drawing::Color::White;
			this->cin_amount_label->Location = System::Drawing::Point(13, 59);
			this->cin_amount_label->Name = L"cin_amount_label";
			this->cin_amount_label->Size = System::Drawing::Size(123, 21);
			this->cin_amount_label->TabIndex = 2;
			this->cin_amount_label->Text = L"Cash-In Amount";
			// 
			// cout_button
			// 
			this->cout_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cout_button->ForeColor = System::Drawing::Color::White;
			this->cout_button->Location = System::Drawing::Point(127, 197);
			this->cout_button->Name = L"cout_button";
			this->cout_button->Size = System::Drawing::Size(129, 33);
			this->cout_button->TabIndex = 1;
			this->cout_button->Text = L"Cash Out";
			this->cout_button->UseVisualStyleBackColor = true;
			this->cout_button->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// cin_button
			// 
			this->cin_button->BackColor = System::Drawing::Color::Transparent;
			this->cin_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cin_button->ForeColor = System::Drawing::Color::White;
			this->cin_button->Location = System::Drawing::Point(0, 197);
			this->cin_button->Name = L"cin_button";
			this->cin_button->Size = System::Drawing::Size(129, 33);
			this->cin_button->TabIndex = 0;
			this->cin_button->Text = L"Cash In";
			this->cin_button->UseVisualStyleBackColor = false;
			this->cin_button->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// top_panel
			// 
			this->top_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->top_panel->BackColor = System::Drawing::Color::Transparent;
			this->top_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top_panel.BackgroundImage")));
			this->top_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->top_panel->Controls->Add(this->pan_settings);
			this->top_panel->Controls->Add(this->label12);
			this->top_panel->Controls->Add(this->p_cout);
			this->top_panel->Controls->Add(this->bottom_panel);
			this->top_panel->Controls->Add(this->lb_balance);
			this->top_panel->Controls->Add(this->p_activity);
			this->top_panel->Controls->Add(this->lb_cash);
			this->top_panel->Controls->Add(this->cin_button);
			this->top_panel->Controls->Add(this->cout_button);
			this->top_panel->Location = System::Drawing::Point(200, 0);
			this->top_panel->Name = L"top_panel";
			this->top_panel->Size = System::Drawing::Size(994, 766);
			this->top_panel->TabIndex = 0;
			// 
			// p_cout
			// 
			this->p_cout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p_cout->Controls->Add(this->button_finish);
			this->p_cout->Controls->Add(this->account_text);
			this->p_cout->Controls->Add(this->account_label);
			this->p_cout->Controls->Add(this->cout_text);
			this->p_cout->Controls->Add(this->cout_amount_label);
			this->p_cout->Location = System::Drawing::Point(0, 230);
			this->p_cout->Name = L"p_cout";
			this->p_cout->Size = System::Drawing::Size(661, 540);
			this->p_cout->TabIndex = 43;
			// 
			// button_finish
			// 
			this->button_finish->BackColor = System::Drawing::Color::Transparent;
			this->button_finish->ForeColor = System::Drawing::Color::White;
			this->button_finish->Location = System::Drawing::Point(368, 219);
			this->button_finish->Name = L"button_finish";
			this->button_finish->Size = System::Drawing::Size(129, 26);
			this->button_finish->TabIndex = 16;
			this->button_finish->Text = L"Finish";
			this->button_finish->UseVisualStyleBackColor = false;
			this->button_finish->Click += gcnew System::EventHandler(this, &MainForm::button_finish_Click);
			// 
			// account_text
			// 
			this->account_text->BackColor = System::Drawing::Color::White;
			this->account_text->Location = System::Drawing::Point(134, 113);
			this->account_text->Name = L"account_text";
			this->account_text->Size = System::Drawing::Size(122, 25);
			this->account_text->TabIndex = 6;
			this->account_text->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			// 
			// account_label
			// 
			this->account_label->AutoSize = true;
			this->account_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->account_label->ForeColor = System::Drawing::Color::White;
			this->account_label->Location = System::Drawing::Point(14, 114);
			this->account_label->Name = L"account_label";
			this->account_label->Size = System::Drawing::Size(88, 21);
			this->account_label->TabIndex = 5;
			this->account_label->Text = L"To Account:";
			// 
			// cout_text
			// 
			this->cout_text->BackColor = System::Drawing::Color::White;
			this->cout_text->Location = System::Drawing::Point(189, 58);
			this->cout_text->Name = L"cout_text";
			this->cout_text->Size = System::Drawing::Size(122, 25);
			this->cout_text->TabIndex = 4;
			this->cout_text->Text = L"$";
			// 
			// cout_amount_label
			// 
			this->cout_amount_label->AutoSize = true;
			this->cout_amount_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cout_amount_label->ForeColor = System::Drawing::Color::White;
			this->cout_amount_label->Location = System::Drawing::Point(13, 59);
			this->cout_amount_label->Name = L"cout_amount_label";
			this->cout_amount_label->Size = System::Drawing::Size(136, 21);
			this->cout_amount_label->TabIndex = 0;
			this->cout_amount_label->Text = L"Cash-Out Amount";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::YellowGreen;
			this->label12->Location = System::Drawing::Point(116, 119);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(98, 37);
			this->label12->TabIndex = 44;
			this->label12->Text = L"$10.00";
			this->label12->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->top_panel);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->pan_home_sub->ResumeLayout(false);
			this->pan_home_sub->PerformLayout();
			this->pan_image->ResumeLayout(false);
			this->pan_image->PerformLayout();
			this->pan_home->ResumeLayout(false);
			this->pan_home->PerformLayout();
			this->p_activity->ResumeLayout(false);
			this->p_activity->PerformLayout();
			this->pan_settings->ResumeLayout(false);
			this->pan_settings->PerformLayout();
			this->pan_addlist->ResumeLayout(false);
			this->pan_addlist->PerformLayout();
			this->bottom_panel->ResumeLayout(false);
			this->bottom_panel->PerformLayout();
			this->top_panel->ResumeLayout(false);
			this->top_panel->PerformLayout();
			this->p_cout->ResumeLayout(false);
			this->p_cout->PerformLayout();
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
		this->pan_home->Visible = true;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		this->pan_addlist->Visible = true;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;
		this->pan_settings->Visible = true;

		//Balance ~ Invisible
		this->lb_balance->Visible = false;
		//Recent Activity ~ Invisible
		this->lb_activity->Visible = false;
		//Right Panel ~ Invisible
		this->p_activity->Visible = false;
		//Bottom Panel ~ Invisible
		this->bottom_panel->Visible = false;
	}
	private: System::Void bu_AddList_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		this->pan_home->Visible = false;
		//Add List ~ Visible
		this->lb_addlist->Visible = true;
		this->pan_addlist->Visible = true;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;
		this->pan_settings->Visible = true;

		//Balance ~ Invisible
		this->lb_balance->Visible = false;
		//Recent Activity ~ Invisible
		this->lb_activity->Visible = false;
		//Right Panel ~ Invisible
		this->p_activity->Visible = false;
		//Bottom Panel ~ Invisible
		this->bottom_panel->Visible = false;
	}
	private: System::Void bu_Cash_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		this->pan_home->Visible = false;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		this->pan_addlist->Visible = false;
		//Cash In/Out ~ Visible
		this->lb_cash->Visible = true;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;
		this->pan_settings->Visible = false;

		//Balance ~ Visible
		this->lb_balance->Visible = true;
		//Recent Activity ~ Visible
		this->lb_activity->Visible = true;
		//Right Panel ~ Visible
		this->p_activity->Visible = true;
		//Bottom Panel ~ Visible
		this->bottom_panel->Visible = true;
	}
	private: System::Void bu_Settings_Click(System::Object^ sender, System::EventArgs^ e) {
		//Home ~ Invisible
		this->lb_home->Visible = false;
		this->pan_home->Visible = false;
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		this->pan_addlist->Visible = false;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Visible
		this->lb_settings->Visible = true;
		this->pan_settings->Visible = true;
		//Bottom Panel ~ Visible
		this->bottom_panel->Visible = true;
		

		//Balance ~ Invisible
		this->lb_balance->Visible = false;
		//Recent Activity ~ Invisible
		this->lb_activity->Visible = false;
		//Right Panel ~ Invisible
		this->p_activity->Visible = false;
		//Bottom Panel ~ Invisible
		this->bottom_panel->Visible = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//Cash-In Amount ~ Visible
		this->cin_amount_label->Visible = true;
		//Amount Box ~ Visible
		this->amount_text->Visible = true;
		//Payment Information ~ Visible
		this->payment_label->Visible = true;
		//Card Number ~ Visible
		this->cardNum_label->Visible = true;
		//Card Number Text ~ Visible
		this->cardNum_text->Visible = true;
		//Card Name ~ Visible
		this->cardName_label->Visible = true;
		//Card Name Text ~ Visible
		this->cardName_text->Visible = true;
		//Exp. Date ~ Visible
		this->expDate_label->Visible = true;
		//Exp. Date Text 1 ~ Visible
		this->expDate1_text->Visible = true;
		//Slash ~ Visible
		this->slash_text->Visible = true;
		//Exp. Date Text 2 ~ Visible
		this->expDate2_text->Visible = true;
		//CVV ~ Visible
		this->cvv_label->Visible = true;
		//CVV Text ~ Visible
		this->cvv_text->Visible = true;
		//Finish ~ Visible
		this->finish_button->Visible = true;

		//Cash-Out Panel ~ Invisible
		this->p_cout->Visible = false;

		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//Cash-Out Panel ~ Visible
		this->p_cout->Visible = true;

}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_finish_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tb_submit2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ task = this->tb_taskno->Text;
		if (task->Length != 0) {
			MessageBox::Show("Thank you for submitting! We will review your entry.", "Thank you!");
			this->pan_home_sub->Visible = false;
		}
		else {
			MessageBox::Show("Please enter or upload image of the specify task", "Task Error");
		}

	}
	private: System::Void bu_submit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pan_home_sub->Visible = true;
	}
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pan_home_sub->Visible = false;
	}
	private: System::Void tx_submit_add_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ addlist = this->tb_entry_insert->Text;
		String^ date = this->tb_deadline->Text;

		if (addlist->Length != 0 && date->Length != 0) {
			StreamWriter^ append = File::AppendText("user" + user->id + ".txt");
			append->WriteLine(addlist + " - " + date);
			MessageBox::Show("Task is now added to your list", "Task Added");
			this->tb_entry_insert->Text = "";
			this->tb_deadline->Text = "";
			append->Close();
		}
		else {
			MessageBox::Show("Please enter a task and date", "Task Error");
		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->lb_entry->Text = "";
		StreamReader^ entry = File::OpenText("user" + user->id + ".txt");
		String^ line = "";
		int inc = 1;
		while ((line = entry->ReadLine()) != nullptr) {
			lb_entry->Text += inc + ". " + line + "\n";
			++inc;
		}
		entry->Close();
	}
	};
}
