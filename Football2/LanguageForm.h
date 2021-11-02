#pragma once
#include "StartingForm.h"

namespace Football2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ LanguageForm
	/// </summary>
	public ref class LanguageForm : public System::Windows::Forms::Form
	{
	public:
		LanguageForm(void)
		{
			InitializeComponent();
			this->ActiveControl = pictureBox1;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LanguageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_Rus;
	private: System::Windows::Forms::Button^ b_Eng;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Roll_up;
	private: System::Windows::Forms::Button^ Exit;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LanguageForm::typeid));
			this->b_Rus = (gcnew System::Windows::Forms::Button());
			this->b_Eng = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Roll_up = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// b_Rus
			// 
			this->b_Rus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->b_Rus->BackColor = System::Drawing::Color::Transparent;
			this->b_Rus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->b_Rus->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->b_Rus->FlatAppearance->BorderSize = 0;
			this->b_Rus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->b_Rus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->b_Rus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Rus->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 16.2F, System::Drawing::FontStyle::Bold));
			this->b_Rus->ForeColor = System::Drawing::SystemColors::Control;
			this->b_Rus->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->b_Rus->Location = System::Drawing::Point(146, 378);
			this->b_Rus->Name = L"b_Rus";
			this->b_Rus->Size = System::Drawing::Size(180, 61);
			this->b_Rus->TabIndex = 23;
			this->b_Rus->Text = L"–усский";
			this->b_Rus->UseVisualStyleBackColor = false;
			this->b_Rus->Click += gcnew System::EventHandler(this, &LanguageForm::b_Rus_Click);
			// 
			// b_Eng
			// 
			this->b_Eng->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->b_Eng->BackColor = System::Drawing::Color::Transparent;
			this->b_Eng->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->b_Eng->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->b_Eng->FlatAppearance->BorderSize = 0;
			this->b_Eng->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->b_Eng->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->b_Eng->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Eng->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 16.2F, System::Drawing::FontStyle::Bold));
			this->b_Eng->ForeColor = System::Drawing::SystemColors::Control;
			this->b_Eng->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->b_Eng->Location = System::Drawing::Point(499, 378);
			this->b_Eng->Name = L"b_Eng";
			this->b_Eng->Size = System::Drawing::Size(180, 61);
			this->b_Eng->TabIndex = 24;
			this->b_Eng->Text = L"English";
			this->b_Eng->UseVisualStyleBackColor = false;
			this->b_Eng->Click += gcnew System::EventHandler(this, &LanguageForm::b_Eng_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(203, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// Roll_up
			// 
			this->Roll_up->BackColor = System::Drawing::Color::Transparent;
			this->Roll_up->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Roll_up->FlatAppearance->BorderSize = 0;
			this->Roll_up->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Roll_up->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Roll_up->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Roll_up->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Roll_up->Location = System::Drawing::Point(775, 1);
			this->Roll_up->Name = L"Roll_up";
			this->Roll_up->Size = System::Drawing::Size(33, 36);
			this->Roll_up->TabIndex = 27;
			this->Roll_up->UseVisualStyleBackColor = false;
			this->Roll_up->Click += gcnew System::EventHandler(this, &LanguageForm::Roll_up_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Transparent;
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Exit->Location = System::Drawing::Point(801, 1);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(48, 36);
			this->Exit->TabIndex = 26;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &LanguageForm::Exit_Click);
			// 
			// LanguageForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(850, 490);
			this->Controls->Add(this->Roll_up);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->b_Eng);
			this->Controls->Add(this->b_Rus);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LanguageForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elize 2.0 PRO";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void b_Rus_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = System::Globalization::CultureInfo::GetCultureInfo("");
		System::Threading::Thread::CurrentThread->CurrentCulture = System::Globalization::CultureInfo::GetCultureInfo("");
		StartingForm^ start = gcnew StartingForm();
		start->MdiParent = this->MdiParent;
		start->Show();
		this->Close();
	}
	private: System::Void b_Eng_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = System::Globalization::CultureInfo::GetCultureInfo("en-US");
		System::Threading::Thread::CurrentThread->CurrentCulture = System::Globalization::CultureInfo::GetCultureInfo("en-US");
		StartingForm^ start = gcnew StartingForm();
		start->MdiParent = this->MdiParent;
		start->Show();
		this->Close();
	}
	private: System::Void Roll_up_Click(System::Object^ sender, System::EventArgs^ e) {
		LanguageForm::WindowState = FormWindowState::Minimized;
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	};
}
