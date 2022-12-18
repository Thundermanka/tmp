#pragma once

namespace labaalsu5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(683, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дан двумерный массив размерности ММ.\r\nЗаменить каждый отрицательный элемент этой "
				L"матрицы на сумму элементов своей строки.\r\nВывести получившуюся матрицу на экран."
				L"";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите M:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 89);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Location = System::Drawing::Point(77, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Введите массив:";
			this->label4->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(891, 378);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 41);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 86);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 59);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Создать сетку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(26, 191);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(760, 425);
			this->dataGridView2->TabIndex = 11;
			this->dataGridView2->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(26, 191);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(760, 425);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1379, 690);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label4->Enabled = true;
		label4->Visible = true;
		dataGridView1->Enabled = true;
		dataGridView1->Visible = true;
		//Считываем размер массива:
		int m;
		m = System::Convert::ToInt32(textBox1->Text);
		int a[100][100];
		//Строим сетку
		dataGridView1->RowCount = m;
		dataGridView1->ColumnCount = m;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		dataGridView2->RowCount = m;
		dataGridView2->ColumnCount = m;
		button1->Enabled = true;
		button1->Visible = true;
		int sum = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] > 0) {
					dataGridView2->Rows[i]->Cells[j]->Value = a[i][j];
				}
			}
		}
	}
		   void resh(int i, int j, int m, int a[100][100]) {
			   int sum = 0;
			   for (i; i < m; i++) {
				   for (j; j < m; j++) {
					   if (a[i][j] < 0) {
						   for (int k = 0; k < m; k++) {
							   sum = sum + a[i][k];
						   }
						   a[i][j] = sum;
					   }
				   }
			   }
		   }
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//включаем 1 таблицу и показываем 2, убираем кнопку создать сетку и убираем ввод в текст бокс
 		label4->Enabled = false;
		label4->Visible = false;
		textBox1->Enabled = false;
		button2->Enabled = false;
		button2->Visible = false;
		dataGridView1->Enabled = false;
		dataGridView1->Visible = false;
		dataGridView2->Enabled = true;
		dataGridView2->Visible = true;
		button1->Enabled = false;
		button1->Visible = false;
		
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
