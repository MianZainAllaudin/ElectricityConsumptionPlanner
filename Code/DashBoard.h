#pragma once
#ifndef DASH_H
#define DASH_H

#include "InputData.h"
#include "History.h"
#include "FeedBack.h" // Include only here, since DashBoard needs FeedBack

namespace electricityconsumptionplannersystem {
	ref class Login;
}

namespace ElectricityConsumptionPlannerSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form {
	public:
		DashBoard(void) {
			InitializeComponent();
			this->Text = "";
			this->ControlBox = false;
		}
	private: System::Windows::Forms::Panel^ panel2;
	public:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	public:

	public:


	public:

	public:


		Login^ pages;

		DashBoard(Login^ page1) {
			InitializeComponent();
			pages = page1; // Store the DashBoard instance
		}
		void navigatetoLoginPage();

		// Open FeedBack from DashBoard
		void OpenFeedBack() {
			FeedBack^ feedback = gcnew FeedBack(this); // Pass DashBoard instance
			this->Hide(); // Hide DashBoard
			feedback->Show(); // Show FeedBack
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashBoard()
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




	private: System::Windows::Forms::Button^ JUNKBUTTON;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashBoard::typeid));
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
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
			this->Input_Data_Btn->Location = System::Drawing::Point(3, 3);
			this->Input_Data_Btn->Name = L"Input_Data_Btn";
			this->Input_Data_Btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Input_Data_Btn->Size = System::Drawing::Size(412, 238);
			this->Input_Data_Btn->TabIndex = 0;
			this->Input_Data_Btn->Text = L"      Input Data";
			this->Input_Data_Btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Input_Data_Btn->UseVisualStyleBackColor = false;
			this->Input_Data_Btn->Click += gcnew System::EventHandler(this, &DashBoard::Input_Data_Btn_Click);
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
			this->FeedBack_btn->Location = System::Drawing::Point(3, 533);
			this->FeedBack_btn->Name = L"FeedBack_btn";
			this->FeedBack_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->FeedBack_btn->Size = System::Drawing::Size(414, 228);
			this->FeedBack_btn->TabIndex = 3;
			this->FeedBack_btn->Text = L"  FeedBack\r\n";
			this->FeedBack_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->FeedBack_btn->UseVisualStyleBackColor = false;
			this->FeedBack_btn->Click += gcnew System::EventHandler(this, &DashBoard::FeedBack_btn_Click);
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
			this->Schedule_btn->Location = System::Drawing::Point(3, 247);
			this->Schedule_btn->Name = L"Schedule_btn";
			this->Schedule_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Schedule_btn->Size = System::Drawing::Size(412, 280);
			this->Schedule_btn->TabIndex = 4;
			this->Schedule_btn->Text = L"      Schedule";
			this->Schedule_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Schedule_btn->UseVisualStyleBackColor = false;
			this->Schedule_btn->Click += gcnew System::EventHandler(this, &DashBoard::Schedule_btn_Click);
			// 
			// LOGOUT_BTN
			// 
			this->LOGOUT_BTN->BackColor = System::Drawing::Color::MediumPurple;
			this->LOGOUT_BTN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LOGOUT_BTN->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOGOUT_BTN->ForeColor = System::Drawing::Color::White;
			this->LOGOUT_BTN->Location = System::Drawing::Point(4, 815);
			this->LOGOUT_BTN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LOGOUT_BTN->Name = L"LOGOUT_BTN";
			this->LOGOUT_BTN->Size = System::Drawing::Size(412, 118);
			this->LOGOUT_BTN->TabIndex = 23;
			this->LOGOUT_BTN->Text = L"LOGOUT";
			this->LOGOUT_BTN->UseVisualStyleBackColor = false;
			this->LOGOUT_BTN->Click += gcnew System::EventHandler(this, &DashBoard::LOGOUT_BTN_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->flowLayoutPanel2->Controls->Add(this->Input_Data_Btn);
			this->flowLayoutPanel2->Controls->Add(this->Schedule_btn);
			this->flowLayoutPanel2->Controls->Add(this->FeedBack_btn);
			this->flowLayoutPanel2->Controls->Add(this->JUNKBUTTON);
			this->flowLayoutPanel2->Controls->Add(this->LOGOUT_BTN);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 138);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(417, 1018);
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
			this->JUNKBUTTON->Location = System::Drawing::Point(3, 767);
			this->JUNKBUTTON->Name = L"JUNKBUTTON";
			this->JUNKBUTTON->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->JUNKBUTTON->Size = System::Drawing::Size(414, 40);
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
			this->label1->Location = System::Drawing::Point(757, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(962, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Electricity Consumption Planner System";
			this->label1->Click += gcnew System::EventHandler(this, &DashBoard::label1_Click_1);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumPurple;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(2, 1);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(414, 135);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 132);
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
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2053, 138);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DashBoard::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(658, 204);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1167, 866);
			this->panel2->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(103, 717);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(708, 32);
			this->label12->TabIndex = 50;
			this->label12->Text = L"- Share your thoughts or suggestions to improve the system.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(103, 767);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(525, 32);
			this->label11->TabIndex = 49;
			this->label11->Text = L"- Let us know how the schedules helped you!";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(80, 669);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 36);
			this->label10->TabIndex = 48;
			this->label10->Text = L"FeedBack :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(103, 550);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(557, 32);
			this->label9->TabIndex = 47;
			this->label9->Text = L"- Save or export schedules for future reference.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(80, 100);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(950, 38);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Optimize your electricity usage and reduce your energy bills efficiently.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(80, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(278, 36);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Appliance Data Entry:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(103, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(643, 32);
			this->label6->TabIndex = 44;
			this->label6->Text = L"- Enter appliance names and their power consumption.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(103, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(645, 32);
			this->label5->TabIndex = 43;
			this->label5->Text = L"- Specify usage hours to generate optimized schedules.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(80, 450);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 36);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Schedule Generation:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(103, 503);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(626, 32);
			this->label3->TabIndex = 41;
			this->label3->Text = L"- View daily, weekly, or monthly optimized schedules.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(80, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(764, 38);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Welcome to the Electricity Consumption Planner System!";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumPurple;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->ForeColor = System::Drawing::Color::MediumPurple;
			this->panel3->Location = System::Drawing::Point(-2, 870);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(937, 16);
			this->panel3->TabIndex = 38;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MediumPurple;
			this->panel4->Location = System::Drawing::Point(658, 1072);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1165, 12);
			this->panel4->TabIndex = 38;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::MediumPurple;
			this->panel5->Location = System::Drawing::Point(658, 191);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1165, 10);
			this->panel5->TabIndex = 39;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(2053, 1156);
			this->ControlBox = false;
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"DashBoard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DashBoard::InputData_Load);
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

	private: System::Void InputData_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Update_data_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LOGOUT_BTN_Click(System::Object^ sender, System::EventArgs^ e) {
		navigatetoLoginPage();
	}
	private: System::Void Input_Data_Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		InputData^ inputDataObj = gcnew InputData;
		inputDataObj->Show();


	}
	private: System::Void History_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		History^ historyObj = gcnew History;
		historyObj->Show();

	}
	private: System::Void FeedBack_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		/*FeedBack^ feedbackObj = gcnew FeedBack;
		this->Hide();
		feedbackObj->Show();
		this->Close();*/
		OpenFeedBack();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Schedule_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Schedule^ obj = gcnew Schedule();
		obj->Show();
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}


#endif // !Dash_H