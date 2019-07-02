#pragma once

namespace start3 {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button1->FlatAppearance->BorderSize = 4;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(223, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ON/OFF";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(242, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"OFF";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Cвинка-копилка", L"Коул", L"Карты", L"Карзина" });
			this->comboBox1->Location = System::Drawing::Point(197, 112);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(87, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 197);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(239, 339);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(512, 446);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool check = true;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e){
		this->Text = "Галерея";
		label1->Text = "OFF";
		label2->Text = "";
		comboBox1->Text = "Список";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (check)
		{
			label1->Text = "ON";
			check = false;
			
			comboBox1->Visible = true;
			
		}
		else { label1->Text = "OFF"; check = true; 
	
		label2->Visible = false;
		comboBox1->Visible = false;
		pictureBox1->Visible = false;
		
		}
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox1->SelectedIndex)
		{
			
		case 0:pictureBox1->Visible = true; label2->Visible = true; pictureBox1->Image = Image::FromFile("C:\\Users\\Lera\\Desktop\\pig.png");
			label2->Text = "Свинка-копилка";
			break;
		case 1:pictureBox1->Visible = true; label2->Visible = true; pictureBox1->Image = Image::FromFile("C:\\Users\\Lera\\Desktop\\coul.jpg");
			label2->Text = "Коул";
			break;
		case 2:pictureBox1->Visible = true; label2->Visible = true; pictureBox1->Image = Image::FromFile("C:\\Users\\Lera\\Desktop\\map.png");
			label2->Text = "Карты";
			break;
		case 3:
			pictureBox1->Visible = true; label2->Visible = true; pictureBox1->Image = Image::FromFile("C:\\Users\\Lera\\Desktop\\trash.png");
			label2->Text = "Корзина";
			break;
		}
	}
};
}
