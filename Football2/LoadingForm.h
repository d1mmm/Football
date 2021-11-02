#pragma once
#include "ResultForm.h"
namespace Football2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoadingForm : public System::Windows::Forms::Form
	{
	public: String^ si;
		  String^ r11;
		  String^ r21;
	private: System::Windows::Forms::Label^ label3;
	public:

	public:
		String^ r31;
	public:
		LoadingForm(String^ s, String^ r1,  String^ r2, String^ r3)
		{
			InitializeComponent();
			si = s;
			textBox1->Text = r1;
			textBox2->Text = r2;
			textBox3->Text = r3;
			r11 = r1;
			r21 = r2;
			r31 = r3;
		}

	protected:
		~LoadingForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ matchTextBox3;
	private: System::Windows::Forms::TextBox^ matchTextBox2;
	private: System::Windows::Forms::TextBox^ matchTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Roll_up;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;


	private: int index = 0;
#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->matchTextBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->matchTextBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->matchTextBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->Roll_up = (gcnew System::Windows::Forms::Button());
			   this->Exit = (gcnew System::Windows::Forms::Button());
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->ForeColor = System::Drawing::SystemColors::Window;
			   this->label1->Name = L"label1";
			   this->label1->UseMnemonic = false;
			   // 
			   // matchTextBox3
			   // 
			   resources->ApplyResources(this->matchTextBox3, L"matchTextBox3");
			   this->matchTextBox3->BackColor = System::Drawing::Color::White;
			   this->matchTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->matchTextBox3->Cursor = System::Windows::Forms::Cursors::Default;
			   this->matchTextBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->matchTextBox3->HideSelection = false;
			   this->matchTextBox3->Name = L"matchTextBox3";
			   this->matchTextBox3->ReadOnly = true;
			   this->matchTextBox3->TabStop = false;
			   // 
			   // matchTextBox2
			   // 
			   resources->ApplyResources(this->matchTextBox2, L"matchTextBox2");
			   this->matchTextBox2->BackColor = System::Drawing::Color::White;
			   this->matchTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->matchTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			   this->matchTextBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->matchTextBox2->HideSelection = false;
			   this->matchTextBox2->Name = L"matchTextBox2";
			   this->matchTextBox2->ReadOnly = true;
			   this->matchTextBox2->TabStop = false;
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
			   // label2
			   // 
			   resources->ApplyResources(this->label2, L"label2");
			   this->label2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->label2->Name = L"label2";
			   this->label2->TextChanged += gcnew System::EventHandler(this, &LoadingForm::label2_TextChanged);
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
			   this->Roll_up->Click += gcnew System::EventHandler(this, &LoadingForm::Roll_up_Click_1);
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
			   this->Exit->Click += gcnew System::EventHandler(this, &LoadingForm::Exit_Click_1);
			   // 
			   // timer1
			   // 
			   this->timer1->Interval = 1000;
			   this->timer1->Tick += gcnew System::EventHandler(this, &LoadingForm::timer1_Tick);
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
			   // pictureBox1
			   // 
			   resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->TabStop = false;
			   // 
			   // label3
			   // 
			   resources->ApplyResources(this->label3, L"label3");
			   this->label3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->label3->Name = L"label3";
			   // 
			   // LoadingForm
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->Roll_up);
			   this->Controls->Add(this->Exit);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->matchTextBox3);
			   this->Controls->Add(this->matchTextBox2);
			   this->Controls->Add(this->matchTextBox1);
			   this->Controls->Add(this->label1);
			   this->DoubleBuffered = true;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"LoadingForm";
			   this->Load += gcnew System::EventHandler(this, &LoadingForm::LoadingForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void LoadingForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Roll_up_Click_1(System::Object^ sender, System::EventArgs^ e) {
		LoadingForm::WindowState = FormWindowState::Minimized;
	}
	private: System::Void Exit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: static array <String^>^ name = gcnew array<String^>(8) {
		":/ terricon.com",
			": / whoscored.com",
			": / uefa.com",
			": / championat.com",
			": / sportarena.com",
			": / xscore.win",
			": / pravda.football",
			": / footboom.com"
	};
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		index = rand->Next(name->Length);
		label2->Text = name[index];
		delete rand;
	}
	private: System::Void label2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ResultForm^ result = gcnew ResultForm(si, r11, r21, r31);
		if (label2->Text == name[7]) {
			timer1->Stop();
			result->MdiParent = this->MdiParent;
			result->Show();
			this->Close();
			delete pictureBox1;
			delete timer1;
		}
	}
	};
}
