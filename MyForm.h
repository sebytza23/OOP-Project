#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->Alegeri->Text = "Ascending";
			
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::String^ plm;
	protected:
	private: Guna::UI::WinForms::GunaLabel^ FileName;
	protected:
	private: Guna::UI::WinForms::GunaDragControl^ DragAndDrop;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ AppName;
	private: Guna::UI::WinForms::GunaPanel^ TitleBar;
	private: Guna::UI::WinForms::GunaDragControl^ DragAndDrop2;
	private: Guna::UI::WinForms::GunaControlBox^ Minimize;
	private: Guna::UI::WinForms::GunaControlBox^ Exit;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator1;
	private: Guna::UI::WinForms::GunaLabel^ SvF;

	public: Guna::UI::WinForms::GunaComboBox^ Alegeri;
	private:

	private:



	public: FontAwesome::Sharp::IconButton^ iconButton1;
	private: Guna::UI::WinForms::GunaAdvenceButton^ convert;
	public:
	private:



	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	public: System::Windows::Forms::OpenFileDialog^ OpenFile;
	public: System::Windows::Forms::Label^ OriginalString;
	public: System::Windows::Forms::Label^ SortedString;

	public:


	public:

	private: Guna::UI::WinForms::GunaResize^ gunaResize1;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator1;

	private: Bunifu::Framework::UI::BunifuSwitch^ but;


	public:
	private:

	private: System::ComponentModel::IContainer^ components;
	public:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->FileName = (gcnew Guna::UI::WinForms::GunaLabel());
			this->DragAndDrop = (gcnew Guna::UI::WinForms::GunaDragControl(this->components));
			this->TitleBar = (gcnew Guna::UI::WinForms::GunaPanel());
			this->Minimize = (gcnew Guna::UI::WinForms::GunaControlBox());
			this->AppName = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->Exit = (gcnew Guna::UI::WinForms::GunaControlBox());
			this->DragAndDrop2 = (gcnew Guna::UI::WinForms::GunaDragControl(this->components));
			this->gunaSeparator1 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->SvF = (gcnew Guna::UI::WinForms::GunaLabel());
			this->Alegeri = (gcnew Guna::UI::WinForms::GunaComboBox());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->convert = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->OpenFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->OriginalString = (gcnew System::Windows::Forms::Label());
			this->SortedString = (gcnew System::Windows::Forms::Label());
			this->gunaResize1 = (gcnew Guna::UI::WinForms::GunaResize(this->components));
			this->gunaVSeparator1 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->but = (gcnew Bunifu::Framework::UI::BunifuSwitch());
			this->TitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// FileName
			// 
			this->FileName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FileName->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FileName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->FileName->Location = System::Drawing::Point(110, 98);
			this->FileName->Name = L"FileName";
			this->FileName->Size = System::Drawing::Size(184, 36);
			this->FileName->TabIndex = 0;
			this->FileName->Tag = L"0";
			this->FileName->Text = L"Filename...";
			this->FileName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FileName->Click += gcnew System::EventHandler(this, &MyForm::iconButton1_Click);
			// 
			// DragAndDrop
			// 
			this->DragAndDrop->TargetControl = this->TitleBar;
			// 
			// TitleBar
			// 
			this->TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->TitleBar->Controls->Add(this->Minimize);
			this->TitleBar->Controls->Add(this->AppName);
			this->TitleBar->Controls->Add(this->Exit);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(404, 31);
			this->TitleBar->TabIndex = 6;
			// 
			// Minimize
			// 
			this->Minimize->AnimationHoverSpeed = 0.07F;
			this->Minimize->AnimationSpeed = 0.03F;
			this->Minimize->BackColor = System::Drawing::Color::Transparent;
			this->Minimize->ControlBoxType = Guna::UI::WinForms::FormControlBoxType::MinimizeBox;
			this->Minimize->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Minimize->Dock = System::Windows::Forms::DockStyle::Right;
			this->Minimize->IconColor = System::Drawing::Color::Black;
			this->Minimize->IconSize = 15;
			this->Minimize->Location = System::Drawing::Point(336, 0);
			this->Minimize->Name = L"Minimize";
			this->Minimize->OnHoverBackColor = System::Drawing::Color::Lime;
			this->Minimize->OnHoverIconColor = System::Drawing::Color::White;
			this->Minimize->OnPressedColor = System::Drawing::Color::Black;
			this->Minimize->Size = System::Drawing::Size(34, 31);
			this->Minimize->TabIndex = 5;
			// 
			// AppName
			// 
			this->AppName->Dock = System::Windows::Forms::DockStyle::Left;
			this->AppName->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppName->ForeColor = System::Drawing::Color::Cyan;
			this->AppName->Location = System::Drawing::Point(0, 0);
			this->AppName->Name = L"AppName";
			this->AppName->Size = System::Drawing::Size(238, 31);
			this->AppName->TabIndex = 4;
			this->AppName->Text = L"ASCII Converter and Sorter";
			this->AppName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exit
			// 
			this->Exit->AnimationHoverSpeed = 0.07F;
			this->Exit->AnimationSpeed = 0.03F;
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Exit->Dock = System::Windows::Forms::DockStyle::Right;
			this->Exit->IconColor = System::Drawing::Color::Black;
			this->Exit->IconSize = 15;
			this->Exit->Location = System::Drawing::Point(370, 0);
			this->Exit->Name = L"Exit";
			this->Exit->OnHoverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Exit->OnHoverIconColor = System::Drawing::Color::White;
			this->Exit->OnPressedColor = System::Drawing::Color::Black;
			this->Exit->Size = System::Drawing::Size(34, 31);
			this->Exit->TabIndex = 2;
			// 
			// DragAndDrop2
			// 
			this->DragAndDrop2->TargetControl = this->AppName;
			// 
			// gunaSeparator1
			// 
			this->gunaSeparator1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gunaSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gunaSeparator1->Location = System::Drawing::Point(0, 28);
			this->gunaSeparator1->Name = L"gunaSeparator1";
			this->gunaSeparator1->Size = System::Drawing::Size(404, 10);
			this->gunaSeparator1->TabIndex = 6;
			this->gunaSeparator1->Thickness = 3;
			// 
			// SvF
			// 
			this->SvF->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SvF->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SvF->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->SvF->Location = System::Drawing::Point(106, 187);
			this->SvF->Name = L"SvF";
			this->SvF->Size = System::Drawing::Size(143, 32);
			this->SvF->TabIndex = 8;
			this->SvF->Text = L"Save in Files";
			// 
			// Alegeri
			// 
			this->Alegeri->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Alegeri->BackColor = System::Drawing::Color::Transparent;
			this->Alegeri->BaseColor = System::Drawing::Color::White;
			this->Alegeri->BorderColor = System::Drawing::Color::Silver;
			this->Alegeri->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->Alegeri->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Alegeri->FocusedColor = System::Drawing::Color::Empty;
			this->Alegeri->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->Alegeri->ForeColor = System::Drawing::Color::Black;
			this->Alegeri->FormattingEnabled = true;
			this->Alegeri->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ascending", L"Descending" });
			this->Alegeri->Location = System::Drawing::Point(111, 146);
			this->Alegeri->Name = L"Alegeri";
			this->Alegeri->OnHoverItemBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Alegeri->OnHoverItemForeColor = System::Drawing::Color::White;
			this->Alegeri->Size = System::Drawing::Size(182, 26);
			this->Alegeri->TabIndex = 11;
			this->Alegeri->Click += gcnew System::EventHandler(this, &MyForm::Alegeri_TextUpdate);
			// 
			// iconButton1
			// 
			this->iconButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::Upload;
			this->iconButton1->IconColor = System::Drawing::Color::Black;
			this->iconButton1->IconSize = 25;
			this->iconButton1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton1->Location = System::Drawing::Point(148, 65);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(101, 30);
			this->iconButton1->TabIndex = 12;
			this->iconButton1->Text = L"Select File";
			this->iconButton1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &MyForm::iconButton1_Click);
			// 
			// convert
			// 
			this->convert->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->convert->AnimationHoverSpeed = 0.07F;
			this->convert->AnimationSpeed = 0.03F;
			this->convert->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->convert->BorderColor = System::Drawing::Color::Black;
			this->convert->CheckedBaseColor = System::Drawing::Color::Gray;
			this->convert->CheckedBorderColor = System::Drawing::Color::Black;
			this->convert->CheckedForeColor = System::Drawing::Color::White;
			this->convert->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"convert.CheckedImage")));
			this->convert->CheckedLineColor = System::Drawing::Color::DimGray;
			this->convert->DialogResult = System::Windows::Forms::DialogResult::None;
			this->convert->FocusedColor = System::Drawing::Color::Empty;
			this->convert->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert->ForeColor = System::Drawing::Color::White;
			this->convert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"convert.Image")));
			this->convert->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->convert->ImageSize = System::Drawing::Size(0, 0);
			this->convert->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->convert->Location = System::Drawing::Point(107, 417);
			this->convert->Name = L"convert";
			this->convert->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->convert->OnHoverBorderColor = System::Drawing::Color::Black;
			this->convert->OnHoverForeColor = System::Drawing::Color::White;
			this->convert->OnHoverImage = nullptr;
			this->convert->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->convert->OnPressedColor = System::Drawing::Color::Black;
			this->convert->Size = System::Drawing::Size(191, 42);
			this->convert->TabIndex = 13;
			this->convert->Text = L"Convert And Sort";
			this->convert->Click += gcnew System::EventHandler(this, &MyForm::gunaAdvenceButton1_Click);
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaLabel1->Location = System::Drawing::Point(87, 245);
			this->gunaLabel1->MaximumSize = System::Drawing::Size(150, 0);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(78, 22);
			this->gunaLabel1->TabIndex = 14;
			this->gunaLabel1->Text = L"Original";
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel2->ForeColor = System::Drawing::Color::Aqua;
			this->gunaLabel2->Location = System::Drawing::Point(254, 245);
			this->gunaLabel2->MaximumSize = System::Drawing::Size(150, 0);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(64, 22);
			this->gunaLabel2->TabIndex = 15;
			this->gunaLabel2->Text = L"Sorted";
			// 
			// OriginalString
			// 
			this->OriginalString->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OriginalString->AutoSize = true;
			this->OriginalString->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OriginalString->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->OriginalString->Location = System::Drawing::Point(44, 277);
			this->OriginalString->MaximumSize = System::Drawing::Size(150, 0);
			this->OriginalString->Name = L"OriginalString";
			this->OriginalString->Size = System::Drawing::Size(49, 19);
			this->OriginalString->TabIndex = 16;
			this->OriginalString->Text = L"label1";
			this->OriginalString->Visible = false;
			// 
			// SortedString
			// 
			this->SortedString->AutoSize = true;
			this->SortedString->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortedString->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->SortedString->Location = System::Drawing::Point(216, 277);
			this->SortedString->MaximumSize = System::Drawing::Size(150, 0);
			this->SortedString->Name = L"SortedString";
			this->SortedString->Size = System::Drawing::Size(49, 19);
			this->SortedString->TabIndex = 17;
			this->SortedString->Text = L"label2";
			this->SortedString->Visible = false;
			// 
			// gunaResize1
			// 
			this->gunaResize1->TargetForm = this;
			// 
			// gunaVSeparator1
			// 
			this->gunaVSeparator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaVSeparator1->LineColor = System::Drawing::Color::Silver;
			this->gunaVSeparator1->Location = System::Drawing::Point(197, 238);
			this->gunaVSeparator1->Name = L"gunaVSeparator1";
			this->gunaVSeparator1->Size = System::Drawing::Size(10, 170);
			this->gunaVSeparator1->TabIndex = 18;
			// 
			// but
			// 
			this->but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but->BorderRadius = 0;
			this->but->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->but->Location = System::Drawing::Point(248, 189);
			this->but->Name = L"but";
			this->but->Oncolor = System::Drawing::Color::SeaGreen;
			this->but->Onoffcolor = System::Drawing::Color::DarkGray;
			this->but->Size = System::Drawing::Size(51, 19);
			this->but->TabIndex = 20;
			this->but->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->but->Value = false;
			this->but->Click += gcnew System::EventHandler(this, &MyForm::but_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(404, 526);
			this->ControlBox = false;
			this->Controls->Add(this->but);
			this->Controls->Add(this->gunaVSeparator1);
			this->Controls->Add(this->SortedString);
			this->Controls->Add(this->OriginalString);
			this->Controls->Add(this->gunaLabel2);
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->convert);
			this->Controls->Add(this->iconButton1);
			this->Controls->Add(this->Alegeri);
			this->Controls->Add(this->SvF);
			this->Controls->Add(this->FileName);
			this->Controls->Add(this->TitleBar);
			this->Controls->Add(this->gunaSeparator1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TitleBar->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e);
public: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void but_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Alegeri_TextUpdate(System::Object^ sender, System::EventArgs^ e);

};
}
