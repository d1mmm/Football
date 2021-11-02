#pragma once
namespace Football2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ResultForm
	/// </summary>
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public: String^ sis;
	public:
		ResultForm(String^ si, String^ r1, String^ r2, String^ r3)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			textBox1->Text = r1;
			textBox2->Text = r2;
			textBox4->Text = r3;
			label4->Text = si;
			sis = si;
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ matchTextBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Roll_up;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;



	protected:
	private: int t2;
		   /// <summary>
		   /// ќб€зательна€ переменна€ конструктора.
		   /// </summary> 


#pragma region Windows Form Designer generated code
		  /// <summary>
		  /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		  /// содержимое этого метода с помощью редактора кода.
		  /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultForm::typeid));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->matchTextBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->Roll_up = (gcnew System::Windows::Forms::Button());
			   this->Exit = (gcnew System::Windows::Forms::Button());
			   this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   resources->ApplyResources(this->textBox1, L"textBox1");
			   this->textBox1->BackColor = System::Drawing::Color::White;
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ReadOnly = true;
			   this->textBox1->TabStop = false;
			   // 
			   // matchTextBox1
			   // 
			   resources->ApplyResources(this->matchTextBox1, L"matchTextBox1");
			   this->matchTextBox1->BackColor = System::Drawing::Color::White;
			   this->matchTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->matchTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->matchTextBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->matchTextBox1->Name = L"matchTextBox1";
			   this->matchTextBox1->ReadOnly = true;
			   this->matchTextBox1->TabStop = false;
			   // 
			   // textBox2
			   // 
			   resources->ApplyResources(this->textBox2, L"textBox2");
			   this->textBox2->BackColor = System::Drawing::Color::White;
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			   this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ReadOnly = true;
			   this->textBox2->TabStop = false;
			   // 
			   // textBox3
			   // 
			   resources->ApplyResources(this->textBox3, L"textBox3");
			   this->textBox3->BackColor = System::Drawing::Color::White;
			   this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			   this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->ReadOnly = true;
			   this->textBox3->TabStop = false;
			   // 
			   // textBox4
			   // 
			   resources->ApplyResources(this->textBox4, L"textBox4");
			   this->textBox4->BackColor = System::Drawing::Color::White;
			   this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			   this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->ReadOnly = true;
			   this->textBox4->TabStop = false;
			   // 
			   // textBox5
			   // 
			   resources->ApplyResources(this->textBox5, L"textBox5");
			   this->textBox5->BackColor = System::Drawing::Color::White;
			   this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			   this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->ReadOnly = true;
			   this->textBox5->TabStop = false;
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->BackColor = System::Drawing::SystemColors::Control;
			   this->label1->ForeColor = System::Drawing::SystemColors::Window;
			   this->label1->Name = L"label1";
			   this->label1->UseMnemonic = false;
			   // 
			   // Roll_up
			   // 
			   resources->ApplyResources(this->Roll_up, L"Roll_up");
			   this->Roll_up->BackColor = System::Drawing::Color::Transparent;
			   this->Roll_up->FlatAppearance->BorderSize = 0;
			   this->Roll_up->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->Roll_up->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->Roll_up->Name = L"Roll_up";
			   this->Roll_up->UseVisualStyleBackColor = false;
			   this->Roll_up->Click += gcnew System::EventHandler(this, &ResultForm::Roll_up_Click);
			   // 
			   // Exit
			   // 
			   resources->ApplyResources(this->Exit, L"Exit");
			   this->Exit->BackColor = System::Drawing::Color::Transparent;
			   this->Exit->FlatAppearance->BorderSize = 0;
			   this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->Exit->Name = L"Exit";
			   this->Exit->UseVisualStyleBackColor = false;
			   this->Exit->Click += gcnew System::EventHandler(this, &ResultForm::Exit_Click);
			   // 
			   // timer2
			   // 
			   this->timer2->Tick += gcnew System::EventHandler(this, &ResultForm::timer2_Tick);
			   // 
			   // pictureBox1
			   // 
			   resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->TabStop = false;
			   // 
			   // label3
			   // 
			   resources->ApplyResources(this->label3, L"label3");
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Name = L"label3";
			   // 
			   // pictureBox3
			   // 
			   resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			   this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->TabStop = false;
			   // 
			   // label4
			   // 
			   resources->ApplyResources(this->label4, L"label4");
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label4->Name = L"label4";
			   // 
			   // ResultForm
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->Roll_up);
			   this->Controls->Add(this->Exit);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->matchTextBox1);
			   this->DoubleBuffered = true;
			   this->ForeColor = System::Drawing::Color::Transparent;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->KeyPreview = true;
			   this->Name = L"ResultForm";
			   this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ResultForm::ResultForm_KeyDown);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Roll_up_Click(System::Object^ sender, System::EventArgs^ e) {
		ResultForm::WindowState = FormWindowState::Minimized;
	}
	private: System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer2->Interval = 1;
		timer2->Start();
		timer2->Enabled = true;
	}
	public: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e);


	private: System::Void ResultForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	};
}
