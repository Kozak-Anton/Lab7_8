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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
			dataGridViewLog = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(dataGridViewLog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewLog
			// 
			dataGridViewLog->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewLog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewLog->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewLog->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnNumber,
					this->ColumnDestination, this->ColumnDate, this->ColumnTime
			});
			dataGridViewLog->GridColor = System::Drawing::SystemColors::Control;
			dataGridViewLog->Location = System::Drawing::Point(0, 200);
			dataGridViewLog->MinimumSize = System::Drawing::Size(800, 150);
			dataGridViewLog->Name = L"dataGridViewLog";
			dataGridViewLog->RowHeadersVisible = false;
			dataGridViewLog->RowHeadersWidth = 4;
			dataGridViewLog->RowTemplate->Height = 24;
			dataGridViewLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			dataGridViewLog->Size = System::Drawing::Size(1100, 402);
			dataGridViewLog->TabIndex = 0;
			// 
			// ColumnNumber
			// 
			this->ColumnNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnNumber->HeaderText = L"Number";
			this->ColumnNumber->MinimumWidth = 6;
			this->ColumnNumber->Name = L"ColumnNumber";
			this->ColumnNumber->Width = 200;
			// 
			// ColumnDestination
			// 
			this->ColumnDestination->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnDestination->HeaderText = L"Destination";
			this->ColumnDestination->MinimumWidth = 6;
			this->ColumnDestination->Name = L"ColumnDestination";
			this->ColumnDestination->Width = 200;
			// 
			// ColumnDate
			// 
			this->ColumnDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnDate->HeaderText = L"Date";
			this->ColumnDate->MinimumWidth = 6;
			this->ColumnDate->Name = L"ColumnDate";
			this->ColumnDate->Width = 200;
			// 
			// ColumnTime
			// 
			this->ColumnTime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ColumnTime->HeaderText = L"Time";
			this->ColumnTime->MinimumWidth = 6;
			this->ColumnTime->Name = L"ColumnTime";
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
			this->buttonAdd->Location = System::Drawing::Point(12, 12);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 1;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(127, 12);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 2;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			// 
			// buttonFind
			// 
			this->buttonFind->Location = System::Drawing::Point(255, 12);
			this->buttonFind->Name = L"buttonFind";
			this->buttonFind->Size = System::Drawing::Size(75, 23);
			this->buttonFind->TabIndex = 3;
			this->buttonFind->Text = L"Find";
			this->buttonFind->UseVisualStyleBackColor = true;
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(375, 12);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(75, 23);
			this->buttonClear->TabIndex = 4;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			// 
			// labelNumber
			// 
			this->labelNumber->AutoSize = true;
			this->labelNumber->Location = System::Drawing::Point(12, 57);
			this->labelNumber->Name = L"labelNumber";
			this->labelNumber->Size = System::Drawing::Size(55, 16);
			this->labelNumber->TabIndex = 5;
			this->labelNumber->Text = L"Number";
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(12, 76);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(100, 22);
			this->textBoxNumber->TabIndex = 6;
			// 
			// textBoxDestination
			// 
			this->textBoxDestination->Location = System::Drawing::Point(147, 76);
			this->textBoxDestination->Name = L"textBoxDestination";
			this->textBoxDestination->Size = System::Drawing::Size(100, 22);
			this->textBoxDestination->TabIndex = 8;
			// 
			// labelDestination
			// 
			this->labelDestination->AutoSize = true;
			this->labelDestination->Location = System::Drawing::Point(147, 57);
			this->labelDestination->Name = L"labelDestination";
			this->labelDestination->Size = System::Drawing::Size(74, 16);
			this->labelDestination->TabIndex = 7;
			this->labelDestination->Text = L"Destination";
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(289, 76);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(100, 22);
			this->textBoxDate->TabIndex = 10;
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Location = System::Drawing::Point(289, 57);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(36, 16);
			this->labelDate->TabIndex = 9;
			this->labelDate->Text = L"Date";
			// 
			// textBoxTime
			// 
			this->textBoxTime->Location = System::Drawing::Point(431, 76);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(100, 22);
			this->textBoxTime->TabIndex = 12;
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Location = System::Drawing::Point(431, 57);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(38, 16);
			this->labelTime->TabIndex = 11;
			this->labelTime->Text = L"Time";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1382, 600);
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

		}
		
#pragma endregion
		private: FligthEntrie make_FlightEntrie() {
			std::string number = msclr::interop::marshal_as<std::string>(textBoxNumber->Text);
			std::string destination = msclr::interop::marshal_as<std::string>(textBoxDestination->Text);
			std::string date = msclr::interop::marshal_as<std::string>(textBoxDate->Text);
			std::string time = msclr::interop::marshal_as<std::string>(textBoxTime->Text);
			FligthEntrie new_entrie(number, destination, date, time);
			return new_entrie;
		}

		private: void set_input_errors(FormatError& err) {
			if (err.number_error) errorProvider1->SetError(textBoxNumber, gcnew String(err.number_details.c_str()));
			if (err.destination_error) errorProvider1->SetError(textBoxDestination, gcnew String(err.destination_details.c_str()));
			if (err.date_error) errorProvider1->SetError(textBoxDate, gcnew String(err.date_details.c_str()));
			if (err.time_error) errorProvider1->SetError(textBoxTime, gcnew String(err.time_details.c_str()));
		}

		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
