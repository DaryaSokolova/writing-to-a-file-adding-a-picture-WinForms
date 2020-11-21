#pragma once
#include<cmath>
#include <fstream>


namespace Project22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

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
	private: System::Windows::Forms::TextBox^ txtInput;
	protected:
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ btnFile;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ErrorProvider^ errorProviderX;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtInputY;
	private: System::Windows::Forms::ErrorProvider^ errorProviderY;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnFile = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->errorProviderX = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtInputY = (gcnew System::Windows::Forms::TextBox());
			this->errorProviderY = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderY))->BeginInit();
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(488, 188);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(413, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите x:";
			// 
			// btnFile
			// 
			this->btnFile->Location = System::Drawing::Point(404, 244);
			this->btnFile->Name = L"btnFile";
			this->btnFile->Size = System::Drawing::Size(184, 60);
			this->btnFile->TabIndex = 6;
			this->btnFile->Text = L"Заполнить в файл";
			this->btnFile->UseVisualStyleBackColor = true;
			this->btnFile->Click += gcnew System::EventHandler(this, &MyForm::btnFile_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(101, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 145);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(101, 192);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(292, 112);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите f(x)";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 79);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(41, 22);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ex";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 51);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 22);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"sh(x)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 23);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 22);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"x^2";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// errorProviderX
			// 
			this->errorProviderX->ContainerControl = this;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(413, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите у:";
			// 
			// txtInputY
			// 
			this->txtInputY->Location = System::Drawing::Point(488, 218);
			this->txtInputY->Name = L"txtInputY";
			this->txtInputY->Size = System::Drawing::Size(100, 20);
			this->txtInputY->TabIndex = 9;
			// 
			// errorProviderY
			// 
			this->errorProviderY->ContainerControl = this;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"test.txt";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileName = L"test.txt";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(677, 450);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtInputY);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtInput);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Упражнение 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderY))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double func1(int x, int y, int F) 
		{
			return (F - y) * (F - y) * (F - y) + atan(F);
		}

		double func2(int x, int y, int F)
		{
			return (y - F) * (y - F) * (y - F) + atan(F);
		}

		double func3(int x, int y, int F)
		{
			return (y + F) * (y + F) * (y + F) + 0.5;
		}

		void ClearAll() {//очистка полей
			errorProviderX->SetError(txtInput, String::Empty);
			errorProviderY->SetError(txtInputY, String::Empty);
		}


		int InputX()
		{
			long long InputNumber;
			bool result = Int64::TryParse(this->txtInput->Text, InputNumber); //переводим строку из TextBox в число
			if (result)
			{//все нормально
				return InputNumber;//результат
			}
			else
			{
				errorProviderX->SetError(txtInput, "Введено не целое число");
			}
		}

		int InputY()
		{
			long long InputNumberY;
			bool result1 = Int64::TryParse(this->txtInputY->Text, InputNumberY); //переводим строку из TextBox в число
			if (result1)
			{//все нормально
				return InputNumberY;//результат
			}
			else
			{
				errorProviderY->SetError(txtInputY, "Введено не целое число");
			}
		}

	double Answer() 
	{
		if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked)
		{
			ClearAll();
				int x = InputX();
				int y = InputY();
				double F;

				if (radioButton1->Checked)
				{
					F = x * x;
				}

				if (radioButton2->Checked)
				{
					F = (exp(x) - exp(-x)) / 2;
				}

				if (radioButton3->Checked)
				{
					F = exp(1);
				}

				double answer;
				if (x > y)
				{
					answer = func1(x, y, F);
				}
				if (y > x)
				{
					answer = func2(x, y, F);
				}
				if (y == x)
				{
					answer = func3(x, y, F);
				}


				if (Check() == true)
				{
					return answer;
				}
		}
		else MessageBox::Show("Выберите F(x)");
	}

	bool Check()
	{
		long long InputNumber1;
		long long InputNumber2;
		bool result1 = Int64::TryParse(this->txtInput->Text, InputNumber1); //переводим строку из TextBox в число
		bool result2 = Int64::TryParse(this->txtInputY->Text, InputNumber2); //переводим строку из TextBox в число

		if ((result1 == true) && (result2 == true)&&((radioButton1->Checked || radioButton2->Checked || radioButton3->Checked)))
		{
			return true;
		}
		else return false;
	}

	private: System::Void btnFile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Check() == true)
		{
		ofstream fout; //создаём объект класса ofstream 
		fout.open("test.txt"); //открытие потока для записи
		fout << Answer(); //запись в файл
		fout.close(); // закрытие потока
		MessageBox::Show("Файл создан");
		}
		else
		{
			Answer();
			MessageBox::Show("Файл не создан");
		}
			
	}
};
}
