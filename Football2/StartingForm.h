#pragma once
#include "LoadingForm.h"
#include "ResultForm.h"
#include "KeyForm.h"
namespace Football2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace System::Drawing::Text;

	/// <summary>
	/// Сводка для StartingForm
	/// </summary>
	public ref class StartingForm : public System::Windows::Forms::Form
	{
	public:
		StartingForm()
		{
			InitializeComponent();

		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StartingForm()
		{
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ matchTextBox3;
	private: System::Windows::Forms::TextBox^ matchTextBox2;
	private: System::Windows::Forms::TextBox^ matchTextBox1;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Roll_up;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;


	public: String^ s;
		  String^ r1;
		  String^ r2;
		  String^ r3;

#pragma region Windows Form Designer generated code
		  /// <summary>
		  /// Требуемый метод для поддержки конструктора — не изменяйте 
		  /// содержимое этого метода с помощью редактора кода.
		  /// </summary>
		  void InitializeComponent(void)
		  {
			  System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartingForm::typeid));
			  this->label1 = (gcnew System::Windows::Forms::Label());
			  this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			  this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			  this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			  this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			  this->matchTextBox3 = (gcnew System::Windows::Forms::TextBox());
			  this->matchTextBox2 = (gcnew System::Windows::Forms::TextBox());
			  this->matchTextBox1 = (gcnew System::Windows::Forms::TextBox());
			  this->Exit = (gcnew System::Windows::Forms::Button());
			  this->Roll_up = (gcnew System::Windows::Forms::Button());
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			  this->SuspendLayout();
			  // 
			  // label1
			  // 
			  resources->ApplyResources(this->label1, L"label1");
			  this->label1->ForeColor = System::Drawing::SystemColors::Window;
			  this->label1->Name = L"label1";
			  // 
			  // pictureBox1
			  // 
			  resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			  this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			  this->pictureBox1->Name = L"pictureBox1";
			  this->pictureBox1->TabStop = false;
			  // 
			  // comboBox3
			  // 
			  resources->ApplyResources(this->comboBox3, L"comboBox3");
			  this->comboBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				  resources->GetString(L"comboBox3.Items"), resources->GetString(L"comboBox3.Items1"),
					  resources->GetString(L"comboBox3.Items2"), resources->GetString(L"comboBox3.Items3"), resources->GetString(L"comboBox3.Items4"),
					  resources->GetString(L"comboBox3.Items5"), resources->GetString(L"comboBox3.Items6"), resources->GetString(L"comboBox3.Items7"),
					  resources->GetString(L"comboBox3.Items8"), resources->GetString(L"comboBox3.Items9"), resources->GetString(L"comboBox3.Items10"),
					  resources->GetString(L"comboBox3.Items11"), resources->GetString(L"comboBox3.Items12"), resources->GetString(L"comboBox3.Items13"),
					  resources->GetString(L"comboBox3.Items14")
			  });
			  this->comboBox3->Name = L"comboBox3";
			  this->comboBox3->TabStop = false;
			  this->comboBox3->DropDown += gcnew System::EventHandler(this, &StartingForm::comboBox3_DropDown);
			  this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &StartingForm::comboBox3_SelectedIndexChanged);
			  this->comboBox3->DropDownClosed += gcnew System::EventHandler(this, &StartingForm::comboBox3_DropDownClosed);
			  // 
			  // comboBox2
			  // 
			  resources->ApplyResources(this->comboBox2, L"comboBox2");
			  this->comboBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				  resources->GetString(L"comboBox2.Items"), resources->GetString(L"comboBox2.Items1"),
					  resources->GetString(L"comboBox2.Items2"), resources->GetString(L"comboBox2.Items3"), resources->GetString(L"comboBox2.Items4"),
					  resources->GetString(L"comboBox2.Items5"), resources->GetString(L"comboBox2.Items6"), resources->GetString(L"comboBox2.Items7"),
					  resources->GetString(L"comboBox2.Items8"), resources->GetString(L"comboBox2.Items9"), resources->GetString(L"comboBox2.Items10"),
					  resources->GetString(L"comboBox2.Items11"), resources->GetString(L"comboBox2.Items12"), resources->GetString(L"comboBox2.Items13"),
					  resources->GetString(L"comboBox2.Items14")
			  });
			  this->comboBox2->Name = L"comboBox2";
			  this->comboBox2->TabStop = false;
			  this->comboBox2->DropDown += gcnew System::EventHandler(this, &StartingForm::comboBox2_DropDown);
			  this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &StartingForm::comboBox2_SelectedIndexChanged);
			  this->comboBox2->DropDownClosed += gcnew System::EventHandler(this, &StartingForm::comboBox2_DropDownClosed);
			  // 
			  // comboBox1
			  // 
			  resources->ApplyResources(this->comboBox1, L"comboBox1");
			  this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				  resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					  resources->GetString(L"comboBox1.Items2"), resources->GetString(L"comboBox1.Items3"), resources->GetString(L"comboBox1.Items4"),
					  resources->GetString(L"comboBox1.Items5"), resources->GetString(L"comboBox1.Items6"), resources->GetString(L"comboBox1.Items7"),
					  resources->GetString(L"comboBox1.Items8"), resources->GetString(L"comboBox1.Items9"), resources->GetString(L"comboBox1.Items10"),
					  resources->GetString(L"comboBox1.Items11"), resources->GetString(L"comboBox1.Items12"), resources->GetString(L"comboBox1.Items13"),
					  resources->GetString(L"comboBox1.Items14")
			  });
			  this->comboBox1->Name = L"comboBox1";
			  this->comboBox1->TabStop = false;
			  this->comboBox1->DropDown += gcnew System::EventHandler(this, &StartingForm::comboBox1_DropDown);
			  this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StartingForm::comboBox1_SelectedIndexChanged);
			  this->comboBox1->DropDownClosed += gcnew System::EventHandler(this, &StartingForm::comboBox1_DropDownClosed);
			  // 
			  // matchTextBox3
			  // 
			  resources->ApplyResources(this->matchTextBox3, L"matchTextBox3");
			  this->matchTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->matchTextBox3->Cursor = System::Windows::Forms::Cursors::Default;
			  this->matchTextBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->matchTextBox3->Name = L"matchTextBox3";
			  this->matchTextBox3->TabStop = false;
			  this->matchTextBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &StartingForm::matchTextBox3_MouseClick);
			  this->matchTextBox3->TextChanged += gcnew System::EventHandler(this, &StartingForm::matchTextBox3_TextChanged);
			  // 
			  // matchTextBox2
			  // 
			  resources->ApplyResources(this->matchTextBox2, L"matchTextBox2");
			  this->matchTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->matchTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			  this->matchTextBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->matchTextBox2->Name = L"matchTextBox2";
			  this->matchTextBox2->TabStop = false;
			  this->matchTextBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &StartingForm::matchTextBox2_MouseClick);
			  this->matchTextBox2->TextChanged += gcnew System::EventHandler(this, &StartingForm::matchTextBox2_TextChanged);
			  // 
			  // matchTextBox1
			  // 
			  resources->ApplyResources(this->matchTextBox1, L"matchTextBox1");
			  this->matchTextBox1->BackColor = System::Drawing::Color::White;
			  this->matchTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			  this->matchTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			  this->matchTextBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			  this->matchTextBox1->Name = L"matchTextBox1";
			  this->matchTextBox1->TabStop = false;
			  this->matchTextBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &StartingForm::matchTextBox1_MouseClick);
			  this->matchTextBox1->TextChanged += gcnew System::EventHandler(this, &StartingForm::matchTextBox1_TextChanged);
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
			  this->Exit->Click += gcnew System::EventHandler(this, &StartingForm::Exit_Click);
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
			  this->Roll_up->Click += gcnew System::EventHandler(this, &StartingForm::Roll_up_Click);
			  // 
			  // StartingForm
			  // 
			  resources->ApplyResources(this, L"$this");
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			  this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			  this->Controls->Add(this->Roll_up);
			  this->Controls->Add(this->Exit);
			  this->Controls->Add(this->pictureBox1);
			  this->Controls->Add(this->label1);
			  this->Controls->Add(this->comboBox3);
			  this->Controls->Add(this->comboBox2);
			  this->Controls->Add(this->comboBox1);
			  this->Controls->Add(this->matchTextBox3);
			  this->Controls->Add(this->matchTextBox2);
			  this->Controls->Add(this->matchTextBox1);
			  this->Cursor = System::Windows::Forms::Cursors::Default;
			  this->DoubleBuffered = true;
			  this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			  this->KeyPreview = true;
			  this->Name = L"StartingForm";
			  this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StartingForm::StartingForm_KeyDown);
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			  this->ResumeLayout(false);
			  this->PerformLayout();

		  }
