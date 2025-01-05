#pragma once
namespace ElectricityConsumptionPlannerSystem {
	ref class DashBoard;
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
	/// Summary for FeedBack
	/// </summary>
	public ref class FeedBack : public System::Windows::Forms::Form
	{
	public:
		FeedBack(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text = "";
			this->ControlBox = false;
		}
	private: System::Windows::Forms::Button^ Back_btn;
	public:

		DashBoard^ dashboard;

		// Constructor accepting a DashBoard reference
		FeedBack(DashBoard^ dash) {
			InitializeComponent();
			dashboard = dash; // Store the DashBoard instance
		}
		void NavigateToDashBoard();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FeedBack()
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




	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;

























	private: System::Windows::Forms::Button^ JUNKBUTTON;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel2;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ FeedbackBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ username1;
































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FeedBack::typeid));
			this->Input_Data_Btn = (gcnew System::Windows::Forms::Button());
			this->FeedBack_btn = (gcnew System::Windows::Forms::Button());
			this->Schedule_btn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->JUNKBUTTON = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back_btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->username1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FeedbackBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->Input_Data_Btn->Location = System::Drawing::Point(2, 2);
			this->Input_Data_Btn->Margin = System::Windows::Forms::Padding(2);
			this->Input_Data_Btn->Name = L"Input_Data_Btn";
			this->Input_Data_Btn->Padding = System::Windows::Forms::Padding(8, 8, 0, 0);
			this->Input_Data_Btn->Size = System::Drawing::Size(275, 183);
			this->Input_Data_Btn->TabIndex = 0;
			this->Input_Data_Btn->Text = L"      Input Data";
			this->Input_Data_Btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Input_Data_Btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Input_Data_Btn->UseVisualStyleBackColor = false;
			this->Input_Data_Btn->Click += gcnew System::EventHandler(this, &FeedBack::Input_Data_Btn_Click);
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
			this->FeedBack_btn->Location = System::Drawing::Point(2, 412);
			this->FeedBack_btn->Margin = System::Windows::Forms::Padding(2);
			this->FeedBack_btn->Name = L"FeedBack_btn";
			this->FeedBack_btn->Padding = System::Windows::Forms::Padding(8, 8, 0, 0);
			this->FeedBack_btn->Size = System::Drawing::Size(276, 172);
			this->FeedBack_btn->TabIndex = 3;
			this->FeedBack_btn->Text = L"  FeedBack\r\n";
			this->FeedBack_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->FeedBack_btn->UseVisualStyleBackColor = false;
			this->FeedBack_btn->Click += gcnew System::EventHandler(this, &FeedBack::FeedBack_btn_Click);
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
			this->Schedule_btn->Location = System::Drawing::Point(2, 189);
			this->Schedule_btn->Margin = System::Windows::Forms::Padding(2);
			this->Schedule_btn->Name = L"Schedule_btn";
			this->Schedule_btn->Padding = System::Windows::Forms::Padding(8, 8, 0, 0);
			this->Schedule_btn->Size = System::Drawing::Size(276, 219);
			this->Schedule_btn->TabIndex = 4;
			this->Schedule_btn->Text = L"      Schedule";
			this->Schedule_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Schedule_btn->UseVisualStyleBackColor = false;
			this->Schedule_btn->Click += gcnew System::EventHandler(this, &FeedBack::Schedule_btn_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->flowLayoutPanel2->Controls->Add(this->Input_Data_Btn);
			this->flowLayoutPanel2->Controls->Add(this->Schedule_btn);
			this->flowLayoutPanel2->Controls->Add(this->FeedBack_btn);
			this->flowLayoutPanel2->Controls->Add(this->JUNKBUTTON);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 90);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(278, 659);
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
			this->JUNKBUTTON->Location = System::Drawing::Point(2, 588);
			this->JUNKBUTTON->Margin = System::Windows::Forms::Padding(2);
			this->JUNKBUTTON->Name = L"JUNKBUTTON";
			this->JUNKBUTTON->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->JUNKBUTTON->Size = System::Drawing::Size(276, 26);
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
			this->label1->Location = System::Drawing::Point(427, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(655, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Electricity Consumption Planner System";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumPurple;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(2, 2);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(276, 88);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel1->Controls->Add(this->Back_btn);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1370, 90);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FeedBack::panel1_Paint);
			// 
			// Back_btn
			// 
			this->Back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->Back_btn->Location = System::Drawing::Point(1345, 15);
			this->Back_btn->Margin = System::Windows::Forms::Padding(2);
			this->Back_btn->Name = L"Back_btn";
			this->Back_btn->Size = System::Drawing::Size(59, 57);
			this->Back_btn->TabIndex = 25;
			this->Back_btn->UseVisualStyleBackColor = true;
			this->Back_btn->Click += gcnew System::EventHandler(this, &FeedBack::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel2->Controls->Add(this->username1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->FeedbackBox);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(364, 144);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(968, 552);
			this->panel2->TabIndex = 27;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FeedBack::panel2_Paint);
			// 
			// username1
			// 
			this->username1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username1->Location = System::Drawing::Point(507, 123);
			this->username1->Margin = System::Windows::Forms::Padding(2);
			this->username1->Name = L"username1";
			this->username1->Size = System::Drawing::Size(144, 22);
			this->username1->TabIndex = 79;
			this->username1->TextChanged += gcnew System::EventHandler(this, &FeedBack::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(180, 123);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 78;
			this->label7->Text = L"Enter Your Name :";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
			this->comboBox3->Location = System::Drawing::Point(507, 221);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(144, 21);
			this->comboBox3->TabIndex = 77;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(814, 480);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 50);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FeedBack::button1_Click_2);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Poor", L"Average", L"Fair", L"Good", L"Excellent" });
			this->comboBox1->Location = System::Drawing::Point(507, 170);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 21);
			this->comboBox1->TabIndex = 72;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(257, 14);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(425, 46);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Customer Feedback Form";
			// 
			// FeedbackBox
			// 
			this->FeedbackBox->HideSelection = false;
			this->FeedbackBox->Location = System::Drawing::Point(161, 314);
			this->FeedbackBox->MaxLength = 500;
			this->FeedbackBox->Multiline = true;
			this->FeedbackBox->Name = L"FeedbackBox";
			this->FeedbackBox->Size = System::Drawing::Size(502, 183);
			this->FeedbackBox->TabIndex = 70;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(157, 280);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(506, 21);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Do you have any suggestion to improve our system and services\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(11, 81);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(934, 21);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Thank you for taking time to provide feedback. We appriciate hearing from you and"
				L" will review your comments carefully.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(180, 219);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(283, 20);
			this->label4->TabIndex = 66;
			this->label4->Text = L"Will you recommend it to your friends\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(180, 168);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(290, 20);
			this->label6->TabIndex = 71;
			this->label6->Text = L"How satisfied are you with our services\?\r\n";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumPurple;
			this->panel3->ForeColor = System::Drawing::Color::Transparent;
			this->panel3->Location = System::Drawing::Point(363, 698);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(968, 7);
			this->panel3->TabIndex = 77;
			// 
			// FeedBack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Name = L"FeedBack";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FeedBack::InputData_Load);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputData_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void daily_uauage_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Update_data_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LOGOUT_BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Input_Data_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void History_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void FeedBack_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Schedule_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		String^ response = comboBox1->Text;
		String^ isSatisfied = comboBox3->Text;
		String^ suggestions = FeedbackBox->Text;
		String^ userid = username1->Text;
		String^ entry = String::Concat(userid, ",", response, ",", isSatisfied, ",", suggestions);
		try
		{
			StreamWriter^ file = gcnew StreamWriter("feedback.txt", true);
			file->WriteLine(entry);
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
		NavigateToDashBoard();
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}