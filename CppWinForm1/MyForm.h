#pragma once

#include "Decypher.h"
#include "Decode.h"

namespace CppWinForm1 {

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;


	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox43;
	private: System::Windows::Forms::CheckBox^  checkBox44;
	private: System::Windows::Forms::CheckBox^  checkBox45;
	private: System::Windows::Forms::CheckBox^  checkBox46;
	private: System::Windows::Forms::CheckBox^  checkBox47;
	private: System::Windows::Forms::CheckBox^  checkBox48;
	private: System::Windows::Forms::CheckBox^  checkBox49;
	private: System::Windows::Forms::CheckBox^  checkBox50;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox21;
	private: System::Windows::Forms::CheckBox^  checkBox22;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::CheckBox^  checkBox24;
	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::CheckBox^  checkBox29;
	private: System::Windows::Forms::CheckBox^  checkBox30;
	private: System::Windows::Forms::CheckBox^  checkBox31;
	private: System::Windows::Forms::CheckBox^  checkBox32;
	private: System::Windows::Forms::CheckBox^  checkBox33;
	private: System::Windows::Forms::CheckBox^  checkBox34;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button9;






			 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(729, 498);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(721, 472);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Дешифровка";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(222, 7);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 22);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Записать в базу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->AcceptsReturn = true;
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						 | System::Windows::Forms::AnchorStyles::Left)
																						| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(9, 35);
			this->textBox3->MaxLength = 2147483647;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(706, 431);
			this->textBox3->TabIndex = 5;
			this->textBox3->WordWrap = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Файл:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->WordWrap = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбрать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(721, 472);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Шифровка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(9, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(704, 62);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Новый блок";
			this->groupBox1->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Location = System::Drawing::Point(9, 33);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(704, 62);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Коммандное слово";
			this->groupBox3->Visible = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->checkBox43);
			this->groupBox5->Controls->Add(this->checkBox44);
			this->groupBox5->Controls->Add(this->checkBox45);
			this->groupBox5->Controls->Add(this->checkBox46);
			this->groupBox5->Controls->Add(this->checkBox47);
			this->groupBox5->Controls->Add(this->checkBox48);
			this->groupBox5->Controls->Add(this->checkBox49);
			this->groupBox5->Controls->Add(this->checkBox50);
			this->groupBox5->Location = System::Drawing::Point(9, 32);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(704, 62);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ответное слово";
			this->groupBox5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(301, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Признаки";
			// 
			// checkBox43
			// 
			this->checkBox43->AutoSize = true;
			this->checkBox43->Location = System::Drawing::Point(467, 39);
			this->checkBox43->Name = L"checkBox43";
			this->checkBox43->Size = System::Drawing::Size(32, 17);
			this->checkBox43->TabIndex = 1;
			this->checkBox43->Text = L"8";
			this->checkBox43->UseVisualStyleBackColor = true;
			// 
			// checkBox44
			// 
			this->checkBox44->AutoSize = true;
			this->checkBox44->Location = System::Drawing::Point(429, 39);
			this->checkBox44->Name = L"checkBox44";
			this->checkBox44->Size = System::Drawing::Size(32, 17);
			this->checkBox44->TabIndex = 2;
			this->checkBox44->Text = L"7";
			this->checkBox44->UseVisualStyleBackColor = true;
			// 
			// checkBox45
			// 
			this->checkBox45->AutoSize = true;
			this->checkBox45->Location = System::Drawing::Point(391, 39);
			this->checkBox45->Name = L"checkBox45";
			this->checkBox45->Size = System::Drawing::Size(32, 17);
			this->checkBox45->TabIndex = 3;
			this->checkBox45->Text = L"6";
			this->checkBox45->UseVisualStyleBackColor = true;
			// 
			// checkBox46
			// 
			this->checkBox46->AutoSize = true;
			this->checkBox46->Location = System::Drawing::Point(353, 39);
			this->checkBox46->Name = L"checkBox46";
			this->checkBox46->Size = System::Drawing::Size(32, 17);
			this->checkBox46->TabIndex = 4;
			this->checkBox46->Text = L"5";
			this->checkBox46->UseVisualStyleBackColor = true;
			// 
			// checkBox47
			// 
			this->checkBox47->AutoSize = true;
			this->checkBox47->Location = System::Drawing::Point(315, 39);
			this->checkBox47->Name = L"checkBox47";
			this->checkBox47->Size = System::Drawing::Size(32, 17);
			this->checkBox47->TabIndex = 5;
			this->checkBox47->Text = L"4";
			this->checkBox47->UseVisualStyleBackColor = true;
			// 
			// checkBox48
			// 
			this->checkBox48->AutoSize = true;
			this->checkBox48->Location = System::Drawing::Point(277, 39);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(32, 17);
			this->checkBox48->TabIndex = 6;
			this->checkBox48->Text = L"3";
			this->checkBox48->UseVisualStyleBackColor = true;
			// 
			// checkBox49
			// 
			this->checkBox49->AutoSize = true;
			this->checkBox49->Location = System::Drawing::Point(239, 39);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(32, 17);
			this->checkBox49->TabIndex = 7;
			this->checkBox49->Text = L"2";
			this->checkBox49->UseVisualStyleBackColor = true;
			// 
			// checkBox50
			// 
			this->checkBox50->AutoSize = true;
			this->checkBox50->Location = System::Drawing::Point(201, 39);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(32, 17);
			this->checkBox50->TabIndex = 8;
			this->checkBox50->Text = L"1";
			this->checkBox50->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(595, 36);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(592, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Количество СД";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox18);
			this->groupBox4->Controls->Add(this->checkBox19);
			this->groupBox4->Controls->Add(this->checkBox20);
			this->groupBox4->Controls->Add(this->checkBox21);
			this->groupBox4->Controls->Add(this->checkBox22);
			this->groupBox4->Controls->Add(this->checkBox23);
			this->groupBox4->Controls->Add(this->checkBox24);
			this->groupBox4->Controls->Add(this->checkBox25);
			this->groupBox4->Controls->Add(this->checkBox26);
			this->groupBox4->Controls->Add(this->checkBox27);
			this->groupBox4->Controls->Add(this->checkBox28);
			this->groupBox4->Controls->Add(this->checkBox29);
			this->groupBox4->Controls->Add(this->checkBox30);
			this->groupBox4->Controls->Add(this->checkBox31);
			this->groupBox4->Controls->Add(this->checkBox32);
			this->groupBox4->Controls->Add(this->checkBox33);
			this->groupBox4->Controls->Add(this->checkBox34);
			this->groupBox4->Location = System::Drawing::Point(8, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(578, 42);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Комманда";
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(535, 19);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(38, 17);
			this->checkBox18->TabIndex = 0;
			this->checkBox18->Text = L"15";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(497, 19);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(38, 17);
			this->checkBox19->TabIndex = 0;
			this->checkBox19->Text = L"14";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(459, 19);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(38, 17);
			this->checkBox20->TabIndex = 0;
			this->checkBox20->Text = L"13";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(421, 19);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(38, 17);
			this->checkBox21->TabIndex = 0;
			this->checkBox21->Text = L"12";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(383, 19);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(38, 17);
			this->checkBox22->TabIndex = 0;
			this->checkBox22->Text = L"11";
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(345, 19);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(38, 17);
			this->checkBox23->TabIndex = 0;
			this->checkBox23->Text = L"10";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(307, 19);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(32, 17);
			this->checkBox24->TabIndex = 0;
			this->checkBox24->Text = L"9";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(307, 19);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(32, 17);
			this->checkBox25->TabIndex = 0;
			this->checkBox25->Text = L"1";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(275, 19);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(32, 17);
			this->checkBox26->TabIndex = 0;
			this->checkBox26->Text = L"8";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(237, 19);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(32, 17);
			this->checkBox27->TabIndex = 0;
			this->checkBox27->Text = L"7";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(199, 19);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(32, 17);
			this->checkBox28->TabIndex = 0;
			this->checkBox28->Text = L"6";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(161, 19);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(32, 17);
			this->checkBox29->TabIndex = 0;
			this->checkBox29->Text = L"5";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(123, 19);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(32, 17);
			this->checkBox30->TabIndex = 0;
			this->checkBox30->Text = L"4";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(85, 19);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(32, 17);
			this->checkBox31->TabIndex = 0;
			this->checkBox31->Text = L"3";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Location = System::Drawing::Point(47, 19);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(32, 17);
			this->checkBox32->TabIndex = 0;
			this->checkBox32->Text = L"2";
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Location = System::Drawing::Point(9, 19);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(32, 17);
			this->checkBox33->TabIndex = 0;
			this->checkBox33->Text = L"1";
			this->checkBox33->UseVisualStyleBackColor = true;
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->Location = System::Drawing::Point(9, 19);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(32, 17);
			this->checkBox34->TabIndex = 0;
			this->checkBox34->Text = L"1";
			this->checkBox34->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(595, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(592, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Время";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox17);
			this->groupBox2->Controls->Add(this->checkBox16);
			this->groupBox2->Controls->Add(this->checkBox15);
			this->groupBox2->Controls->Add(this->checkBox14);
			this->groupBox2->Controls->Add(this->checkBox13);
			this->groupBox2->Controls->Add(this->checkBox12);
			this->groupBox2->Controls->Add(this->checkBox11);
			this->groupBox2->Controls->Add(this->checkBox9);
			this->groupBox2->Controls->Add(this->checkBox8);
			this->groupBox2->Controls->Add(this->checkBox7);
			this->groupBox2->Controls->Add(this->checkBox6);
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox10);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(8, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(578, 42);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Флаги";
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(535, 19);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(38, 17);
			this->checkBox17->TabIndex = 0;
			this->checkBox17->Text = L"15";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(497, 19);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(38, 17);
			this->checkBox16->TabIndex = 0;
			this->checkBox16->Text = L"14";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(459, 19);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(38, 17);
			this->checkBox15->TabIndex = 0;
			this->checkBox15->Text = L"13";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(421, 19);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(38, 17);
			this->checkBox14->TabIndex = 0;
			this->checkBox14->Text = L"12";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(383, 19);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(38, 17);
			this->checkBox13->TabIndex = 0;
			this->checkBox13->Text = L"11";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(345, 19);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(38, 17);
			this->checkBox12->TabIndex = 0;
			this->checkBox12->Text = L"10";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(307, 19);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(32, 17);
			this->checkBox11->TabIndex = 0;
			this->checkBox11->Text = L"9";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(307, 19);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 17);
			this->checkBox9->TabIndex = 0;
			this->checkBox9->Text = L"1";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(275, 19);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(32, 17);
			this->checkBox8->TabIndex = 0;
			this->checkBox8->Text = L"8";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(237, 19);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(32, 17);
			this->checkBox7->TabIndex = 0;
			this->checkBox7->Text = L"7";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(199, 19);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(32, 17);
			this->checkBox6->TabIndex = 0;
			this->checkBox6->Text = L"6";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(161, 19);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(32, 17);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(123, 19);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(32, 17);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(85, 19);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(47, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(9, 19);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(32, 17);
			this->checkBox10->TabIndex = 0;
			this->checkBox10->Text = L"1";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(32, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						 | System::Windows::Forms::AnchorStyles::Left)
																						| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(8, 102);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->Size = System::Drawing::Size(705, 336);
			this->textBox4->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(612, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 22);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Записать в файл";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(427, 6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(98, 22);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Добавить слово";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(324, 6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 22);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Слово данных";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(221, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 22);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Ответное слово";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(102, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 22);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Коммандное слово";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 22);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Новый блок";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(519, 444);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 22);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Зашифровать";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 522);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Дешифровщик сигналов";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	IO::Stream^ file;
	std::wstring decodedText = L"";
	OpenFileDialog openFile;
	openFile.Filter = "Recorded signal files (*.asf)|*.asf";
	openFile.Multiselect = false;
	openFile.RestoreDirectory = true;
	if (openFile.ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((file = openFile.OpenFile()) != nullptr) {
			IO::FileInfo^ info = gcnew IO::FileInfo(openFile.FileName);
			fileLength = info->Length;
			decypherSignal(file);
			while (decodeSignal(file, &decodedText)) {
				textBox3->AppendText(gcnew String(decodedText.c_str()));
				decodedText = L"";
			}
			textBox3->AppendText(gcnew String(decodedText.c_str()));
			if (decodedText == L"Достигнут конец файла") {	
				button4->Enabled = true;
			}
			decodedText = L"";
			file->Close();
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->AppendText(gcnew String(connect().c_str()));
	textBox3->AppendText(gcnew String(writeToDb().c_str()));
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox1->Visible = true;
	groupBox3->Visible = false;
	groupBox5->Visible = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox1->Visible = false;
	groupBox3->Visible = true;
	groupBox5->Visible = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox1->Visible = false;
	groupBox3->Visible = false;
	groupBox5->Visible = true;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = L"Блок №1: Флаги: [Начало сообщения]. Время: 100500 мс:\r\n\tСлово 1: Коммандное слово. Комманда: Синхронизация";
}
};
}
