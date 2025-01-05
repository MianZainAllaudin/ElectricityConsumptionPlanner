#pragma once

#ifndef login_H
#define login_H

#include"DashBoard.h"
#include"CreateAccount.h"


#endif // !login_H


namespace ElectricityConsumptionPlannerSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ user_password_txtbx;

	private: System::Windows::Forms::TextBox^ user_name_txtbx;




	private: System::Windows::Forms::Button^ Login_btn;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->user_password_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->user_name_txtbx = (gcnew System::Windows::Forms::TextBox());
			this->Login_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(884, 105);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(379, 533);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click_1);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Blue;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(954, 573);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(223, 15);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Don\'t have an account\?  Create Account";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-55, -61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1440, 830);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Login::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1023, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PASSWORD";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click_3);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(1023, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"USERNAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// user_password_txtbx
			// 
			this->user_password_txtbx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->user_password_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_password_txtbx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_password_txtbx->ForeColor = System::Drawing::SystemColors::Window;
			this->user_password_txtbx->Location = System::Drawing::Point(934, 367);
			this->user_password_txtbx->MaxLength = 12;
			this->user_password_txtbx->Multiline = true;
			this->user_password_txtbx->Name = L"user_password_txtbx";
			this->user_password_txtbx->PasswordChar = '*';
			this->user_password_txtbx->Size = System::Drawing::Size(258, 32);
			this->user_password_txtbx->TabIndex = 2;
			this->user_password_txtbx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->user_password_txtbx->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// user_name_txtbx
			// 
			this->user_name_txtbx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->user_name_txtbx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_name_txtbx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name_txtbx->ForeColor = System::Drawing::SystemColors::Window;
			this->user_name_txtbx->Location = System::Drawing::Point(934, 274);
			this->user_name_txtbx->MaxLength = 20;
			this->user_name_txtbx->Multiline = true;
			this->user_name_txtbx->Name = L"user_name_txtbx";
			this->user_name_txtbx->Size = System::Drawing::Size(258, 34);
			this->user_name_txtbx->TabIndex = 1;
			this->user_name_txtbx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->user_name_txtbx->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// Login_btn
			// 
			this->Login_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->Login_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Login_btn->FlatAppearance->BorderSize = 0;
			this->Login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->Login_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->Login_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Login_btn.Image")));
			this->Login_btn->Location = System::Drawing::Point(901, 462);
			this->Login_btn->Margin = System::Windows::Forms::Padding(2);
			this->Login_btn->Name = L"Login_btn";
			this->Login_btn->Size = System::Drawing::Size(330, 79);
			this->Login_btn->TabIndex = 9;
			this->Login_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->Login_btn->UseVisualStyleBackColor = false;
			this->Login_btn->Click += gcnew System::EventHandler(this, &Login::Login_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1291, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 49);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click_1);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Login_btn);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->user_password_txtbx);
			this->Controls->Add(this->user_name_txtbx);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		CreateAccount^ createAccountForm = gcnew CreateAccount;
		createAccountForm->Show();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Login_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user_name_txtbx->Text == "" || user_password_txtbx->Text == "")
		{
			MessageBox::Show("Please Enter the Complete Details in order to proceed further!", "Incomplete Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			String^ username = user_name_txtbx->Text;
			String^ password = user_password_txtbx->Text;
			String^ userLine = String::Concat(username, ",", password);

			bool found = false;

			try
			{
				System::IO::StreamReader^ filereader = gcnew System::IO::StreamReader("UserAccounts.txt");

				String^ fileLine;

				while ((fileLine = filereader->ReadLine()) != nullptr)
				{
					if (fileLine->Equals(userLine))
					{
						found = true;
						break;
					}
				}

				filereader->Close();

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

			if (found == false)
			{
				MessageBox::Show("Dont have an Account.Make an Account first in order to proceed !", "Account Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (found == true)
			{
				MessageBox::Show("Successfully Logged into the Account !", "Login Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
				DashBoard^ dashBoardObj = gcnew DashBoard;
				dashBoardObj->Show();
			}

		}

	}
	private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label2_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}