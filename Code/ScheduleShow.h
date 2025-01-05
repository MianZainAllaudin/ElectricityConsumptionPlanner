#pragma once

namespace ElectricityConsumptionPlannerSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	public ref class ScheduleShow : public System::Windows::Forms::Form
	{
	public:
		ScheduleShow(void)
		{
			InitializeComponent();
			this->Text = "";
			this->ControlBox = false;
		}

	protected:
		~ScheduleShow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ Back_btn;
		System::Windows::Forms::Button^ ExcelExport_btn;
		System::Windows::Forms::Button^ PDFExport_btn;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScheduleShow::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());



			// PDF Export Button
			this->PDFExport_btn = (gcnew System::Windows::Forms::Button());
			this->PDFExport_btn->Text = "Export to Excel";
			this->PDFExport_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PDFExport_btn->ForeColor = System::Drawing::Color::White;
			this->PDFExport_btn->BackColor = System::Drawing::Color::DarkGreen;
			this->PDFExport_btn->Location = System::Drawing::Point(900, 10);
			this->PDFExport_btn->Size = System::Drawing::Size(100, 30);
			this->PDFExport_btn->Click += gcnew System::EventHandler(this, &ScheduleShow::ExportToExcel_btn_Click);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();

			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1088, 472);
			this->dataGridView1->TabIndex = 0;

			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumPurple;
			this->panel1->Controls->Add(this->ExcelExport_btn);
			this->panel1->Controls->Add(this->PDFExport_btn);
			this->panel1->Controls->Add(this->Back_btn);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1088, 62);
			this->panel1->TabIndex = 1;

			// 
			// Back_btn
			// 
			this->Back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back_btn->ForeColor = System::Drawing::Color::MediumPurple;
			this->Back_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back_btn.Image")));
			this->Back_btn->Location = System::Drawing::Point(1031, 4);
			this->Back_btn->Margin = System::Windows::Forms::Padding(2);
			this->Back_btn->Name = L"Back_btn";
			this->Back_btn->Size = System::Drawing::Size(52, 54);
			this->Back_btn->TabIndex = 27;
			this->Back_btn->UseVisualStyleBackColor = true;
			this->Back_btn->Click += gcnew System::EventHandler(this, &ScheduleShow::Back_btn_Click);

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Schedule :";

			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumPurple;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 537);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1088, 10);
			this->panel2->TabIndex = 2;

			// 
			// ScheduleShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 547);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ScheduleShow";
			this->Text = L"ScheduleShow";
			this->Load += gcnew System::EventHandler(this, &ScheduleShow::ScheduleShow_Load);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion

	private:
		System::Void ScheduleShow_Load(System::Object^ sender, System::EventArgs^ e)
		{
			String^ filePath = "scheduleOutput.txt";
			PopulateDataGridFromFile(filePath);
		}

		void PopulateDataGridFromFile(String^ filePath)
		{
			try
			{
				array<String^>^ lines = File::ReadAllLines(filePath);

				if (lines->Length > 0)
				{
					array<String^>^ headers = lines[0]->Split(',');
					for (int i = 0; i < headers->Length; i++)
					{
						headers[i] = headers[i]->Trim();
					}

					for each (String ^ header in headers)
					{
						this->dataGridView1->Columns->Add(header, header);
					}
				}

				for (int i = 1; i < lines->Length; i++)
				{
					array<String^>^ cells = lines[i]->Split(',');
					for (int j = 0; j < cells->Length; j++)
					{
						cells[j] = cells[j]->Trim();
					}
					this->dataGridView1->Rows->Add(cells);
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error reading file: " + ex->Message, "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void Back_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}



		System::Void ExportToExcel_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
				saveFileDialog->Filter = "CSV Files|*.csv";
				saveFileDialog->Title = "Export Schedule to CSV";
				saveFileDialog->FileName = "Schedule_Export.csv";

				if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					// Use StreamWriter with proper encoding
					System::Text::StringBuilder^ csvContent = gcnew System::Text::StringBuilder();

					// Create header row
					array<String^>^ headerCells = gcnew array<String^>(dataGridView1->Columns->Count);
					for (int i = 0; i < dataGridView1->Columns->Count; i++)
					{
						// Wrap each header in quotes to handle potential commas
						headerCells[i] = "\"" + dataGridView1->Columns[i]->HeaderText + "\"";
					}
					csvContent->AppendLine(String::Join(",", headerCells));

					// Write data rows
					for (int rowIndex = 0; rowIndex < dataGridView1->Rows->Count - 1; rowIndex++)
					{
						array<String^>^ rowCells = gcnew array<String^>(dataGridView1->Columns->Count);

						for (int colIndex = 0; colIndex < dataGridView1->Columns->Count; colIndex++)
						{
							// Get cell value, convert to string, handle null
							String^ cellValue = dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value
								? dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value->ToString()
								: "";

							// Escape quotes and wrap in quotes to handle commas and special characters
							cellValue = cellValue->Replace("\"", "\"\"");
							rowCells[colIndex] = "\"" + cellValue + "\"";
						}

						// Add the row to CSV content
						csvContent->AppendLine(String::Join(",", rowCells));
					}

					// Write to file with UTF-8 encoding
					System::IO::File::WriteAllText(saveFileDialog->FileName,
						csvContent->ToString(),
						System::Text::Encoding::UTF8);

					MessageBox::Show("Schedule exported successfully!",
						"Export Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error exporting: " + ex->Message,
					"Export Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	
	};
   
}