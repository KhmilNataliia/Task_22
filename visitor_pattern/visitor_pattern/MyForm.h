#pragma once
#include "visitor.h"

namespace visitor_pattern {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label7;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(105, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1) Classic pavemet";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(105, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2) Triangle pavement";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(105, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"3) Colored pavement";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(105, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"4) Stone-imitated pavement";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Maroon;
			this->textBox1->Location = System::Drawing::Point(401, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 35);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Maroon;
			this->textBox2->Location = System::Drawing::Point(401, 240);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 35);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0";
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Maroon;
			this->textBox3->Location = System::Drawing::Point(401, 292);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 35);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"0";
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Maroon;
			this->textBox4->Location = System::Drawing::Point(401, 347);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 35);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"0";
			this->textBox4->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(507, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(507, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(507, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 35);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(507, 347);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 35);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(244, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(268, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"number of square meters:";
			this->label5->Visible = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(257, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(199, 54);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Vip-client";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(257, 257);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(199, 54);
			this->button6->TabIndex = 14;
			this->button6->Text = L"New client";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Maroon;
			this->button7->Location = System::Drawing::Point(228, 403);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(262, 54);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Registered client";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(223, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(289, 40);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Choose your status:";
			this->label6->Visible = false;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Maroon;
			this->button8->Location = System::Drawing::Point(249, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(211, 51);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Classic sizes";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Maroon;
			this->button9->Location = System::Drawing::Point(12, 324);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(182, 51);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Small sizes";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Maroon;
			this->button10->Location = System::Drawing::Point(603, 324);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(152, 51);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Big sizes";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(221, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(288, 40);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Choose sizes range:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 595);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		pavement_factory *obj;
		int client;

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		obj = new Classic_sizes_department();
		button8->Visible = false;
		button9->Visible = false;
		button10->Visible = false;
		label7->Visible = false;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		label6->Visible = true;
		obj->PrintDepartment();
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	obj = new Big_sizes_department();
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	label7->Visible = false;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	label6->Visible = true;
	obj->PrintDepartment();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	obj = new Small_sizes_department();
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	label7->Visible = false;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	label6->Visible = true;
	obj->PrintDepartment();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	client = 1;
	label6->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	client = 2;
	label6->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	client = 3;
	label6->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	switch (client)
	{
	case 1:
	{
		Vip_client *cl=new Vip_client();
		int col = 0; String^s = textBox1->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl,1,col);
		break;
	}
	case 2:
	{
		New_client *cl=new New_client();
		int col = 0; String^s = textBox1->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 1, col);
		break;
	}
	case 3:
	{
		Registered_client *cl=new Registered_client();
		int col = 0; String^s = textBox1->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 1, col);
		break;
	}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{

	switch (client)
	{
	case 1:
	{
		Vip_client *cl = new Vip_client();
		int col = 0; String^s = textBox2->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 2, col);
		break;
	}
	case 2:
	{
		New_client *cl = new New_client();
		int col = 0; String^s = textBox2->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 2, col);
		break;
	}
	case 3:
	{
		Registered_client *cl = new Registered_client();
		int col = 0; String^s = textBox2->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 2, col);
		break;
	}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{

	switch (client)
	{
	case 1:
	{
		Vip_client *cl = new Vip_client();
		int col = 0; String^s = textBox3->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 3, col);
		break;
	}
	case 2:
	{
		New_client *cl = new New_client();
		int col = 0; String^s = textBox3->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 3, col);
		break;
	}
	case 3:
	{
		Registered_client *cl = new Registered_client();
		int col = 0; String^s = textBox3->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 3, col);
		break;
	}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{

	switch (client)
	{
	case 1:
	{
		Vip_client *cl = new Vip_client();
		int col = 0; String^s = textBox4->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i]-'0'); }
		obj->accept(*cl, 4, col);
		break;
	}
	case 2:
	{
		New_client *cl = new New_client();
		int col = 0; String^s = textBox4->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 4, col);
		break;
	}
	case 3:
	{
		Registered_client *cl = new Registered_client();
		int col = 0; String^s = textBox4->Text; for (int i = 0; i < s->Length; i++) { col = col * 10 + (s[i] - '0'); }
		obj->accept(*cl, 4, col);
		break;
	}
	}
}
};
}
