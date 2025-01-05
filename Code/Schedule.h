#pragma once
#ifndef Schedule_H
#define Schedule_H
#include"ScheduleShow.h"
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
	using namespace System::IO;

	/// <summary>
	/// Summary for Schedule
	/// </summary>
	public ref class Schedule : public System::Windows::Forms::Form
	{
	public:
		DashBoard^ dashboard;
	private: System::Windows::Forms::ComboBox^ Area_combo_box;
	public:

	private: System::Windows::Forms::ComboBox^ City_combo_box;

	public:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	public:
		Login^ pages;

		Schedule(Login^ page1) {
			InitializeComponent();
			pages = page1; // Store the DashBoard instance
		}
		// Constructor accepting a DashBoard reference
		Schedule(DashBoard^ dash) {
			InitializeComponent();
			dashboard = dash; // Store the DashBoard instance
		}
		void NavigateToDashBoard();
		Schedule(void)
		{
			InitializeComponent();
			this->City_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &Schedule::City_combo_box_SelectedIndexChanged);
			//
			//TODO: Add the constructor code here
			//
			this->Text = "";
			this->ControlBox = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Schedule()
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

	private: System::Windows::Forms::Panel^ panel4;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ budget;
	private: System::Windows::Forms::Button^ Generate_btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ Schedule_type;
	private: System::Windows::Forms::Label^ label3;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		array<String^, 2>^ scheduleArray;

		System::ComponentModel::Container^ components;

		int GetTimeIndex(String^ time, array<String^>^ timeLabels)
		{
			for (int i = 0; i < timeLabels->Length; i++)
			{
				if (timeLabels[i]->Equals(time, StringComparison::OrdinalIgnoreCase))
				{
					return i + 1; // Return 1-based index
				}
			}
			throw gcnew Exception("Invalid time format: " + time);
		}
		
		void UpdateAreaComboBox()
		{
			this->Area_combo_box->Items->Clear(); // Clear previous items


			if (City_combo_box->SelectedItem != nullptr)
			{
				// Populate areas based on the selected city
				if (City_combo_box->SelectedItem->ToString() == "Lahore") {
					this->Area_combo_box->Items->AddRange(gcnew cli::array<String^>{ "Johar Town", "Iqbal Town" });
				}
				else if (City_combo_box->SelectedItem->ToString() == "Islamabad") {
					this->Area_combo_box->Items->AddRange(gcnew cli::array<String^>{ "F-6", "G-10" });
				}
				else if (City_combo_box->SelectedItem->ToString() == "Karachi") {
					this->Area_combo_box->Items->AddRange(gcnew cli::array<String^>{ "Defense", "Gulshan-e-Iqbal " });
				}
				else if (City_combo_box->SelectedItem->ToString() == "Quetta") {
					this->Area_combo_box->Items->AddRange(gcnew cli::array<String^>{ "Satellite Town", "Cantt" });
				}
			}
		}
		void WriteScheduleToFile()
		{
			String^ outputFilePath = "scheduleOutput.txt"; // Output file name
			StreamWriter^ writer = gcnew StreamWriter(outputFilePath);

			// Write the header row (appliance names)
			for (int j = 0; j < scheduleArray->GetLength(1); j++)
			{
				writer->Write(scheduleArray[0, j]);
				if (j < scheduleArray->GetLength(1) - 1)
				{
					writer->Write(", ");
				}
			}
			writer->WriteLine();
			for (int i = 1; i < scheduleArray->GetLength(0); i++)
			{
				writer->Write(scheduleArray[i, 0]); // Write time label
				for (int j = 1; j < scheduleArray->GetLength(1); j++)
				{
					writer->Write(", ");
					writer->Write(scheduleArray[i, j] == nullptr ? "" : scheduleArray[i, j]); // Write appliance usage
				}
				writer->WriteLine();
			}

			writer->Close();
		}

		int ConvertTo24HourFormat(String^ time)
		{
			// Split the time into hour and period
			array<String^>^ timeParts = time->Split(' ');
			if (timeParts->Length != 2)
				throw gcnew Exception("Invalid time format!");

			int hour = Convert::ToInt32(timeParts[0]->Trim());
			String^ period = timeParts[1]->Trim()->ToUpper();

			if (period == "A.M.")
			{
				if (hour == 12) // 12 A.M. is 0 hour
					return 0;
				return hour; // Keep as is
			}
			else if (period == "P.M.")
			{
				if (hour == 12) // 12 P.M. remains 12
					return 12;
				return hour + 12; // Add 12 for P.M. hours
			}
			else
			{
				throw gcnew Exception("Invalid time period!");
			}
		}
		int GetDayNumber(String^ day)
		{
			int todayIndex = (int)DateTime::Now.DayOfWeek;
			todayIndex = (todayIndex == 0) ? 6 : todayIndex - 1;
			day = day->Trim()->ToLower();
			array<String^>^ dayLabels = gcnew array<String^> { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
			for (int i = 0; i < dayLabels->Length; i++)
			{
				if (day == dayLabels[i])
				{
					return (i - todayIndex + 7) % 7;
				}
			}

			throw gcnew Exception("Invalid day name: " + day);
		}
		array<String^>^ GenerateDynamicDayLabels(int totalEntries, int repetitionsPerDay)
		{
			array<String^>^ allDays = gcnew array<String^> {
				"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
			};
			int todayIndex = (int)DateTime::Now.DayOfWeek;
			todayIndex = (todayIndex == 0) ? 6 : todayIndex - 1;
			array<String^>^ dynamicDays = gcnew array<String^>(totalEntries);
			int currentIndex = 0;
			for (int i = 0; i < totalEntries; i++)
			{
				int dayIndex = (todayIndex + (i / repetitionsPerDay)) % 7;
				dynamicDays[i] = allDays[dayIndex];
			}

			return dynamicDays;
		}
		int CalculateDayOccurrences(int year, int month, String^ day)
		{
			// Get the first day of the month
			DateTime firstDay = DateTime(year, month, 1);
			int totalDays = DateTime::DaysInMonth(year, month);

			// Day of the week as an integer (Monday = 0, ..., Sunday = 6)
			int firstDayIndex = (int)firstDay.DayOfWeek;
			int targetDayIndex;

			if (day->ToLower() == "monday") targetDayIndex = 0;
			else if (day->ToLower() == "tuesday") targetDayIndex = 1;
			else if (day->ToLower() == "wednesday") targetDayIndex = 2;
			else if (day->ToLower() == "thursday") targetDayIndex = 3;
			else if (day->ToLower() == "friday") targetDayIndex = 4;
			else if (day->ToLower() == "saturday") targetDayIndex = 5;
			else if (day->ToLower() == "sunday") targetDayIndex = 6;
			else return 0; // Invalid day

			// Calculate occurrences
			int occurrences = (totalDays + firstDayIndex - targetDayIndex + 6) / 7;
			if (firstDayIndex > targetDayIndex)
				occurrences -= 1;

			return occurrences;
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Schedule::typeid));
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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Area_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->City_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->budget = (gcnew System::Windows::Forms::TextBox());
			this->Generate_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Schedule_type = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->Input_Data_Btn->Size = System::Drawing::Size(412, 288);
			this->Input_Data_Btn->TabIndex = 0;
			this->Input_Data_Btn->Text = L"      Input Data";
			this->Input_Data_Btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Input_Data_Btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Input_Data_Btn->UseVisualStyleBackColor = false;
			this->Input_Data_Btn->Click += gcnew System::EventHandler(this, &Schedule::Input_Data_Btn_Click);
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
			this->FeedBack_btn->Location = System::Drawing::Point(3, 558);
			this->FeedBack_btn->Name = L"FeedBack_btn";
			this->FeedBack_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->FeedBack_btn->Size = System::Drawing::Size(414, 245);
			this->FeedBack_btn->TabIndex = 3;
			this->FeedBack_btn->Text = L"  FeedBack\r\n";
			this->FeedBack_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->FeedBack_btn->UseVisualStyleBackColor = false;
			this->FeedBack_btn->Click += gcnew System::EventHandler(this, &Schedule::FeedBack_btn_Click);
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
			this->Schedule_btn->Location = System::Drawing::Point(3, 297);
			this->Schedule_btn->Name = L"Schedule_btn";
			this->Schedule_btn->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->Schedule_btn->Size = System::Drawing::Size(414, 255);
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
			this->LOGOUT_BTN->Location = System::Drawing::Point(4, 875);
			this->LOGOUT_BTN->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LOGOUT_BTN->Name = L"LOGOUT_BTN";
			this->LOGOUT_BTN->Size = System::Drawing::Size(412, 137);
			this->LOGOUT_BTN->TabIndex = 23;
			this->LOGOUT_BTN->Text = L"BACK";
			this->LOGOUT_BTN->UseVisualStyleBackColor = false;
			this->LOGOUT_BTN->Click += gcnew System::EventHandler(this, &Schedule::LOGOUT_BTN_Click);
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
			this->flowLayoutPanel2->Size = System::Drawing::Size(417, 912);
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
			this->JUNKBUTTON->Location = System::Drawing::Point(3, 809);
			this->JUNKBUTTON->Name = L"JUNKBUTTON";
			this->JUNKBUTTON->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->JUNKBUTTON->Size = System::Drawing::Size(414, 58);
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
			this->label1->Location = System::Drawing::Point(622, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(962, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Electricity Consumption Planner System";
			this->label1->Click += gcnew System::EventHandler(this, &Schedule::label1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumPurple;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(2, -15);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(414, 154);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 151);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Schedule::pictureBox1_Click);
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
			this->panel1->Size = System::Drawing::Size(1924, 138);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Schedule::panel1_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MediumPurple;
			this->panel4->Location = System::Drawing::Point(708, 1009);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(958, 15);
			this->panel4->TabIndex = 67;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel2->Controls->Add(this->Area_combo_box);
			this->panel2->Controls->Add(this->City_combo_box);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->budget);
			this->panel2->Controls->Add(this->Generate_btn);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->Schedule_type);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(708, 209);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(958, 797);
			this->panel2->TabIndex = 65;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Schedule::panel2_Paint);
			// 
			// Area_combo_box
			// 
			this->Area_combo_box->AllowDrop = true;
			this->Area_combo_box->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"Small", L"Medium", L"Large" });
			this->Area_combo_box->BackColor = System::Drawing::Color::White;
			this->Area_combo_box->DisplayMember = L"3";
			this->Area_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Area_combo_box->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Area_combo_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Area_combo_box->FormattingEnabled = true;
			this->Area_combo_box->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Area_combo_box->Location = System::Drawing::Point(496, 386);
			this->Area_combo_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Area_combo_box->MaxDropDownItems = 3;
			this->Area_combo_box->MaxLength = 10;
			this->Area_combo_box->Name = L"Area_combo_box";
			this->Area_combo_box->Size = System::Drawing::Size(300, 33);
			this->Area_combo_box->TabIndex = 60;
			this->Area_combo_box->Tag = L"";
			this->Area_combo_box->ValueMember = L"1";
			this->Area_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &Schedule::Area_combo_box_SelectedIndexChanged);
			// 
			// City_combo_box
			// 
			this->City_combo_box->AllowDrop = true;
			this->City_combo_box->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"Lahore", L"Islamabad",
					L"Karachi", L"Quetta"
			});
			this->City_combo_box->BackColor = System::Drawing::Color::White;
			this->City_combo_box->DisplayMember = L"3";
			this->City_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->City_combo_box->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->City_combo_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->City_combo_box->FormattingEnabled = true;
			this->City_combo_box->ImeMode = System::Windows::Forms::ImeMode::On;
			this->City_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Lahore", L"Quetta", L"Karachi", L"Islamabad" });
			this->City_combo_box->Location = System::Drawing::Point(496, 287);
			this->City_combo_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->City_combo_box->MaxDropDownItems = 3;
			this->City_combo_box->MaxLength = 10;
			this->City_combo_box->Name = L"City_combo_box";
			this->City_combo_box->Size = System::Drawing::Size(300, 33);
			this->City_combo_box->TabIndex = 59;
			this->City_combo_box->Tag = L"";
			this->City_combo_box->ValueMember = L"1";
			this->City_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &Schedule::City_combo_box_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(113, 284);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(246, 41);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Select your City:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(113, 377);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 41);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Select your Area:";
			// 
			// budget
			// 
			this->budget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->budget->Location = System::Drawing::Point(496, 190);
			this->budget->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->budget->MaxLength = 10;
			this->budget->Multiline = true;
			this->budget->Name = L"budget";
			this->budget->Size = System::Drawing::Size(300, 41);
			this->budget->TabIndex = 53;
			this->budget->TextChanged += gcnew System::EventHandler(this, &Schedule::budget_TextChanged);
			// 
			// Generate_btn
			// 
			this->Generate_btn->BackColor = System::Drawing::Color::MediumPurple;
			this->Generate_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Generate_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Generate_btn->ForeColor = System::Drawing::Color::White;
			this->Generate_btn->Location = System::Drawing::Point(362, 648);
			this->Generate_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Generate_btn->Name = L"Generate_btn";
			this->Generate_btn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Generate_btn->Size = System::Drawing::Size(243, 95);
			this->Generate_btn->TabIndex = 56;
			this->Generate_btn->Text = L"GENERATE";
			this->Generate_btn->UseVisualStyleBackColor = false;
			this->Generate_btn->Click += gcnew System::EventHandler(this, &Schedule::Generate_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 25, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(236, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(414, 67);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Schedule Details";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(113, 477);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(320, 41);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Select schedule type :";
			this->label4->Click += gcnew System::EventHandler(this, &Schedule::label4_Click);
			// 
			// Schedule_type
			// 
			this->Schedule_type->AllowDrop = true;
			this->Schedule_type->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"Small", L"Medium", L"Large" });
			this->Schedule_type->BackColor = System::Drawing::Color::White;
			this->Schedule_type->DisplayMember = L"3";
			this->Schedule_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Schedule_type->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Schedule_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Schedule_type->FormattingEnabled = true;
			this->Schedule_type->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Schedule_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Daily", L"Weekly", L"Monthly" });
			this->Schedule_type->Location = System::Drawing::Point(496, 487);
			this->Schedule_type->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Schedule_type->MaxDropDownItems = 3;
			this->Schedule_type->MaxLength = 10;
			this->Schedule_type->Name = L"Schedule_type";
			this->Schedule_type->Size = System::Drawing::Size(300, 33);
			this->Schedule_type->TabIndex = 55;
			this->Schedule_type->Tag = L"";
			this->Schedule_type->ValueMember = L"1";
			this->Schedule_type->SelectedIndexChanged += gcnew System::EventHandler(this, &Schedule::Schedule_type_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(113, 190);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(291, 41);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Enter your budget :";
			// 
			// Schedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Schedule";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Schedule::InputData_Load);
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

	}
	private: System::Void History_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void FeedBack_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		NavigateToDashBoard();
	}
	private: System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		NavigateToDashBoard();
	}
	private: System::Void Generate_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ filePath = "UtilityTrafficRates.txt";
		String^ userCity = City_combo_box->Text;
		String^ userArea = Area_combo_box->Text;
		if ( String::IsNullOrWhiteSpace(userCity) || String::IsNullOrWhiteSpace(userArea) || String::IsNullOrWhiteSpace(budget->Text)|| String::IsNullOrWhiteSpace(Schedule_type->Text))
		{
			MessageBox::Show("Please enter full details in order to proceed !", "Invalid data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (Convert::ToInt32(budget->Text) < 1)
		{
			MessageBox::Show("Enter a valid Budget", "Invalid data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		DateTime now = DateTime::Now;
		String^ currentDay = now.DayOfWeek.ToString();
		bool costcheck = true;
		double totalBudget = Double::Parse(budget->Text);
		double wattRateforUseraArea = 0.0;
		double peakHourCostForUserArea = 0.0;
		try
		{
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
			String^ line;
			while ((line = reader->ReadLine()) != nullptr)
			{
				array<String^>^ rateStrings = line->Split(',');
				if (rateStrings->Length >= 4)
				{
					String^ CityName = rateStrings[0]->Trim();
					String^ AreaName = rateStrings[1]->Trim();
					double perWattCost = Convert::ToDouble(rateStrings[2]->Trim());
					double peakHourCost = Convert::ToDouble(rateStrings[3]->Trim());
					if (CityName == userCity && AreaName == userArea)
					{
						wattRateforUseraArea = perWattCost;
						peakHourCostForUserArea = peakHourCost;
					}
				}
			}
			reader->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Exception occurred: " + ex->Message + "\nStack Trace:\n" + ex->StackTrace, "Error");
		}
		if(Schedule_type->Text == "Daily")
		{
			String^ infilePath = "applianceData.txt";
			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(infilePath);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ inputStrings = line->Split(',');
					if (inputStrings->Length >= 5)
					{
						String^ applianceName = inputStrings[0]->Trim();
						double power = Convert::ToDouble(inputStrings[1]->Trim());
						int noofHour = Convert::ToInt32(inputStrings[2]->Trim()); 
						String^ startTimeStr = inputStrings[3]->Trim(); 
						String^ daysString = inputStrings[4]->Trim(); 
						int startTime = ConvertTo24HourFormat(startTimeStr);
						double kilowatt = power / 1000;
						int endTime = (startTime + noofHour) % 24;
						double offPeakCost = (kilowatt) * (wattRateforUseraArea);
						double peakCostcalculated = 0;
						double totalCost = 0;
						array<String^>^ daysArray = daysString->Split('.');
						bool runsToday = false;
						for each (String ^ day in daysArray)
						{
							if (day->Trim()->Equals(currentDay, StringComparison::OrdinalIgnoreCase))
							{
								runsToday = true;
								break;
							}
						}
						if (!runsToday)
						{
							continue;
						}
						for (int t = 0; t < noofHour; ++t)
						{
							int hour = (startTime + t) % 24; 
							double costForThisHour = 0;
							if (hour >= 18 && hour < 22) 
							{
								costForThisHour = offPeakCost + (offPeakCost * peakHourCostForUserArea);
							}
							else
							{
								costForThisHour = offPeakCost;
							}
							totalBudget -= costForThisHour;
							if (totalBudget < 0)
							{
								MessageBox::Show("Budget exceeded!", "Warning");
								costcheck = false;
								break;
							}
						}
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Exception occurred: " + ex->Message + "\nStack Trace:\n" + ex->StackTrace, "Error");
			}
			if (costcheck == true)
			{
				String^ filePath = "applianceData.txt";
				if (!File::Exists(filePath))
				{
					MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				if (scheduleArray != nullptr)
				{
					for (int i = 0; i < scheduleArray->GetLength(0); i++) 
					{
						for (int j = 0; j < scheduleArray->GetLength(1); j++) 
						{
							scheduleArray[i, j] = nullptr;
						}
					}
				}
				array<String^>^ timeLabels = gcnew array<String^> {
					"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M."
				};
				int numAppliances = 0;
				StreamReader^ reader = gcnew StreamReader(filePath);
				while (!reader->EndOfStream)
				{
					reader->ReadLine();
					numAppliances++;
				}
				reader->Close();
				scheduleArray = gcnew array<String^, 2>(25, numAppliances + 1);
				scheduleArray[0, 1] = "Remaining Budget :";
				scheduleArray[0, 2] = Convert::ToString(Convert::ToInt32(totalBudget));
				for (int i = 1; i <= 24; i++)
				{
					scheduleArray[i, 0] = timeLabels[i - 1];
				}
				reader = gcnew StreamReader(filePath);
				int applianceIndex = 1;
				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();
					array<String^>^ tokens = line->Split(',');
					if (tokens->Length < 5)
					{
						MessageBox::Show("Invalid file format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						reader->Close();
						return;
					}
					String^ applianceName = tokens[0];
					int usageHours = Int32::Parse(tokens[2]);
					String^ preferredTime = tokens[3];
					String^ daysString = tokens[4];
					array<String^>^ daysArray = daysString->Split('.');
					bool runsToday = false;
					for each (String ^ day in daysArray)
					{
						if (day->Trim()->Equals(currentDay, StringComparison::OrdinalIgnoreCase))
						{
							runsToday = true;
							break;
						}
					}
					if (!runsToday)
					{
						continue;
					}
					try
					{
						int startIndex = GetTimeIndex(preferredTime, timeLabels);
						//scheduleArray[0, applianceIndex] = applianceName;
						for (int i = 0; i < usageHours; i++)
						{
							int rowIndex = (startIndex + i - 1) % 24 + 1; 
							scheduleArray[rowIndex, applianceIndex] = applianceName;
						}
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message, "Time Parsing Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						reader->Close();
						return;
					}

					applianceIndex++;
				}
				reader->Close();
				WriteScheduleToFile();
				ScheduleShow^ scheduleShowObj = gcnew ScheduleShow;
				scheduleShowObj->Show();
			}
			else
			{
				MessageBox::Show("Budget exceeded! Cannot process schedule.", "Budget Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (Schedule_type->Text == "Weekly")
		{
			String^ infilePath = "applianceData.txt";
			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(infilePath);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ inputStrings = line->Split(',');
					if (inputStrings->Length >= 5)
					{
						String^ applianceName = inputStrings[0]->Trim();
						double power = Convert::ToDouble(inputStrings[1]->Trim());
						int noofHour = Convert::ToInt32(inputStrings[2]->Trim()); 
						String^ startTimeStr = inputStrings[3]->Trim(); 
						String^ daysString = inputStrings[4]->Trim();
						array<String^>^ daysArray = daysString->Split('.');
						int numEntries = daysArray->Length;
						int startTime = ConvertTo24HourFormat(startTimeStr);
						double kilowatt = power / 1000;
						int endTime = (startTime + noofHour) % 24;
						double offPeakCost = (kilowatt) * (wattRateforUseraArea);
						double peakCostcalculated = 0;
						double totalCost = 0;
						for (int t = 0; t < noofHour; ++t)
						{
							int hour = (startTime + t) % 24;
							double costForThisHour = 0;
							if (hour >= 18 && hour < 22) 
							{
								costForThisHour = offPeakCost + (offPeakCost * peakHourCostForUserArea);
							}
							else
							{
								costForThisHour = offPeakCost;
							}
							costForThisHour = costForThisHour*numEntries;
							totalBudget -= costForThisHour;
							if (totalBudget < 0)
							{
								MessageBox::Show("Budget exceeded!", "Warning");
								costcheck = false;
								break;
							}
						}
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Exception occurred: " + ex->Message + "\nStack Trace:\n" + ex->StackTrace, "Error");
			}
			if (costcheck == true)
			{
				String^ filePath = "applianceData.txt";
				if (!File::Exists(filePath))
				{
					MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				if (scheduleArray != nullptr)
				{
					for (int i = 0; i < scheduleArray->GetLength(0); i++) {
						for (int j = 0; j < scheduleArray->GetLength(1); j++) {
							scheduleArray[i, j] = nullptr;
						}
					}
				}
				array<String^>^ timeLabels = gcnew array<String^>
				{
					"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M.",
						"1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.", "6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.",
						"10 P.M.", "11 P.M.", "12 P.M.", "1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.",
						"6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.", "10 A.M.", "11 A.M.", "12 A.M."
				};
				int totalEntries = 169;
				int repetitionsPerDay = 24;
				array<String^>^ dynamicDayLabels = GenerateDynamicDayLabels(totalEntries, repetitionsPerDay);
				int numAppliances = 0;
				StreamReader^ reader = gcnew StreamReader(filePath);
				while (!reader->EndOfStream)
				{
					reader->ReadLine();
					numAppliances++;
				}
				reader->Close(); 
				scheduleArray = gcnew array<String^, 2>(169, numAppliances + 2);
				scheduleArray[0, 1] = "Remaining Budget :";
				scheduleArray[0, 2] = Convert::ToString(Convert::ToInt32(totalBudget));
				for (int i = 1; i <= 24*7; i++)
				{
					scheduleArray[i, 1] = timeLabels[i - 1];
				}
				for (int i = 1; i <= 24 * 7; i++)
				{
					scheduleArray[i, 0] = dynamicDayLabels[i - 1];
				}
				reader = gcnew StreamReader(filePath);
				int applianceIndex = 2;
				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();
					array<String^>^ tokens = line->Split(',');
					if (tokens->Length < 5)
					{
						MessageBox::Show("Invalid file format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						reader->Close();
						return;
					}
					String^ applianceName = tokens[0];
					int usageHours = Int32::Parse(tokens[2]);
					String^ preferredTime = tokens[3];
					String^ daysString = tokens[4]; 
					array<String^>^ daysArray = daysString->Split('.');
					int startindex;
					for each (String ^ day in daysArray)
					{
						int dayNumber = GetDayNumber(day);
						try
						{
							int startIndex = GetTimeIndex(preferredTime, timeLabels);
							startindex = startIndex + 24 * dayNumber;
							for (int i = 0; i < usageHours; i++)
							{
								if (startindex < 169)
								{
									scheduleArray[startindex, applianceIndex] = applianceName;
									startindex++;
								}
							}
						}
						catch (Exception^ ex)
						{
							MessageBox::Show(ex->Message, "Time Parsing Error "+startindex, MessageBoxButtons::OK, MessageBoxIcon::Error);
							reader->Close();
							return;
						}
					}
					applianceIndex++;
				}
				reader->Close();
				WriteScheduleToFile();
				ScheduleShow^ scheduleShowObj = gcnew ScheduleShow;
				scheduleShowObj->Show();
				
			}
			else
			{
				MessageBox::Show("Budget exceeded! Cannot process schedule.", "Budget Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
        }
		else if (Schedule_type->Text == "Monthly")
		{
			DateTime now = DateTime::Now;
			int year = now.Year;
			int month = now.Month;
			array<String^>^ daysOfWeek = gcnew array<String^>{ "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
			array<int>^ dayOccurrences = gcnew array<int>(7);
			for (int i = 0; i < 7; ++i)
			{
				dayOccurrences[i] = CalculateDayOccurrences(year, month, daysOfWeek[i]);
			}
			String^ infilePath = "applianceData.txt";
			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(infilePath);
				String^ line;

				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ inputStrings = line->Split(',');
					if (inputStrings->Length >= 5)
					{
						String^ applianceName = inputStrings[0]->Trim();
						double power = Convert::ToDouble(inputStrings[1]->Trim());
						int noofHour = Convert::ToInt32(inputStrings[2]->Trim());
						String^ startTimeStr = inputStrings[3]->Trim();
						String^ daysString = inputStrings[4]->Trim();
						array<String^>^ daysArray = daysString->Split('.');
						//int numEntries = daysArray->Length;

						int startTime = ConvertTo24HourFormat(startTimeStr);
						double kilowatt = power / 1000;
						double offPeakCost = (kilowatt) * (wattRateforUseraArea);
						double totalCost = 0;

						for each (String ^ day in daysArray)
						{
							int dayIndex = Array::IndexOf(daysOfWeek, day->Trim());
							if (dayIndex == -1) continue; // Skip invalid days

							int numOccurrences = dayOccurrences[dayIndex]; // Get occurrences for the month

							for (int t = 0; t < noofHour; ++t)
							{
								int hour = (startTime + t) % 24;
								double costForThisHour = 0;

								if (hour >= 18 && hour < 22) // Peak hours
								{
									costForThisHour = offPeakCost + (offPeakCost * peakHourCostForUserArea);
								}
								else
								{
									costForThisHour = offPeakCost;
								}

								// Multiply by occurrences
								costForThisHour *= numOccurrences;
								// Deduct from budget
								totalBudget -= costForThisHour;
								
								if (totalBudget < 0)
								{
									MessageBox::Show("Budget exceeded!", "Warning");
									costcheck = false;
									return;
								}
							}
						}
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Exception occurred: " + ex->Message + "\nStack Trace:\n" + ex->StackTrace, "Error");
			}

			if (costcheck == true)
			{
				int currentYear = DateTime::Now.Year;
				int currentMonth = DateTime::Now.Month;
				int daysInMonth = DateTime::DaysInMonth(currentYear, currentMonth);
				int numRows = 0;

				// Determine the number of rows for the scheduleArray
				if (daysInMonth == 30) {
					numRows = 721;
				}
				else if (daysInMonth == 31) {
					numRows = 745;
				}
				else if (daysInMonth == 28) {
					numRows = 673;
				}
				else {
					numRows = 697;
				}

				int numAppliances = 0;
				StreamReader^ reader = gcnew StreamReader(infilePath);
				while (!reader->EndOfStream)
				{
					reader->ReadLine();
					numAppliances++;
				}
				reader->Close();
				// Initialize the schedule array
				scheduleArray = gcnew array<String^, 2>(numRows, numAppliances + 3);
				// Get the day of the week for the 1st day of the current month
				DateTime today = DateTime::Now;
				DateTime firstDayOfMonth = DateTime(today.Year, today.Month, 1);
				int firstDayIndex = (int)firstDayOfMonth.DayOfWeek; 
				array<String^>^ DaysOfWeek = gcnew array<String^> { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

				array<String^>^ dates = gcnew array<String^>(daysInMonth * 24); // Date column
				array<String^>^ dayNames = gcnew array<String^>(daysInMonth * 24); // Day name column
				array<String^>^ timeSlots = gcnew array<String^>(daysInMonth * 24); // Time slot column

				// Custom time labels
				array<String^>^ timeLabels = gcnew array<String^> {
					"1 A.M.", "2 A.M.", "3 A.M.", "4 A.M.", "5 A.M.", "6 A.M.", "7 A.M.", "8 A.M.", "9 A.M.",
						"10 A.M.", "11 A.M.", "12 P.M.", "1 P.M.", "2 P.M.", "3 P.M.", "4 P.M.", "5 P.M.",
						"6 P.M.", "7 P.M.", "8 P.M.", "9 P.M.", "10 P.M.", "11 P.M.", "12 A.M."
				};

				// Generate schedule entries for each day and hour
				for (int day = 1; day <= daysInMonth; day++)
				{
					// Calculate the day of the week for the current day
					int currentDayIndex = (firstDayIndex + (day - 1)) % 7;

					// Generate entries for 24 hours
					for (int hour = 0; hour < 24; hour++)
					{
						int index = (day - 1) * 24 + hour;

						// Fill the columns
						dates[index] = day.ToString(); // Date
						dayNames[index] = DaysOfWeek[currentDayIndex]; // Day Name
						timeSlots[index] = timeLabels[hour]; // Custom Time Slot Labels
					}
				}
				// Populate the schedule array
				for (int i = 1; i < daysInMonth * 24 + 1; i++)
				{
					scheduleArray[i, 0] = dates[i-1];     // Date column
					scheduleArray[i, 1] = dayNames[i-1]; // Day Name column
					scheduleArray[i, 2] = timeSlots[i-1]; // Time Slot column
				}
				// Adding appliances to schedule
				StreamReader^ Reader = gcnew StreamReader("applianceData.txt");
				int applianceIndex = 3; // Start column index for appliances (column 0-2 are for Date, Day, and Time)

				while (!Reader->EndOfStream) {
					String^ line = Reader->ReadLine();
					array<String^>^ inputStrings = line->Split(',');
					if (inputStrings->Length >= 5) {
						String^ applianceName = inputStrings[0]->Trim();
						String^ startTime = inputStrings[3]->Trim(); // Get the start time
						int noofHour = Convert::ToInt32(inputStrings[2]->Trim());
						String^ daysString = inputStrings[4]->Trim();
						array<String^>^ daysArray = daysString->Split('.');

						int startIndex;
						try {
							startIndex = GetTimeIndex(startTime, timeLabels); // Get the start time index
						}
						catch (Exception^ ex) {
							MessageBox::Show(ex->Message, "Error");
							continue; // Skip invalid time
						}

						for each (String ^ day in daysArray)
						{
							int dayIndex = Array::IndexOf(DaysOfWeek, day->Trim());
							if (dayIndex == -1) continue; // Skip invalid days

							for (int d = 1; d <= daysInMonth; d++) {
								int currentDayIndex = (firstDayIndex + (d - 1)) % 7;
								if (currentDayIndex == dayIndex) {
									for (int h = 0; h < noofHour; h++) {
										int row = (d - 1) * 24 + (startIndex - 1) + h; // Calculate row index
										if (row >= numRows || row < (d - 1) * 24) break; 

										// Add the appliance name to its dedicated column
										scheduleArray[row, applianceIndex] = applianceName;
									}
								}
							}
						}
						applianceIndex++; // Move to the next column for the next appliance
						// Ensure applianceIndex remains within bounds if needed
					}
				}
				scheduleArray[0, 1] = "Remaining Budget :";
				scheduleArray[0, 2] = Convert::ToString(Convert::ToInt32(totalBudget));
				Reader->Close();
				WriteScheduleToFile();
				ScheduleShow^ scheduleShow = gcnew ScheduleShow;
				scheduleShow->Show();
			}
			else
			{
				MessageBox::Show("Budget exceeded! Cannot process schedule.", "Budget Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void List_of_applianes_txtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Schedule_type_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void budget_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void City_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateAreaComboBox();
	}
	private: System::Void Area_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

#endif // !Schedule_H