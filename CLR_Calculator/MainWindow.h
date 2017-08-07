#pragma once

namespace CLR_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txt_display;



	private: System::Windows::Forms::Button^  btn_7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btn_clear;

	private: System::Windows::Forms::Button^  btn_op_negative;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  btn_op_pluss;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  btn_op_minus;

	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  btn_op_multiply;

	private: System::Windows::Forms::Button^  btn_0;
	private: System::Windows::Forms::Button^  btn_sign_comma;
	private: System::Windows::Forms::Button^  btn_op_equals;
	private: System::Windows::Forms::Button^  btn_op_divide;




	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txt_display = (gcnew System::Windows::Forms::TextBox());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_op_negative = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btn_op_pluss = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btn_op_minus = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btn_op_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_sign_comma = (gcnew System::Windows::Forms::Button());
			this->btn_op_equals = (gcnew System::Windows::Forms::Button());
			this->btn_op_divide = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1164, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->historyToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::scientificToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->historyToolStripMenuItem->Text = L"History";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// txt_display
			// 
			this->txt_display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_display->Location = System::Drawing::Point(12, 37);
			this->txt_display->Name = L"txt_display";
			this->txt_display->Size = System::Drawing::Size(278, 29);
			this->txt_display->TabIndex = 1;
			this->txt_display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->Location = System::Drawing::Point(12, 80);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(65, 65);
			this->btn_7->TabIndex = 2;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(83, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 65);
			this->button1->TabIndex = 2;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(154, 80);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(65, 65);
			this->btn_clear->TabIndex = 2;
			this->btn_clear->Text = L"C";
			this->btn_clear->UseVisualStyleBackColor = true;
			// 
			// btn_op_negative
			// 
			this->btn_op_negative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_negative->Location = System::Drawing::Point(225, 80);
			this->btn_op_negative->Name = L"btn_op_negative";
			this->btn_op_negative->Size = System::Drawing::Size(65, 65);
			this->btn_op_negative->TabIndex = 2;
			this->btn_op_negative->Text = L"+-";
			this->btn_op_negative->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 65);
			this->button4->TabIndex = 2;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(83, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 65);
			this->button5->TabIndex = 2;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(154, 151);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 65);
			this->button6->TabIndex = 2;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// btn_op_pluss
			// 
			this->btn_op_pluss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_pluss->Location = System::Drawing::Point(225, 151);
			this->btn_op_pluss->Name = L"btn_op_pluss";
			this->btn_op_pluss->Size = System::Drawing::Size(65, 65);
			this->btn_op_pluss->TabIndex = 2;
			this->btn_op_pluss->Text = L"+";
			this->btn_op_pluss->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 222);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 2;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(83, 222);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 65);
			this->button9->TabIndex = 2;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(154, 222);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 65);
			this->button10->TabIndex = 2;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// btn_op_minus
			// 
			this->btn_op_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_minus->Location = System::Drawing::Point(225, 222);
			this->btn_op_minus->Name = L"btn_op_minus";
			this->btn_op_minus->Size = System::Drawing::Size(65, 65);
			this->btn_op_minus->TabIndex = 2;
			this->btn_op_minus->Text = L"-";
			this->btn_op_minus->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 293);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 65);
			this->button12->TabIndex = 2;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(83, 293);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 65);
			this->button13->TabIndex = 2;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(154, 293);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 65);
			this->button14->TabIndex = 2;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// btn_op_multiply
			// 
			this->btn_op_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_multiply->Location = System::Drawing::Point(225, 293);
			this->btn_op_multiply->Name = L"btn_op_multiply";
			this->btn_op_multiply->Size = System::Drawing::Size(65, 65);
			this->btn_op_multiply->TabIndex = 2;
			this->btn_op_multiply->Text = L"*";
			this->btn_op_multiply->UseVisualStyleBackColor = true;
			// 
			// btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->Location = System::Drawing::Point(12, 364);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(65, 65);
			this->btn_0->TabIndex = 2;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			// 
			// btn_sign_comma
			// 
			this->btn_sign_comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sign_comma->Location = System::Drawing::Point(83, 364);
			this->btn_sign_comma->Name = L"btn_sign_comma";
			this->btn_sign_comma->Size = System::Drawing::Size(65, 65);
			this->btn_sign_comma->TabIndex = 2;
			this->btn_sign_comma->Text = L",";
			this->btn_sign_comma->UseVisualStyleBackColor = true;
			// 
			// btn_op_equals
			// 
			this->btn_op_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_equals->Location = System::Drawing::Point(154, 364);
			this->btn_op_equals->Name = L"btn_op_equals";
			this->btn_op_equals->Size = System::Drawing::Size(65, 65);
			this->btn_op_equals->TabIndex = 2;
			this->btn_op_equals->Text = L"=";
			this->btn_op_equals->UseVisualStyleBackColor = true;
			// 
			// btn_op_divide
			// 
			this->btn_op_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_divide->Location = System::Drawing::Point(225, 364);
			this->btn_op_divide->Name = L"btn_op_divide";
			this->btn_op_divide->Size = System::Drawing::Size(65, 65);
			this->btn_op_divide->TabIndex = 2;
			this->btn_op_divide->Text = L"/";
			this->btn_op_divide->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(325, 80);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(65, 65);
			this->button20->TabIndex = 2;
			this->button20->Text = L"7";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(325, 151);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(65, 65);
			this->button21->TabIndex = 2;
			this->button21->Text = L"7";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(325, 222);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(65, 65);
			this->button22->TabIndex = 2;
			this->button22->Text = L"7";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(325, 293);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(65, 65);
			this->button23->TabIndex = 2;
			this->button23->Text = L"7";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(325, 364);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(65, 65);
			this->button24->TabIndex = 2;
			this->button24->Text = L"7";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(396, 80);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(65, 65);
			this->button25->TabIndex = 2;
			this->button25->Text = L"7";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(396, 151);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(65, 65);
			this->button26->TabIndex = 2;
			this->button26->Text = L"7";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(396, 222);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(65, 65);
			this->button27->TabIndex = 2;
			this->button27->Text = L"7";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(396, 293);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(65, 65);
			this->button28->TabIndex = 2;
			this->button28->Text = L"7";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(396, 364);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(65, 65);
			this->button29->TabIndex = 2;
			this->button29->Text = L"7";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(467, 80);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(65, 65);
			this->button30->TabIndex = 2;
			this->button30->Text = L"7";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(467, 151);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(65, 65);
			this->button31->TabIndex = 2;
			this->button31->Text = L"7";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(467, 222);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(65, 65);
			this->button32->TabIndex = 2;
			this->button32->Text = L"7";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(467, 293);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(65, 65);
			this->button33->TabIndex = 2;
			this->button33->Text = L"7";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(467, 364);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(65, 65);
			this->button34->TabIndex = 2;
			this->button34->Text = L"7";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(538, 80);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(65, 65);
			this->button35->TabIndex = 2;
			this->button35->Text = L"7";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(538, 151);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(65, 65);
			this->button36->TabIndex = 2;
			this->button36->Text = L"7";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(538, 222);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(65, 65);
			this->button37->TabIndex = 2;
			this->button37->Text = L"7";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(538, 293);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(65, 65);
			this->button38->TabIndex = 2;
			this->button38->Text = L"7";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(538, 364);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(65, 65);
			this->button39->TabIndex = 2;
			this->button39->Text = L"7";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(623, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(540, 410);
			this->panel1->TabIndex = 3;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 441);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->btn_op_divide);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->btn_op_multiply);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->btn_op_minus);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->btn_op_pluss);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->btn_op_negative);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->btn_op_equals);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->btn_sign_comma);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->txt_display);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double iFirstNum;
		double iSecondNum;
		double iResult;
		double a;
		String^ iOperator;
		float iCelcius, iFehrenheit, iKelvin;
		char iOperation;

	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		standardToolStripMenuItem_Click(sender, e);
		historyToolStripMenuItem->Visible = false;
	}

	private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Reduce size of window to hide remains of application
		MainWindow::Width = 320;
		MainWindow::Height = 480;

		//Display text box size
		txt_display->Width = 278;
	}

	private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Reduce size of window to hide remains of application
		MainWindow::Width = 640;
		txt_display->Width = 591;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}
	};
}
