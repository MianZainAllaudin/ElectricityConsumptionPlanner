#pragma once
#include "Schedule.h"

namespace electricityconsumptionplannersystem {
	ref class dashboard;
	ref class Login;
}

namespace ElectricityConsumptionPlannerSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for InputData
	/// </summary>
	public ref class InputData : public System::Windows::Forms::Form
	{
	public:
		DashBoard^ dashboard;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ prefered_time_cmb_bx;
	private: System::Windows::Forms::TextBox^ appliance_daily_usage_txtbx;
	private: System::Windows::Forms::CheckedListBox^ Weekdays_checklist;

	private: System::Windows::Forms::Label^ label5;



	public:
		Login^ pages;

		InputData(Login^ page1) {
			InitializeComponent();
			pages = page1; // Store the DashBoard instance
		}
		void navigatetoLoginPage();

		// Constructor accepting a DashBoard reference
		InputData(DashBoard^ dash) {
			InitializeComponent();
			dashboard = dash; // Store the DashBoard instance
		}
		InputData(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text = "";
			this->ControlBox = false;
		}
		void NavigateToDashBoard();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Input_Data_Btn;
	protected:
	private: System::Windows::Forms::Button^ FeedBack_btn;
	private: System::Windows::Forms::Button^ Schedule_btn;



	private: System::Windows::Forms::Button^ LOGOUT_BTN;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ appliance_variant_lbl;






	private: System::Windows::Forms::Label^ appliance_category_lbl;
	private: System::Windows::Forms::ComboBox^ appliance_category_menu;


	private: System::Windows::Forms::Label^ daily_uauage_lbl;




	private: System::Windows::Forms::Button^ Add_item_btn;
	private: System::Windows::Forms::TextBox^ List_of_applianes_txtbx;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ JUNKBUTTON;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ appliance_power_txtbx;

	private: System::Windows::Forms::Button^ button1;













	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputData::typeid));
			this->Input_Data_Btn = (gcnew System::Windows::Forms::Button());
			this->FeedBack_btn = (gcnew System::Windows::Forms::Button());
			this->Schedule_btn = (gcnew System::Windows::Forms::Button());
			this->LOGOUT_BTN = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->JUNKBUTTON = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->appliance_variant_lbl = (gcnew System::Windows::Forms::Label());
			this->appliance_category_lbl = (gcnew System::Windows::Forms::Label());
			this->appliance_category_menu = (gcnew System::Windows::Forms::ComboBox());
			this->daily_uauage_lbl = (gcnew System::Windows::Forms::Label());
			this->Add_item_btn = (gcnew System::Windows::Forms::Button());
			this->List_of_applianes_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Weekdays_checklist = (gcnew System::Windows::Forms::CheckedListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->appliance_daily_usage_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->prefered_time_cmb_bx = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->appliance_power_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Input_Data_Btn
			// 
			this->Input_Data_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->Input_Data_Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Input_Data_Btn->FlatAppearance->BorderSize = 0;
			this->Input_Data_Btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Input_Data_Btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input_Data_Btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->Input_Data_Btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Input_Data_Btn.Image")));
			this->Input_Data_Btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Input_Data_Btn->Location = System::Drawing::Point(3, 2);
			this->Input_Data_Btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Input_Data_Btn->Name = L"Input_Data_Btn";
			this->Input_Data_Btn->Padding = System::Windows::Forms::Padding(11, 10, 0, 0);
			this->Input_Data_Btn->Size = System::Drawing::Size(366, 183);
			this->Input_Data_Btn->TabIndex = 0;
			this->Input_Data_Btn->Text = L"      Input Data";
			this->Input_Data_Btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Input_Data_Btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Input_Data_Btn->UseVisualStyleBackColor = false;
			// 
			// FeedBack_btn
			// 
			this->FeedBack_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->FeedBack_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->FeedBack_btn->FlatAppearance->BorderSize = 0;
			this->FeedBack_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FeedBack_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14));
			this->FeedBack_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->FeedBack_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FeedBack_btn.Image")));
			this->FeedBack_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->FeedBack_btn->Location = System::Drawing::Point(3, 408);
			this->FeedBack_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FeedBack_btn->Name = L"FeedBack_btn";
			this->FeedBack_btn->Padding = System::Windows::Forms::Padding(11, 10, 0, 0);
			this->FeedBack_btn->Size = System::Drawing::Size(365, 236);
			this->FeedBack_btn->TabIndex = 3;
			this->FeedBack_btn->Text = L"  FeedBack\r\n";
			this->FeedBack_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->FeedBack_btn->UseVisualStyleBackColor = false;
			// 
			// Schedule_btn
			// 
			this->Schedule_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Schedule_btn->FlatAppearance->BorderSize = 0;
			this->Schedule_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Schedule_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Schedule_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->Schedule_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Schedule_btn.Image")));
			this->Schedule_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Schedule_btn->Location = System::Drawing::Point(3, 189);
			this->Schedule_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Schedule_btn->Name = L"Schedule_btn";
			this->Schedule_btn->Padding = System::Windows::Forms::Padding(11, 10, 0, 0);
			this->Schedule_btn->Size = System::Drawing::Size(366, 215);
			this->Schedule_btn->TabIndex = 4;
			this->Schedule_btn->Text = L"      Schedule";
			this->Schedule_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Schedule_btn->UseVisualStyleBackColor = false;
			// 
			// LOGOUT_BTN
			// 
			this->LOGOUT_BTN->BackColor = System::Drawing::Color::MediumPurple;
			this->LOGOUT_BTN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LOGOUT_BTN->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOGOUT_BTN->ForeColor = System::Drawing::Color::White;
			this->LOGOUT_BTN->Location = System::Drawing::Point(4, 686);
			this->LOGOUT_BTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->LOGOUT_BTN->Name = L"LOGOUT_BTN";
			this->LOGOUT_BTN->Size = System::Drawing::Size(355, 94);
			this->LOGOUT_BTN->TabIndex = 23;
			this->LOGOUT_BTN->Text = L"BACK";
			this->LOGOUT_BTN->UseVisualStyleBackColor = false;
			this->LOGOUT_BTN->Click += gcnew System::EventHandler(this, &InputData::LOGOUT_BTN_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->Input_Data_Btn);
			this->flowLayoutPanel2->Controls->Add(this->Schedule_btn);
			this->flowLayoutPanel2->Controls->Add(this->FeedBack_btn);
			this->flowLayoutPanel2->Controls->Add(this->JUNKBUTTON);
			this->flowLayoutPanel2->Controls->Add(this->LOGOUT_BTN);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 110);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(369, 734);
			this->flowLayoutPanel2->TabIndex = 24;
			// 
			// JUNKBUTTON
			// 
			this->JUNKBUTTON->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->JUNKBUTTON->FlatAppearance->BorderSize = 0;
			this->JUNKBUTTON->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->JUNKBUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->JUNKBUTTON->ForeColor = System::Drawing::Color::GhostWhite;
			this->JUNKBUTTON->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->JUNKBUTTON->Location = System::Drawing::Point(3, 648);
			this->JUNKBUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->JUNKBUTTON->Name = L"JUNKBUTTON";
			this->JUNKBUTTON->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->JUNKBUTTON->Size = System::Drawing::Size(368, 32);
			this->JUNKBUTTON->TabIndex = 7;
			this->JUNKBUTTON->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->JUNKBUTTON->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->JUNKBUTTON->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Honeydew;
			this->label1->Location = System::Drawing::Point(670, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(809, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Electricity Consumption Planner System";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumPurple;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 2);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(366, 108);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1710, 110);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InputData::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(227, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 57);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Appliances Data";
			this->label2->Click += gcnew System::EventHandler(this, &InputData::label2_Click);
			// 
			// appliance_variant_lbl
			// 
			this->appliance_variant_lbl->AutoSize = true;
			this->appliance_variant_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->appliance_variant_lbl->ForeColor = System::Drawing::Color::White;
			this->appliance_variant_lbl->Location = System::Drawing::Point(74, 236);
			this->appliance_variant_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->appliance_variant_lbl->Name = L"appliance_variant_lbl";
			this->appliance_variant_lbl->Size = System::Drawing::Size(362, 30);
			this->appliance_variant_lbl->TabIndex = 28;
			this->appliance_variant_lbl->Text = L"Enter Appliance Power (in Watts):";
			// 
			// appliance_category_lbl
			// 
			this->appliance_category_lbl->AutoSize = true;
			this->appliance_category_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->appliance_category_lbl->ForeColor = System::Drawing::Color::White;
			this->appliance_category_lbl->Location = System::Drawing::Point(74, 162);
			this->appliance_category_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->appliance_category_lbl->Name = L"appliance_category_lbl";
			this->appliance_category_lbl->Size = System::Drawing::Size(292, 30);
			this->appliance_category_lbl->TabIndex = 30;
			this->appliance_category_lbl->Text = L"Select Appliance Category:";
			// 
			// appliance_category_menu
			// 
			this->appliance_category_menu->AllowDrop = true;
			this->appliance_category_menu->BackColor = System::Drawing::SystemColors::HighlightText;
			this->appliance_category_menu->DisplayMember = L"5";
			this->appliance_category_menu->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->appliance_category_menu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->appliance_category_menu->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->appliance_category_menu->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->appliance_category_menu->FormattingEnabled = true;
			this->appliance_category_menu->ImeMode = System::Windows::Forms::ImeMode::On;
			this->appliance_category_menu->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"AC", L"Refrigerator", L"Fan", L"Light",
					L"WashingMachine", L"Iron", L"Oven", L"Television", L"Geyser", L"Toaster", L"Blender", L"CoffeeMaker", L"WaterDispenser", L"ElectricKettle",
					L"VacuumCleaner", L"Dishwasher", L"Heater ", L"ElectricStove", L"RiceCooker", L"WaterPump", L"SewingMachine", L"HairDryer", L"HairStraightener",
					L"Shaver", L"SpeakerSystem", L"LawnMower", L"LED/LCD"
			});
			this->appliance_category_menu->Location = System::Drawing::Point(499, 162);
			this->appliance_category_menu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->appliance_category_menu->MaxDropDownItems = 3;
			this->appliance_category_menu->MaxLength = 3;
			this->appliance_category_menu->Name = L"appliance_category_menu";
			this->appliance_category_menu->Size = System::Drawing::Size(258, 33);
			this->appliance_category_menu->TabIndex = 31;
			// 
			// daily_uauage_lbl
			// 
			this->daily_uauage_lbl->AutoSize = true;
			this->daily_uauage_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->daily_uauage_lbl->ForeColor = System::Drawing::Color::White;
			this->daily_uauage_lbl->Location = System::Drawing::Point(74, 308);
			this->daily_uauage_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->daily_uauage_lbl->Name = L"daily_uauage_lbl";
			this->daily_uauage_lbl->Size = System::Drawing::Size(294, 30);
			this->daily_uauage_lbl->TabIndex = 32;
			this->daily_uauage_lbl->Text = L"Enter daily usuage (Hours):";
			this->daily_uauage_lbl->Click += gcnew System::EventHandler(this, &InputData::daily_uauage_lbl_Click);
			// 
			// Add_item_btn
			// 
			this->Add_item_btn->BackColor = System::Drawing::Color::MediumPurple;
			this->Add_item_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Add_item_btn->Cursor = System::Windows::Forms::Cursors::Default;
			this->Add_item_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_item_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_item_btn->ForeColor = System::Drawing::Color::White;
			this->Add_item_btn->Location = System::Drawing::Point(181, 614);
			this->Add_item_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Add_item_btn->Name = L"Add_item_btn";
			this->Add_item_btn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Add_item_btn->Size = System::Drawing::Size(216, 61);
			this->Add_item_btn->TabIndex = 34;
			this->Add_item_btn->Text = L"ADD";
			this->Add_item_btn->UseVisualStyleBackColor = false;
			this->Add_item_btn->Click += gcnew System::EventHandler(this, &InputData::button1_Click);
			// 
			// List_of_applianes_txtbx
			// 
			this->List_of_applianes_txtbx->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->List_of_applianes_txtbx->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->List_of_applianes_txtbx->Location = System::Drawing::Point(1336, 286);
			this->List_of_applianes_txtbx->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->List_of_applianes_txtbx->Multiline = true;
			this->List_of_applianes_txtbx->Name = L"List_of_applianes_txtbx";
			this->List_of_applianes_txtbx->ReadOnly = true;
			this->List_of_applianes_txtbx->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->List_of_applianes_txtbx->Size = System::Drawing::Size(452, 578);
			this->List_of_applianes_txtbx->TabIndex = 35;
			this->List_of_applianes_txtbx->TextChanged += gcnew System::EventHandler(this, &InputData::List_of_applianes_txtbx_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->Weekdays_checklist);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->appliance_daily_usage_txtbx);
			this->panel2->Controls->Add(this->prefered_time_cmb_bx);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->appliance_power_txtbx);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->Add_item_btn);
			this->panel2->Controls->Add(this->appliance_variant_lbl);
			this->panel2->Controls->Add(this->daily_uauage_lbl);
			this->panel2->Controls->Add(this->appliance_category_menu);
			this->panel2->Controls->Add(this->appliance_category_lbl);
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(465, 160);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(833, 694);
			this->panel2->TabIndex = 36;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InputData::panel2_Paint);
			// 
			// Weekdays_checklist
			// 
			this->Weekdays_checklist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->Weekdays_checklist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Weekdays_checklist->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Weekdays_checklist->ForeColor = System::Drawing::Color::White;
			this->Weekdays_checklist->FormattingEnabled = true;
			this->Weekdays_checklist->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday", L"Saturday", L"Sunday"
			});
			this->Weekdays_checklist->Location = System::Drawing::Point(499, 437);
			this->Weekdays_checklist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Weekdays_checklist->Name = L"Weekdays_checklist";
			this->Weekdays_checklist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Weekdays_checklist->Size = System::Drawing::Size(262, 140);
			this->Weekdays_checklist->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(74, 455);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 30);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Select Week Days:";
			// 
			// appliance_daily_usage_txtbx
			// 
			this->appliance_daily_usage_txtbx->BackColor = System::Drawing::SystemColors::HighlightText;
			this->appliance_daily_usage_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->appliance_daily_usage_txtbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->appliance_daily_usage_txtbx->Location = System::Drawing::Point(499, 308);
			this->appliance_daily_usage_txtbx->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->appliance_daily_usage_txtbx->Multiline = true;
			this->appliance_daily_usage_txtbx->Name = L"appliance_daily_usage_txtbx";
			this->appliance_daily_usage_txtbx->Size = System::Drawing::Size(258, 28);
			this->appliance_daily_usage_txtbx->TabIndex = 42;
			this->appliance_daily_usage_txtbx->TextChanged += gcnew System::EventHandler(this, &InputData::appliance_daily_usage_txtbx_TextChanged);
			// 
			// prefered_time_cmb_bx
			// 
			this->prefered_time_cmb_bx->AllowDrop = true;
			this->prefered_time_cmb_bx->BackColor = System::Drawing::SystemColors::HighlightText;
			this->prefered_time_cmb_bx->DisplayMember = L"5";
			this->prefered_time_cmb_bx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->prefered_time_cmb_bx->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->prefered_time_cmb_bx->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prefered_time_cmb_bx->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->prefered_time_cmb_bx->FormattingEnabled = true;
			this->prefered_time_cmb_bx->ImeMode = System::Windows::Forms::ImeMode::On;
			this->prefered_time_cmb_bx->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"1 P.M.", L"2 P.M.", L"3 P.M.", L"4 P.M.",
					L"5 P.M.", L"6 P.M.", L"7 P.M.", L"8 P.M.", L"9 P.M.", L"10 P.M.", L"11 P.M.", L"12 P.M.", L"1 A.M.", L"2 A.M.", L"3 A.M.", L"4 A.M.",
					L"5 A.M.", L"6 A.M.", L"7 A.M.", L"8 A.M.", L"9 A.M.", L"10 A.M.", L"11 A.M.", L"12 A.M."
			});
			this->prefered_time_cmb_bx->Location = System::Drawing::Point(499, 382);
			this->prefered_time_cmb_bx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prefered_time_cmb_bx->MaxDropDownItems = 3;
			this->prefered_time_cmb_bx->MaxLength = 3;
			this->prefered_time_cmb_bx->Name = L"prefered_time_cmb_bx";
			this->prefered_time_cmb_bx->Size = System::Drawing::Size(258, 33);
			this->prefered_time_cmb_bx->TabIndex = 41;
			this->prefered_time_cmb_bx->SelectedIndexChanged += gcnew System::EventHandler(this, &InputData::prefered_time_cmb_bx_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(74, 382);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 30);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Select Prefered Time:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(458, 614);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(216, 61);
			this->button1->TabIndex = 37;
			this->button1->Text = L"SUBMIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InputData::button1_Click_1);
			// 
			// appliance_power_txtbx
			// 
			this->appliance_power_txtbx->BackColor = System::Drawing::SystemColors::HighlightText;
			this->appliance_power_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->appliance_power_txtbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->appliance_power_txtbx->Location = System::Drawing::Point(499, 236);
			this->appliance_power_txtbx->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->appliance_power_txtbx->Multiline = true;
			this->appliance_power_txtbx->Name = L"appliance_power_txtbx";
			this->appliance_power_txtbx->Size = System::Drawing::Size(258, 28);
			this->appliance_power_txtbx->TabIndex = 36;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(97, 91);
			this->label7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(9, 7, 9, 7);
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(581, 46);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Enter the details of your HouseHold Appliances:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Location = System::Drawing::Point(1336, 160);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(452, 122);
			this->flowLayoutPanel3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1390, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(295, 52);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Appliances List";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumPurple;
			this->panel3->Location = System::Drawing::Point(464, 856);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(833, 8);
			this->panel3->TabIndex = 37;
			// 
			// InputData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1710, 844);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->List_of_applianes_txtbx);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"InputData";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &InputData::InputData_Load);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ applianceName = appliance_category_menu->Text;
		String^ appliancePower = appliance_power_txtbx->Text;
		String^ usageHours = appliance_daily_usage_txtbx->Text;
		String^ PreferedHours = prefered_time_cmb_bx->Text;

		if (String::IsNullOrWhiteSpace(applianceName) || String::IsNullOrWhiteSpace(appliancePower) || String::IsNullOrWhiteSpace(usageHours) || String::IsNullOrWhiteSpace(PreferedHours) )
		{
			MessageBox::Show("Please enter full details in order to proceed !", "Invalid data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (Convert::ToInt32(usageHours) < 1 || Convert::ToInt32(usageHours) > 24)
		{
			MessageBox::Show("Usuage Hour must be range from 1 to 24 !", "Invalid data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		String^ Weekdays = "";
		for (int i = 0; i < Weekdays_checklist->CheckedItems->Count; i++) {
			
			Weekdays += Weekdays_checklist->CheckedItems[i]->ToString();

			if (i < Weekdays_checklist->CheckedItems->Count - 1) {
				Weekdays += ".";
			}
		}

		String^ entry = String::Concat(applianceName, ",", appliancePower, ",", usageHours, ",", PreferedHours , "," , Weekdays );
		try
		{
			StreamWriter^ file = gcnew StreamWriter("applianceData.txt", true);
			file->WriteLine(entry);
			List_of_applianes_txtbx->Multiline = true;
			List_of_applianes_txtbx->Text += entry + "\r\n";
			file->Close();
		}
		catch (System::IO::FileNotFoundException^)
		{
			MessageBox::Show("Error: File not found!", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (System::UnauthorizedAccessException^)
		{
			MessageBox::Show("Error: Access to file is denied!", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Exit the function if access is denied
		}
		catch (System::Exception^)
		{
			MessageBox::Show("An error occurred while opening the file.", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void InputData_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void daily_uauage_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Update_data_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LOGOUT_BTN_Click(System::Object^ sender, System::EventArgs^ e) {
		NavigateToDashBoard();
	}
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Back_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Schedule^ obj = gcnew Schedule();
		this->Hide();
		obj->Show();
		this->Close();
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void List_of_applianes_txtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void prefered_time_cmb_bx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void appliance_daily_usage_menu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void appliance_daily_usage_txtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

};
}