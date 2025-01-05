#pragma once

//#include<iostream>
//#include<fstream>

using namespace std;

namespace ElectricityConsumptionPlannerSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for CreateAccount
	/// </summary>
	public ref class CreateAccount : public System::Windows::Forms::Form
	{
	public:
		CreateAccount(void)
		{
			InitializeComponent();
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
		~CreateAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::LinkLabel^ Create_account_link;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ user_name_txtbx;
	private: System::Windows::Forms::TextBox^ user_password_txtbx;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateAccount::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Create_account_link = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->user_name_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->user_password_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-35, -40);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1405, 789);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CreateAccount::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(878, 103);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(371, 523);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// Create_account_link
			// 
			this->Create_account_link->ActiveLinkColor = System::Drawing::Color::Blue;
			this->Create_account_link->AutoSize = true;
			this->Create_account_link->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Create_account_link->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->Create_account_link->LinkColor = System::Drawing::Color::White;
			this->Create_account_link->Location = System::Drawing::Point(976, 592);
			this->Create_account_link->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Create_account_link->Name = L"Create_account_link";
			this->Create_account_link->Size = System::Drawing::Size(161, 13);
			this->Create_account_link->TabIndex = 2;
			this->Create_account_link->TabStop = true;
			this->Create_account_link->Text = L"Already have an account\? Login";
			this->Create_account_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CreateAccount::Login_back_link_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(1016, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 14);
			this->label1->TabIndex = 4;
			this->label1->Text = L"USERNAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &CreateAccount::label1_Click);
			// 
			// user_name_txtbx
			// 
			this->user_name_txtbx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->user_name_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_name_txtbx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name_txtbx->ForeColor = System::Drawing::SystemColors::Window;
			this->user_name_txtbx->Location = System::Drawing::Point(926, 274);
			this->user_name_txtbx->MaxLength = 20;
			this->user_name_txtbx->Multiline = true;
			this->user_name_txtbx->Name = L"user_name_txtbx";
			this->user_name_txtbx->Size = System::Drawing::Size(266, 30);
			this->user_name_txtbx->TabIndex = 5;
			this->user_name_txtbx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->user_name_txtbx->TextChanged += gcnew System::EventHandler(this, &CreateAccount::user_name_txtbx_TextChanged);
			// 
			// user_password_txtbx
			// 
			this->user_password_txtbx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->user_password_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_password_txtbx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_password_txtbx->ForeColor = System::Drawing::SystemColors::Window;
			this->user_password_txtbx->Location = System::Drawing::Point(926, 367);
			this->user_password_txtbx->MaxLength = 20;
			this->user_password_txtbx->Multiline = true;
			this->user_password_txtbx->Name = L"user_password_txtbx";
			this->user_password_txtbx->Size = System::Drawing::Size(266, 29);
			this->user_password_txtbx->TabIndex = 6;
			this->user_password_txtbx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1016, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 14);
			this->label2->TabIndex = 7;
			this->label2->Text = L"PASSWORD";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(604, 271);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 84);
			this->button1->TabIndex = 8;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(904, 457);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(312, 97);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateAccount::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::DarkBlue;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(1285, 31);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 51);
			this->button3->TabIndex = 11;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CreateAccount::button3_Click);
			// 
			// CreateAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->user_password_txtbx);
			this->Controls->Add(this->user_name_txtbx);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Create_account_link);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CreateAccount";
			this->Text = L"CreateAccount";
			this->Load += gcnew System::EventHandler(this, &CreateAccount::CreateAccount_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreateAccount_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Login_back_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user_name_txtbx->Text == "" || user_password_txtbx->Text == "")
		{
			MessageBox::Show("Please Enter the Complete Details in order to proceed further!", "Incomplete Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			String^ username = user_name_txtbx->Text;
			String^ password = user_password_txtbx->Text;

			bool found = false;
			String^ userPassLine = String::Concat(username, ",", password);

			try
			{
				StreamReader^ file = gcnew System::IO::StreamReader("UserAccounts.txt");

				String^ line;
				while ((line = file->ReadLine()) != nullptr)
				{
					int commaIndex = line->IndexOf(',');
					String^ substringBeforeComma = line->Substring(0, commaIndex);
					if (substringBeforeComma->Equals(username))
					{
						found = true;
						break;
					}
				}

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

			if (found == true)
			{
				MessageBox::Show("Username Already exists!!", "Data Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				try
				{
					System::IO::StreamWriter^ fileWriter = gcnew System::IO::StreamWriter("UserAccounts.txt", true);
					fileWriter->WriteLine(userPassLine);
					fileWriter->Close();
					MessageBox::Show("New user account created successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (System::Exception^)
				{
					MessageBox::Show("An error occurred while writing to the file.", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->Close();
			}

		}
	}

	private: System::Void user_name_txtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};

}