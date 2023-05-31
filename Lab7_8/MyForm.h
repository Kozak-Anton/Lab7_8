#pragma once
#include "lib.h"
#include <msclr\marshal_cppstd.h>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		FligthLog* data_grid_contents;

		MyForm(FligthLog* new_data_grid_contents)
		{
			InitializeComponent();
			data_grid_contents = new_data_grid_contents;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDestination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnTime;
	private: System::Windows::Forms::TextBox^ textBoxNumber;
	private: System::Windows::Forms::Label^ labelNumber;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonFind;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::TextBox^ textBoxTime;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::TextBox^ textBoxDate;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::TextBox^ textBoxDestination;
	private: System::Windows::Forms::Label^ labelDestination;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dataGridViewLog;
	private: System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1;
	private: System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->ColumnNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDestination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonFind = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->labelNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDestination = (gcnew System::Windows::Forms::TextBox());
			this->labelDestination = (gcnew System::Windows::Forms::Label());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->dataGridViewLog = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(dataGridViewLog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewLog
			// 
			this->dataGridViewLog->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewLog->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewLog->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewLog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			dataGridViewLog->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewLog->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewLog->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnNumber,
					this->ColumnDestination, this->ColumnDate, this->ColumnTime
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewLog->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewLog->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridViewLog->Location = System::Drawing::Point(0, 200);
			this->dataGridViewLog->MinimumSize = System::Drawing::Size(800, 150);
			this->dataGridViewLog->Name = L"dataGridViewLog";
			this->dataGridViewLog->ReadOnly = true;
			this->dataGridViewLog->RowHeadersVisible = false;
			this->dataGridViewLog->RowHeadersWidth = 4;
			this->dataGridViewLog->RowTemplate->Height = 24;
			this->dataGridViewLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewLog->Size = System::Drawing::Size(1060, 402);
			this->dataGridViewLog->TabIndex = 0;
			// 
			// ColumnNumber
			// 
			this->ColumnNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnNumber->HeaderText = L"Number";
			this->ColumnNumber->MinimumWidth = 6;
			this->ColumnNumber->Name = L"ColumnNumber";
			this->ColumnNumber->ReadOnly = true;
			this->ColumnNumber->Width = 200;
			// 
			// ColumnDestination
			// 
			this->ColumnDestination->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnDestination->HeaderText = L"Destination";
			this->ColumnDestination->MinimumWidth = 6;
			this->ColumnDestination->Name = L"ColumnDestination";
			this->ColumnDestination->ReadOnly = true;
			this->ColumnDestination->Width = 200;
			// 
			// ColumnDate
			// 
			this->ColumnDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnDate->HeaderText = L"Date";
			this->ColumnDate->MinimumWidth = 6;
			this->ColumnDate->Name = L"ColumnDate";
			this->ColumnDate->ReadOnly = true;
			this->ColumnDate->Width = 200;
			// 
			// ColumnTime
			// 
			this->ColumnTime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnTime->HeaderText = L"Time";
			this->ColumnTime->MinimumWidth = 6;
			this->ColumnTime->Name = L"ColumnTime";
			this->ColumnTime->ReadOnly = true;
			this->ColumnTime->Width = 200;
			// 
			// errorProvider1
			// 
			this->errorProvider1->BlinkRate = 100;
			this->errorProvider1->BlinkStyle = System::Windows::Forms::ErrorBlinkStyle::NeverBlink;
			this->errorProvider1->ContainerControl = this;
			this->errorProvider1->RightToLeft = true;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(45, 20);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(200, 60);
			this->buttonAdd->TabIndex = 1;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->Location = System::Drawing::Point(297, 20);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(200, 60);
			this->buttonDelete->TabIndex = 2;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonFind
			// 
			this->buttonFind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFind->Location = System::Drawing::Point(545, 20);
			this->buttonFind->Name = L"buttonFind";
			this->buttonFind->Size = System::Drawing::Size(200, 60);
			this->buttonFind->TabIndex = 3;
			this->buttonFind->Text = L"Find";
			this->buttonFind->UseVisualStyleBackColor = true;
			this->buttonFind->Click += gcnew System::EventHandler(this, &MyForm::buttonFind_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(803, 20);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(200, 60);
			this->buttonClear->TabIndex = 4;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// labelNumber
			// 
			this->labelNumber->AutoSize = true;
			this->labelNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber->Location = System::Drawing::Point(40, 113);
			this->labelNumber->Name = L"labelNumber";
			this->labelNumber->Size = System::Drawing::Size(81, 25);
			this->labelNumber->TabIndex = 5;
			this->labelNumber->Text = L"Number";
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNumber->Location = System::Drawing::Point(45, 141);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(200, 38);
			this->textBoxNumber->TabIndex = 6;
			// 
			// textBoxDestination
			// 
			this->textBoxDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxDestination->Location = System::Drawing::Point(297, 141);
			this->textBoxDestination->Name = L"textBoxDestination";
			this->textBoxDestination->Size = System::Drawing::Size(200, 38);
			this->textBoxDestination->TabIndex = 8;
			// 
			// labelDestination
			// 
			this->labelDestination->AutoSize = true;
			this->labelDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDestination->Location = System::Drawing::Point(292, 113);
			this->labelDestination->Name = L"labelDestination";
			this->labelDestination->Size = System::Drawing::Size(109, 25);
			this->labelDestination->TabIndex = 7;
			this->labelDestination->Text = L"Destination";
			// 
			// textBoxDate
			// 
			this->textBoxDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDate->Location = System::Drawing::Point(545, 141);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(200, 38);
			this->textBoxDate->TabIndex = 10;
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->Location = System::Drawing::Point(540, 113);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(196, 25);
			this->labelDate->TabIndex = 9;
			this->labelDate->Text = L"Date (DD.MM.YYYY)";
			// 
			// textBoxTime
			// 
			this->textBoxTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTime->Location = System::Drawing::Point(803, 141);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(140, 38);
			this->textBoxTime->TabIndex = 12;
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->Location = System::Drawing::Point(798, 113);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(142, 25);
			this->labelTime->TabIndex = 11;
			this->labelTime->Text = L"Time (HH.MM)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 600);
			this->Controls->Add(this->textBoxTime);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->textBoxDestination);
			this->Controls->Add(this->labelDestination);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->labelNumber);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonFind);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(dataGridViewLog);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(dataGridViewLog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
		}