#pragma endregion		
	private: System::Void matchTextBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		matchTextBox1->Clear();
	}
	private: System::Void matchTextBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		matchTextBox2->Clear();
	}
	private: System::Void matchTextBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		matchTextBox3->Clear();
	}
	private: System::Void StartingForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::NumPad1) {
			s = "13 %";
		}
		if (e->KeyCode == Keys::NumPad2) {
			s = "29 %";
		}
		if (e->KeyCode == Keys::NumPad3) {
			s = "43 %";
		}
		if (e->KeyCode == Keys::NumPad4) {
			s = "68 %";
		}
		if (e->KeyCode == Keys::NumPad5) {
			s = "75 %";
		}
		if (e->KeyCode == Keys::NumPad6) {
			s = "86 %";
		}
		if (e->KeyCode == Keys::NumPad7) {
			s = "93 %";
		}
		if (e->KeyCode == Keys::NumPad8) {
			s = "96 %";
		}
		if (e->KeyCode == Keys::NumPad9) {
			s = "98 %";
		}
		LoadingForm^ load = gcnew LoadingForm(s, r1, r2, r3);
		if (e->KeyCode == Keys::NumPad1
			|| e->KeyCode == Keys::NumPad2
			|| e->KeyCode == Keys::NumPad3
			|| e->KeyCode == Keys::NumPad4
			|| e->KeyCode == Keys::NumPad5
			|| e->KeyCode == Keys::NumPad6
			|| e->KeyCode == Keys::NumPad7
			|| e->KeyCode == Keys::NumPad8
			|| e->KeyCode == Keys::NumPad9)
		{
			load->MdiParent = this->MdiParent;
			load->Show();
			this->Close();
		}
		if (e->KeyCode == Keys::W) {
			MessageBox::Show("The application was unable to start correctly (0xc000007b). Click OK to close the application", "TestOpenCV.exe - Application Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (e->KeyCode == Keys::C) {
			MessageBox::Show("Не удается установить соединение с удаленной базой данных: \nВозможны причины: \n1. Компьютер не подключен к сети интернет. \n2. Удалённый сервер недоступен. \n3. Брандмауэр или антивирус блокирует доступ по протоколу TCP через порт 1433. \n4. Другая причина.", "Проверка соединения", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (e->KeyCode == Keys::A) {
			KeyForm^ key = gcnew KeyForm();
			key->Show();
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		r1 = comboBox1->SelectedItem->ToString();
		StartingForm::Focus();
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		r2 = comboBox2->SelectedItem->ToString();
		StartingForm::Focus();
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		r3 = comboBox3->SelectedItem->ToString();
		StartingForm::Focus();
	}
	private: System::Void matchTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		matchTextBox1->PasswordChar = '*';
		StartingForm::Focus();
	}
	private: System::Void matchTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		matchTextBox2->PasswordChar = '*';
		StartingForm::Focus();
	}
	private: System::Void matchTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		matchTextBox3->PasswordChar = '*';
		StartingForm::Focus();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Roll_up_Click(System::Object^ sender, System::EventArgs^ e) {
		StartingForm::WindowState = FormWindowState::Minimized;
	}
	private: System::Void comboBox1_DropDown(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void comboBox1_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 7.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void comboBox2_DropDown(System::Object^ sender, System::EventArgs^ e) {
		comboBox2->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void comboBox2_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		comboBox2->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 7.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void comboBox3_DropDown(System::Object^ sender, System::EventArgs^ e) {
		comboBox3->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void comboBox3_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		comboBox3->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 7.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	};
}

