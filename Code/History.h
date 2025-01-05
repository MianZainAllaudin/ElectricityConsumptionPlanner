#pragma once

#ifndef History_H
#define History_H

#include"InputData.h"
#include "FeedBack.h"

namespace ElectricityConsumptionPlannerSystem {
	ref class DashBoard;
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
	/// Summary for History
	/// </summary>
	public ref class History : public System::Windows::Forms::Form
	{
	public:
		DashBoard^ dashboard;
	private: System::Windows::Forms::Panel^ panel3;
	public:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ List_of_schedules_txtbx;
	private: System::Windows::Forms::Panel^ panel2;

















	public:


		   Login^ pages;
		// Constructor accepting a DashBoard reference
		History(DashBoard^ dash) {
			InitializeComponent();
			dashboard = dash; // Store the DashBoard instance
		}
		History(Login^ page1) {
			InitializeComponent();
			pages = page1; // Store the DashBoard instance
		}
		History()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text = "";
			this->ControlBox = false;
		}
		void NavigateToDashBoard();
		void navigatetoLoginPage();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~History()
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
	private: System::Windows::Forms::Button^ History_btn;
	private: System::Windows::Forms::Button^ Update_data_btn;

	private: System::Windows::Forms::Button^ LOGOUT_BTN;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::Button^ JUNKBUTTON;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Back_btn;















































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(History::typeid));
			this->Input_Data_Btn = (gcnew System::Windows::Forms::Button());
			this->FeedBack_btn = (gcnew System::Windows::Forms::Button());
			this->Schedule_btn = (gcnew System::Windows::Forms::Button());
			this->History_btn = (gcnew System::Windows::Forms::Button());
			this->Update_data_btn = (gcnew System::Windows::Forms::Button());
			this->LOGOUT_BTN = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->JUNKBUTTON = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->List_of_schedules_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			this->Input_Data_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->Input_Data_Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Input_Data_Btn->FlatAppearance->BorderSize = 0;
			this->Input_Data_Btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Input_Data_Btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input_Data_Btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->Input_Data_Btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Input_Data_Btn.Image")));
			this->Input_Data_Btn->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Input_Data_Btn->Location = System::Drawing::Point(3, 3);
			this->Input_Data_Btn->Name = L"Input_Data_Btn";
			this->Input_Data_Btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Input_Data_Btn->Size = System::Drawing::Size(412, 138);
			this->Input_Data_Btn->TabIndex = 0;
			this->Input_Data_Btn->Text = L"      Input Data";
			this->Input_Data_Btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Input_Data_Btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Input_Data_Btn->UseVisualStyleBackColor = false;
			this->Input_Data_Btn->Click += gcnew System::EventHandler(this, &History::Input_Data_Btn_Click);
			this->FeedBack_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->FeedBack_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->FeedBack_btn->FlatAppearance->BorderSize = 0;
			this->FeedBack_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FeedBack_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14));
			this->FeedBack_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->FeedBack_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FeedBack_btn.Image")));
			this->FeedBack_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->FeedBack_btn->Location = System::Drawing::Point(3, 302);
			this->FeedBack_btn->Name = L"FeedBack_btn";
			this->FeedBack_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->FeedBack_btn->Size = System::Drawing::Size(414, 182);
			this->FeedBack_btn->TabIndex = 3;
			this->FeedBack_btn->Text = L"  FeedBack\r\n";
			this->FeedBack_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->FeedBack_btn->UseVisualStyleBackColor = false;
			this->FeedBack_btn->Click += gcnew System::EventHandler(this, &History::FeedBack_btn_Click);
			this->Schedule_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Schedule_btn->FlatAppearance->BorderSize = 0;
			this->Schedule_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Schedule_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Schedule_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->Schedule_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Schedule_btn.Image")));
			this->Schedule_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Schedule_btn->Location = System::Drawing::Point(3, 147);
			this->Schedule_btn->Name = L"Schedule_btn";
			this->Schedule_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Schedule_btn->Size = System::Drawing::Size(414, 149);
			this->Schedule_btn->TabIndex = 4;
			this->Schedule_btn->Text = L"      Schedule";
			this->Schedule_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Schedule_btn->UseVisualStyleBackColor = false;
			this->History_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->History_btn->FlatAppearance->BorderSize = 0;
			this->History_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->History_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->History_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->History_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"History_btn.Image")));
			this->History_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->History_btn->Location = System::Drawing::Point(3, 490);
			this->History_btn->Name = L"History_btn";
			this->History_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->History_btn->Size = System::Drawing::Size(412, 169);
			this->History_btn->TabIndex = 5;
			this->History_btn->Text = L"        History";
			this->History_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->History_btn->UseVisualStyleBackColor = false;
			this->Update_data_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Update_data_btn->FlatAppearance->BorderSize = 0;
			this->Update_data_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Update_data_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update_data_btn->ForeColor = System::Drawing::Color::GhostWhite;
			this->Update_data_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Update_data_btn.Image")));
			this->Update_data_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Update_data_btn->Location = System::Drawing::Point(3, 665);
			this->Update_data_btn->Name = L"Update_data_btn";
			this->Update_data_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Update_data_btn->Size = System::Drawing::Size(412, 168);
			this->Update_data_btn->TabIndex = 6;
			this->Update_data_btn->Text = L"       Update Data";
			this->Update_data_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Update_data_btn->UseVisualStyleBackColor = false;
			this->Update_data_btn->Click += gcnew System::EventHandler(this, &History::Update_data_btn_Click);
			this->LOGOUT_BTN->BackColor = System::Drawing::Color::MediumPurple;
			this->LOGOUT_BTN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LOGOUT_BTN->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOGOUT_BTN->ForeColor = System::Drawing::Color::White;
			this->LOGOUT_BTN->Location = System::Drawing::Point(4, 887);
			this->LOGOUT_BTN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LOGOUT_BTN->Name = L"LOGOUT_BTN";
			this->LOGOUT_BTN->Size = System::Drawing::Size(412, 118);
			this->LOGOUT_BTN->TabIndex = 23;
			this->LOGOUT_BTN->Text = L"BACK";
			this->LOGOUT_BTN->UseVisualStyleBackColor = false;
			this->LOGOUT_BTN->Click += gcnew System::EventHandler(this, &History::LOGOUT_BTN_Click);
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->flowLayoutPanel2->Controls->Add(this->Input_Data_Btn);
			this->flowLayoutPanel2->Controls->Add(this->Schedule_btn);
			this->flowLayoutPanel2->Controls->Add(this->FeedBack_btn);
			this->flowLayoutPanel2->Controls->Add(this->History_btn);
			this->flowLayoutPanel2->Controls->Add(this->Update_data_btn);
			this->flowLayoutPanel2->Controls->Add(this->JUNKBUTTON);
			this->flowLayoutPanel2->Controls->Add(this->LOGOUT_BTN);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 138);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(417, 912);
			this->flowLayoutPanel2->TabIndex = 24;
			this->JUNKBUTTON->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->JUNKBUTTON->FlatAppearance->BorderSize = 0;
			this->JUNKBUTTON->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->JUNKBUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->JUNKBUTTON->ForeColor = System::Drawing::Color::GhostWhite;
			this->JUNKBUTTON->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->JUNKBUTTON->Location = System::Drawing::Point(3, 839);
			this->JUNKBUTTON->Name = L"JUNKBUTTON";
			this->JUNKBUTTON->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->JUNKBUTTON->Size = System::Drawing::Size(414, 40);
			this->JUNKBUTTON->TabIndex = 7;
			this->JUNKBUTTON->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->JUNKBUTTON->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->JUNKBUTTON->UseVisualStyleBackColor = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Honeydew;
			this->label1->Location = System::Drawing::Point(717, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(962, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Electricity Consumption Planner System";
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumPurple;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(414, 135);
			this->flowLayoutPanel1->TabIndex = 3;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 132);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->Back_btn);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1924, 138);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &History::panel1_Paint);
			this->Back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->Back_btn->Location = System::Drawing::Point(1898, 20);
			this->Back_btn->Name = L"Back_btn";
			this->Back_btn->Size = System::Drawing::Size(88, 88);
			this->Back_btn->TabIndex = 26;
			this->Back_btn->UseVisualStyleBackColor = true;
			this->Back_btn->Click += gcnew System::EventHandler(this, &History::Back_btn_Click_1);
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel3->Controls->Add(this->label5);
			this->panel3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Location = System::Drawing::Point(573, 222);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1359, 118);
			this->panel3->TabIndex = 68;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(153, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(963, 67);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Previously Generated Schedules History";
			this->List_of_schedules_txtbx->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->List_of_schedules_txtbx->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->List_of_schedules_txtbx->Location = System::Drawing::Point(573, 345);
			this->List_of_schedules_txtbx->Multiline = true;
			this->List_of_schedules_txtbx->Name = L"List_of_schedules_txtbx";
			this->List_of_schedules_txtbx->ReadOnly = true;
			this->List_of_schedules_txtbx->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->List_of_schedules_txtbx->Size = System::Drawing::Size(1357, 732);
			this->List_of_schedules_txtbx->TabIndex = 67;
			this->List_of_schedules_txtbx->TextChanged += gcnew System::EventHandler(this, &History::List_of_schedules_txtbx_TextChanged);
			this->panel2->BackColor = System::Drawing::Color::MediumPurple;
			this->panel2->Location = System::Drawing::Point(573, 1080);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1359, 15);
			this->panel2->TabIndex = 69;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->List_of_schedules_txtbx);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"History";
			this->Text = L"History";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &History::InputData_Load);
			this->Shown += gcnew System::EventHandler(this, &History::Schedul_showne);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		NavigateToDashBoard();
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
	private: System::Void Input_Data_Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		InputData^ inputDataObj = gcnew InputData;
		inputDataObj->Show();
	}
	private: System::Void FeedBack_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		ElectricityConsumptionPlannerSystem::FeedBack^ feedbackObj = gcnew ElectricityConsumptionPlannerSystem::FeedBack;
		feedbackObj->Show();
	}
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Back_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		NavigateToDashBoard();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Schedul_showne(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void List_of_schedules_txtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


#endif // !History_H