#pragma endregion
		FligthEntrie make_FlightEntrie() {
			std::string number = msclr::interop::marshal_as<std::string>(textBoxNumber->Text);
			std::string destination = msclr::interop::marshal_as<std::string>(textBoxDestination->Text);
			std::string date = msclr::interop::marshal_as<std::string>(textBoxDate->Text);
			std::string time = msclr::interop::marshal_as<std::string>(textBoxTime->Text);
			FligthEntrie new_entrie(number, destination, date, time);
			return new_entrie;
		}

		void set_input_errors(FormatError& err) {
			if (err.number_error) errorProvider1->SetError(textBoxNumber, gcnew String(err.number_details.c_str()));
			if (err.destination_error) errorProvider1->SetError(textBoxDestination, gcnew String(err.destination_details.c_str()));
			if (err.date_error) errorProvider1->SetError(textBoxDate, gcnew String(err.date_details.c_str()));
			if (err.time_error) errorProvider1->SetError(textBoxTime, gcnew String(err.time_details.c_str()));
		}

		void find_rows(int& search_res, int* search_pos) {
			bool match;
			for (int i = 0; i < dataGridViewLog->Rows->Count - 1; ++i) {
				match = false;
				if (System::String::IsNullOrEmpty(textBoxNumber->Text) || textBoxNumber->Text == dataGridViewLog->Rows[i]->Cells[0]->Value->ToString()) {
					match = true;
				}
				if (match != false && (System::String::IsNullOrEmpty(textBoxDestination->Text) || textBoxDestination->Text == dataGridViewLog->Rows[i]->Cells[1]->Value->ToString())) {
					match = true;
				}
				else match = false;
				if (match != false && (System::String::IsNullOrEmpty(textBoxDate->Text) || textBoxDate->Text == dataGridViewLog->Rows[i]->Cells[2]->Value->ToString())) {
					match = true;
				}
				else match = false;
				if (match != false && (System::String::IsNullOrEmpty(textBoxTime->Text) || textBoxTime->Text == dataGridViewLog->Rows[i]->Cells[3]->Value->ToString())) {
					match = true;
				}
				else match = false;

				if (match) search_pos[search_res++] = i;
			}
		}

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dataGridViewLog->Rows->Count - 1; ++i) dataGridViewLog->Rows[i]->Visible = true;
		errorProvider1->Clear();
		FligthEntrie current = make_FlightEntrie();

		try {
			current.format_test();
		}
		catch (FormatError& err) {
			set_input_errors(err);
			return;
		}
		current.add_to_table(dataGridViewLog);

	}

	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dataGridViewLog->Rows->Count - 1; ++i) dataGridViewLog->Rows[i]->Visible = true;
		if (dataGridViewLog->SelectedCells->Count > 0)
		{
			dataGridViewLog->Rows->RemoveAt(dataGridViewLog->SelectedCells[0]->RowIndex);
		}
	}
	private: System::Void buttonFind_Click(System::Object^ sender, System::EventArgs^ e) {
		errorProvider1->Clear();
		FligthEntrie current = make_FlightEntrie();
		int search_pos[MAX_ENTRIES];
		int search_res = 0;

		try {
			current.format_test(!(current.get_number()).empty(), !(current.get_destination()).empty(),
				!(current.get_date()).empty(), !(current.get_time()).empty());
		}
		catch (FormatError& err) {
			set_input_errors(err);
			return;
		}

		find_rows(search_res, search_pos);
		for (int i = 0; i < dataGridViewLog->Rows->Count - 1; ++i) dataGridViewLog->Rows[i]->Visible = false;

		for (int i = 0; i < search_res; ++i) {
			dataGridViewLog->Rows[search_pos[i]]->Visible = true;
		}
	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dataGridViewLog->Rows->Count - 1; ++i) dataGridViewLog->Rows[i]->Visible = true;
		dataGridViewLog->Rows->Clear();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		data_grid_contents->load_from_file(dataGridViewLog);
	}

	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		data_grid_contents->load_to_file(dataGridViewLog);
	}

	};
}