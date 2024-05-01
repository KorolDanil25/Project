#pragma once

namespace Project {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сложение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Вычитание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Умножение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Деление";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Первое число";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Второе число";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(147, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Результат";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Операции";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(120, 128);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Процент от числа";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 271);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что введены числа
		try {
			// Преобразование текста из textBox1 и textBox2 в числа
			int num1 = System::Convert::ToInt32(textBox1->Text);
			int num2 = System::Convert::ToInt32(textBox2->Text);

			// Сложение чисел
			int sum = num1 + num2;

			// Вывод результата в textBox3
			textBox3->Text = sum.ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Пожалуйста, введите числа в textBox1 и textBox2.");
		}
		catch (OverflowException^) {
			MessageBox::Show("Одно из введенных чисел слишком большое.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что введены числа
		try {
			// Преобразование текста из textBox1 и textBox2 в числа
			int num1 = System::Convert::ToInt32(textBox1->Text);
			int num2 = System::Convert::ToInt32(textBox2->Text);

			// Вычитание чисел
			int difference = num1 - num2;

			// Вывод результата в textBox3
			textBox3->Text = difference.ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Пожалуйста, введите числа");
		}
		catch (OverflowException^) {
			MessageBox::Show("Одно из введенных чисел слишком большое.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что введены числа
		try {
			// Преобразование текста из textBox1 и textBox2 в числа
			int num1 = System::Convert::ToInt32(textBox1->Text);
			int num2 = System::Convert::ToInt32(textBox2->Text);

			// Умножение чисел
			int product = num1 * num2;

			// Вывод результата в textBox3
			textBox3->Text = product.ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Пожалуйста, введите числа");
		}
		catch (OverflowException^) {
			MessageBox::Show("Одно из введенных чисел слишком большое.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что введены числа и делитель не равен нулю
		try {
			// Преобразование текста из textBox1 и textBox2 в числа
			double num1 = System::Convert::ToDouble(textBox1->Text);
			double num2 = System::Convert::ToDouble(textBox2->Text);

			// Проверка, что делитель не равен нулю
			if (num2 == 0) {
				MessageBox::Show("Деление на ноль невозможно.");
				return;
			}

			// Деление чисел
			double quotient = num1 / num2;

			// Вывод результата в textBox3
			textBox3->Text = quotient.ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Пожалуйста, введите числа");
		}
		catch (OverflowException^) {
			MessageBox::Show("Одно из введенных чисел слишком большое.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что введены числа
		try {
			// Преобразование текста из textBox1 и textBox2 в числа
			double number = System::Convert::ToDouble(textBox1->Text);
			double percent = System::Convert::ToDouble(textBox2->Text);

			// Вычисление процента от числа
			double result = (number * percent) / 100.0;

			// Вывод результата в textBox3
			textBox3->Text = result.ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Пожалуйста, введите числа");
		}
		catch (OverflowException^) {
			MessageBox::Show("Одно из введенных чисел слишком большое.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
	};
}
