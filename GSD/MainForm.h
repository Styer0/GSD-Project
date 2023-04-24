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
	private: System::Windows::Forms::Panel^ top_panel;

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
	private: System::Windows::Forms::Label^ lb_balance;
	private: System::Windows::Forms::Panel^ p_activity;
	private: System::Windows::Forms::Label^ lb_activity;
	private: System::Windows::Forms::Panel^ bottom_panel;
	private: System::Windows::Forms::Button^ cin_button;
	private: System::Windows::Forms::Button^ cout_button;
	private: System::Windows::Forms::Label^ cin_amount_label;
	private: System::Windows::Forms::TextBox^ amount_text;
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


	private: System::Windows::Forms::Button^ finish_button;













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
			this->top_panel = (gcnew System::Windows::Forms::Panel());
			this->bottom_panel = (gcnew System::Windows::Forms::Panel());
			this->cout_button = (gcnew System::Windows::Forms::Button());
			this->cin_button = (gcnew System::Windows::Forms::Button());
			this->lb_balance = (gcnew System::Windows::Forms::Label());
			this->p_activity = (gcnew System::Windows::Forms::Panel());
			this->lb_activity = (gcnew System::Windows::Forms::Label());
			this->lb_cash = (gcnew System::Windows::Forms::Label());
			this->lb_settings = (gcnew System::Windows::Forms::Label());
			this->lb_addlist = (gcnew System::Windows::Forms::Label());
			this->lb_home = (gcnew System::Windows::Forms::Label());
			this->cin_amount_label = (gcnew System::Windows::Forms::Label());
			this->amount_text = (gcnew System::Windows::Forms::TextBox());
			this->payment_label = (gcnew System::Windows::Forms::Label());
			this->cardNum_label = (gcnew System::Windows::Forms::Label());
			this->cardNum_text = (gcnew System::Windows::Forms::TextBox());
			this->cardName_label = (gcnew System::Windows::Forms::Label());
			this->cardName_text = (gcnew System::Windows::Forms::TextBox());
			this->expDate_label = (gcnew System::Windows::Forms::Label());
			this->expDate1_text = (gcnew System::Windows::Forms::TextBox());
			this->expDate2_text = (gcnew System::Windows::Forms::TextBox());
			this->slash_text = (gcnew System::Windows::Forms::Label());
			this->cvv_label = (gcnew System::Windows::Forms::Label());
			this->cvv_text = (gcnew System::Windows::Forms::TextBox());
			this->finish_button = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->top_panel->SuspendLayout();
			this->bottom_panel->SuspendLayout();
			this->p_activity->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(66, 19);
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
			this->label4->Size = System::Drawing::Size(87, 19);
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
			// top_panel
			// 
			this->top_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->top_panel->BackColor = System::Drawing::Color::Transparent;
			this->top_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top_panel.BackgroundImage")));
			this->top_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->top_panel->Controls->Add(this->bottom_panel);
			this->top_panel->Controls->Add(this->lb_balance);
			this->top_panel->Controls->Add(this->p_activity);
			this->top_panel->Controls->Add(this->lb_cash);
			this->top_panel->Controls->Add(this->lb_settings);
			this->top_panel->Controls->Add(this->lb_addlist);
			this->top_panel->Controls->Add(this->lb_home);
			this->top_panel->Location = System::Drawing::Point(199, 0);
			this->top_panel->Name = L"top_panel";
			this->top_panel->Size = System::Drawing::Size(994, 766);
			this->top_panel->TabIndex = 0;
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
			this->bottom_panel->Controls->Add(this->cout_button);
			this->bottom_panel->Controls->Add(this->cin_button);
			this->bottom_panel->Location = System::Drawing::Point(0, 230);
			this->bottom_panel->Name = L"bottom_panel";
			this->bottom_panel->Size = System::Drawing::Size(661, 537);
			this->bottom_panel->TabIndex = 42;
			this->bottom_panel->Visible = false;
			// 
			// cout_button
			// 
			this->cout_button->ForeColor = System::Drawing::Color::White;
			this->cout_button->Location = System::Drawing::Point(124, -1);
			this->cout_button->Name = L"cout_button";
			this->cout_button->Size = System::Drawing::Size(129, 26);
			this->cout_button->TabIndex = 1;
			this->cout_button->Text = L"Cash Out";
			this->cout_button->UseVisualStyleBackColor = true;
			this->cout_button->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// cin_button
			// 
			this->cin_button->BackColor = System::Drawing::Color::Transparent;
			this->cin_button->ForeColor = System::Drawing::Color::White;
			this->cin_button->Location = System::Drawing::Point(-2, -1);
			this->cin_button->Name = L"cin_button";
			this->cin_button->Size = System::Drawing::Size(129, 26);
			this->cin_button->TabIndex = 0;
			this->cin_button->Text = L"Cash In";
			this->cin_button->UseVisualStyleBackColor = false;
			this->cin_button->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
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
			this->lb_balance->Size = System::Drawing::Size(140, 45);
			this->lb_balance->TabIndex = 41;
			this->lb_balance->Text = L"Balance:";
			this->lb_balance->Visible = false;
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
			this->lb_activity->Size = System::Drawing::Size(233, 45);
			this->lb_activity->TabIndex = 40;
			this->lb_activity->Text = L"Recent Activity";
			this->lb_activity->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lb_activity->Visible = false;
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
			this->lb_cash->Size = System::Drawing::Size(257, 60);
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
			this->lb_settings->Size = System::Drawing::Size(182, 60);
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
			this->lb_addlist->Size = System::Drawing::Size(183, 60);
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
			this->lb_home->Size = System::Drawing::Size(143, 60);
			this->lb_home->TabIndex = 35;
			this->lb_home->Text = L"Home";
			// 
			// cin_amount_label
			// 
			this->cin_amount_label->AutoSize = true;
			this->cin_amount_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cin_amount_label->ForeColor = System::Drawing::Color::White;
			this->cin_amount_label->Location = System::Drawing::Point(13, 59);
			this->cin_amount_label->Name = L"cin_amount_label";
			this->cin_amount_label->Size = System::Drawing::Size(153, 28);
			this->cin_amount_label->TabIndex = 2;
			this->cin_amount_label->Text = L"Cash-In Amount";
			// 
			// amount_text
			// 
			this->amount_text->BackColor = System::Drawing::Color::White;
			this->amount_text->Location = System::Drawing::Point(172, 59);
			this->amount_text->Name = L"amount_text";
			this->amount_text->Size = System::Drawing::Size(122, 29);
			this->amount_text->TabIndex = 3;
			this->amount_text->Text = L"$";
			this->amount_text->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged_1);
			// 
			// payment_label
			// 
			this->payment_label->AutoSize = true;
			this->payment_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payment_label->ForeColor = System::Drawing::Color::White;
			this->payment_label->Location = System::Drawing::Point(13, 145);
			this->payment_label->Name = L"payment_label";
			this->payment_label->Size = System::Drawing::Size(195, 28);
			this->payment_label->TabIndex = 4;
			this->payment_label->Text = L"Payment Information";
			// 
			// cardNum_label
			// 
			this->cardNum_label->AutoSize = true;
			this->cardNum_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardNum_label->ForeColor = System::Drawing::Color::White;
			this->cardNum_label->Location = System::Drawing::Point(13, 204);
			this->cardNum_label->Name = L"cardNum_label";
			this->cardNum_label->Size = System::Drawing::Size(114, 23);
			this->cardNum_label->TabIndex = 5;
			this->cardNum_label->Text = L"Card Number";
			// 
			// cardNum_text
			// 
			this->cardNum_text->BackColor = System::Drawing::Color::White;
			this->cardNum_text->Location = System::Drawing::Point(133, 198);
			this->cardNum_text->Name = L"cardNum_text";
			this->cardNum_text->Size = System::Drawing::Size(209, 29);
			this->cardNum_text->TabIndex = 6;
			// 
			// cardName_label
			// 
			this->cardName_label->AutoSize = true;
			this->cardName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardName_label->ForeColor = System::Drawing::Color::White;
			this->cardName_label->Location = System::Drawing::Point(13, 250);
			this->cardName_label->Name = L"cardName_label";
			this->cardName_label->Size = System::Drawing::Size(97, 23);
			this->cardName_label->TabIndex = 7;
			this->cardName_label->Text = L"Card Name";
			// 
			// cardName_text
			// 
			this->cardName_text->BackColor = System::Drawing::Color::White;
			this->cardName_text->Location = System::Drawing::Point(133, 250);
			this->cardName_text->Name = L"cardName_text";
			this->cardName_text->Size = System::Drawing::Size(209, 29);
			this->cardName_text->TabIndex = 8;
			// 
			// expDate_label
			// 
			this->expDate_label->AutoSize = true;
			this->expDate_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expDate_label->ForeColor = System::Drawing::Color::White;
			this->expDate_label->Location = System::Drawing::Point(13, 299);
			this->expDate_label->Name = L"expDate_label";
			this->expDate_label->Size = System::Drawing::Size(82, 23);
			this->expDate_label->TabIndex = 9;
			this->expDate_label->Text = L"Exp. Date";
			// 
			// expDate1_text
			// 
			this->expDate1_text->BackColor = System::Drawing::Color::White;
			this->expDate1_text->Location = System::Drawing::Point(133, 299);
			this->expDate1_text->Name = L"expDate1_text";
			this->expDate1_text->Size = System::Drawing::Size(56, 29);
			this->expDate1_text->TabIndex = 10;
			// 
			// expDate2_text
			// 
			this->expDate2_text->BackColor = System::Drawing::Color::White;
			this->expDate2_text->Location = System::Drawing::Point(218, 299);
			this->expDate2_text->Name = L"expDate2_text";
			this->expDate2_text->Size = System::Drawing::Size(56, 29);
			this->expDate2_text->TabIndex = 11;
			// 
			// slash_text
			// 
			this->slash_text->AutoSize = true;
			this->slash_text->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->slash_text->ForeColor = System::Drawing::Color::White;
			this->slash_text->Location = System::Drawing::Point(194, 296);
			this->slash_text->Name = L"slash_text";
			this->slash_text->Size = System::Drawing::Size(23, 31);
			this->slash_text->TabIndex = 12;
			this->slash_text->Text = L"/";
			// 
			// cvv_label
			// 
			this->cvv_label->AutoSize = true;
			this->cvv_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cvv_label->ForeColor = System::Drawing::Color::White;
			this->cvv_label->Location = System::Drawing::Point(390, 204);
			this->cvv_label->Name = L"cvv_label";
			this->cvv_label->Size = System::Drawing::Size(43, 23);
			this->cvv_label->TabIndex = 13;
			this->cvv_label->Text = L"CVV";
			// 
			// cvv_text
			// 
			this->cvv_text->BackColor = System::Drawing::Color::White;
			this->cvv_text->Location = System::Drawing::Point(440, 198);
			this->cvv_text->Name = L"cvv_text";
			this->cvv_text->Size = System::Drawing::Size(56, 29);
			this->cvv_text->TabIndex = 14;
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Home";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->top_panel->ResumeLayout(false);
			this->top_panel->PerformLayout();
			this->bottom_panel->ResumeLayout(false);
			this->bottom_panel->PerformLayout();
			this->p_activity->ResumeLayout(false);
			this->p_activity->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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
		//Add List ~ Visible
		this->lb_addlist->Visible = true;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;

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
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		//Cash In/Out ~ Visible
		this->lb_cash->Visible = true;
		//Settings ~ Invisible
		this->lb_settings->Visible = false;

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
		//Add List ~ Invisible
		this->lb_addlist->Visible = false;
		//Cash In/Out ~ Invisible
		this->lb_cash->Visible = false;
		//Settings ~ Visible
		this->lb_settings->Visible = true;
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

		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//Cash-In Amount ~ Invisible
		this->cin_amount_label->Visible = false;
		//Amount Box ~ Invisible
		this->amount_text->Visible = false;
		//Payment Information ~ Invisible
		this->payment_label->Visible = false;
		//Card Number ~ Invisible
		this->cardNum_label->Visible = false;
		//Card Number Text ~ Invisible
		this->cardNum_text->Visible = false;
		//Card Name ~ Invisible
		this->cardName_label->Visible = false;
		//Card Name Text ~ Invisible
		this->cardName_text->Visible = false;
		//Exp. Date ~ Invisible
		this->expDate_label->Visible = false;
		//Exp. Date Text 1 ~ Invisible
		this->expDate1_text->Visible = false;
		//Slash ~ Invisible
		this->slash_text->Visible = false;
		//Exp. Date Text 2 ~ Invisible
		this->expDate2_text->Visible = false;
		//CVV ~ Invisible
		this->cvv_label->Visible = false;
		//CVV Text ~ Invisible
		this->cvv_text->Visible = false;
		//Finish ~ Invisible
		this->finish_button->Visible = false;

}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
