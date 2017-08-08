#pragma once

namespace CLR_Calculator 
{
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

	protected:

	private: 
		System::Windows::Forms::TextBox^  txt_display;
		System::Windows::Forms::Button^  btn_backslash;
		System::Windows::Forms::Button^  btn_clear_everything;
		System::Windows::Forms::Button^  btn_clear;
		System::Windows::Forms::Button^  btn_op_negative;
		System::Windows::Forms::Button^  btn_seven;
		System::Windows::Forms::Button^  btn_eight;
		System::Windows::Forms::Button^  btn_nine;
		System::Windows::Forms::Button^  btn_op_pluss;
		System::Windows::Forms::Button^  btn_four;
		System::Windows::Forms::Button^  btn_five;
		System::Windows::Forms::Button^  btn_six;
		System::Windows::Forms::Button^  btn_op_minus;
		System::Windows::Forms::Button^  btn_one;
		System::Windows::Forms::Button^  btn_two;
		System::Windows::Forms::Button^  btn_three;
		System::Windows::Forms::Button^  btn_op_multiply;
		System::Windows::Forms::Button^  btn_0;
		System::Windows::Forms::Button^  btn_sign_comma;
		System::Windows::Forms::Button^  btn_op_equals;
		System::Windows::Forms::Button^  btn_op_divide;
		System::Windows::Forms::Button^  btn_op_pi;
		System::Windows::Forms::Button^  btn_op_sinh;
		System::Windows::Forms::Button^  btn_op_cosh;
		System::Windows::Forms::Button^  btn_op_tanh;
		System::Windows::Forms::Button^  btn_op_exp;
		System::Windows::Forms::Button^  btn_op_log;
		System::Windows::Forms::Button^  btn_op_sin;
		System::Windows::Forms::Button^  btn_op_cos;
		System::Windows::Forms::Button^  btn_op_tan;
		System::Windows::Forms::Button^  btn_op_mod;
		System::Windows::Forms::Button^  btn_op_sqrt;
		System::Windows::Forms::Button^  btn_op_dec;
		System::Windows::Forms::Button^  btn_op_bin;
		System::Windows::Forms::Button^  btn_op_hex;
		System::Windows::Forms::Button^  btn_op_oct;
	private: System::Windows::Forms::Button^  btn_op_x_base3;

	private: System::Windows::Forms::Button^  btn_op_x_base2;


		System::Windows::Forms::Button^  btn_op_one_divide_x;
		System::Windows::Forms::Button^  btn_op_in_x;
		System::Windows::Forms::Button^  btn_op_percent;
		System::Windows::Forms::Panel^  panel1;
		System::Windows::Forms::Label^  lbl_operator;
		System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  temperatureToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
		System::Windows::Forms::MenuStrip^  menuStrip1;
		System::Windows::Forms::ListBox^  listB_history;
		System::Windows::Forms::ToolStripMenuItem^  menu_history;
	private: System::Windows::Forms::RadioButton^  radio_kelvin;

	private: System::Windows::Forms::RadioButton^  radio_fahrenheit_to_celsius;
	private: System::Windows::Forms::RadioButton^  radio_celsius_to_fahrenheit;

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
			this->txt_display = (gcnew System::Windows::Forms::TextBox());
			this->btn_backslash = (gcnew System::Windows::Forms::Button());
			this->btn_clear_everything = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_op_negative = (gcnew System::Windows::Forms::Button());
			this->btn_seven = (gcnew System::Windows::Forms::Button());
			this->btn_eight = (gcnew System::Windows::Forms::Button());
			this->btn_nine = (gcnew System::Windows::Forms::Button());
			this->btn_op_pluss = (gcnew System::Windows::Forms::Button());
			this->btn_four = (gcnew System::Windows::Forms::Button());
			this->btn_five = (gcnew System::Windows::Forms::Button());
			this->btn_six = (gcnew System::Windows::Forms::Button());
			this->btn_op_minus = (gcnew System::Windows::Forms::Button());
			this->btn_one = (gcnew System::Windows::Forms::Button());
			this->btn_two = (gcnew System::Windows::Forms::Button());
			this->btn_three = (gcnew System::Windows::Forms::Button());
			this->btn_op_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_sign_comma = (gcnew System::Windows::Forms::Button());
			this->btn_op_equals = (gcnew System::Windows::Forms::Button());
			this->btn_op_divide = (gcnew System::Windows::Forms::Button());
			this->btn_op_pi = (gcnew System::Windows::Forms::Button());
			this->btn_op_sinh = (gcnew System::Windows::Forms::Button());
			this->btn_op_cosh = (gcnew System::Windows::Forms::Button());
			this->btn_op_tanh = (gcnew System::Windows::Forms::Button());
			this->btn_op_exp = (gcnew System::Windows::Forms::Button());
			this->btn_op_log = (gcnew System::Windows::Forms::Button());
			this->btn_op_sin = (gcnew System::Windows::Forms::Button());
			this->btn_op_cos = (gcnew System::Windows::Forms::Button());
			this->btn_op_tan = (gcnew System::Windows::Forms::Button());
			this->btn_op_mod = (gcnew System::Windows::Forms::Button());
			this->btn_op_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_op_dec = (gcnew System::Windows::Forms::Button());
			this->btn_op_bin = (gcnew System::Windows::Forms::Button());
			this->btn_op_hex = (gcnew System::Windows::Forms::Button());
			this->btn_op_oct = (gcnew System::Windows::Forms::Button());
			this->btn_op_x_base3 = (gcnew System::Windows::Forms::Button());
			this->btn_op_x_base2 = (gcnew System::Windows::Forms::Button());
			this->btn_op_one_divide_x = (gcnew System::Windows::Forms::Button());
			this->btn_op_in_x = (gcnew System::Windows::Forms::Button());
			this->btn_op_percent = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_operator = (gcnew System::Windows::Forms::Label());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_history = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->listB_history = (gcnew System::Windows::Forms::ListBox());
			this->radio_celsius_to_fahrenheit = (gcnew System::Windows::Forms::RadioButton());
			this->radio_fahrenheit_to_celsius = (gcnew System::Windows::Forms::RadioButton());
			this->radio_kelvin = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			// btn_backslash
			// 
			this->btn_backslash->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn_backslash->Location = System::Drawing::Point(12, 80);
			this->btn_backslash->Name = L"btn_backslash";
			this->btn_backslash->Size = System::Drawing::Size(65, 65);
			this->btn_backslash->TabIndex = 2;
			this->btn_backslash->Text = L"";
			this->btn_backslash->UseVisualStyleBackColor = true;
			this->btn_backslash->Click += gcnew System::EventHandler(this, &MainWindow::btn_backslash_Click);
			// 
			// btn_clear_everything
			// 
			this->btn_clear_everything->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_clear_everything->Location = System::Drawing::Point(83, 80);
			this->btn_clear_everything->Name = L"btn_clear_everything";
			this->btn_clear_everything->Size = System::Drawing::Size(65, 65);
			this->btn_clear_everything->TabIndex = 2;
			this->btn_clear_everything->Text = L"CE";
			this->btn_clear_everything->UseVisualStyleBackColor = true;
			this->btn_clear_everything->Click += gcnew System::EventHandler(this, &MainWindow::btn_clear_Click);
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
			this->btn_clear->Click += gcnew System::EventHandler(this, &MainWindow::btn_clear_Click);
			// 
			// btn_op_negative
			// 
			this->btn_op_negative->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_negative->Location = System::Drawing::Point(225, 80);
			this->btn_op_negative->Name = L"btn_op_negative";
			this->btn_op_negative->Size = System::Drawing::Size(65, 65);
			this->btn_op_negative->TabIndex = 2;
			this->btn_op_negative->Text = L"±";
			this->btn_op_negative->UseVisualStyleBackColor = true;
			this->btn_op_negative->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_negative_Click);
			// 
			// btn_seven
			// 
			this->btn_seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seven->Location = System::Drawing::Point(12, 151);
			this->btn_seven->Name = L"btn_seven";
			this->btn_seven->Size = System::Drawing::Size(65, 65);
			this->btn_seven->TabIndex = 2;
			this->btn_seven->Text = L"7";
			this->btn_seven->UseVisualStyleBackColor = true;
			this->btn_seven->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_eight
			// 
			this->btn_eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eight->Location = System::Drawing::Point(83, 151);
			this->btn_eight->Name = L"btn_eight";
			this->btn_eight->Size = System::Drawing::Size(65, 65);
			this->btn_eight->TabIndex = 2;
			this->btn_eight->Text = L"8";
			this->btn_eight->UseVisualStyleBackColor = true;
			this->btn_eight->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_nine
			// 
			this->btn_nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_nine->Location = System::Drawing::Point(154, 151);
			this->btn_nine->Name = L"btn_nine";
			this->btn_nine->Size = System::Drawing::Size(65, 65);
			this->btn_nine->TabIndex = 2;
			this->btn_nine->Text = L"9";
			this->btn_nine->UseVisualStyleBackColor = true;
			this->btn_nine->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
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
			this->btn_op_pluss->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
			// 
			// btn_four
			// 
			this->btn_four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_four->Location = System::Drawing::Point(12, 222);
			this->btn_four->Name = L"btn_four";
			this->btn_four->Size = System::Drawing::Size(65, 65);
			this->btn_four->TabIndex = 2;
			this->btn_four->Text = L"4";
			this->btn_four->UseVisualStyleBackColor = true;
			this->btn_four->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_five
			// 
			this->btn_five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_five->Location = System::Drawing::Point(83, 222);
			this->btn_five->Name = L"btn_five";
			this->btn_five->Size = System::Drawing::Size(65, 65);
			this->btn_five->TabIndex = 2;
			this->btn_five->Text = L"5";
			this->btn_five->UseVisualStyleBackColor = true;
			this->btn_five->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_six
			// 
			this->btn_six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_six->Location = System::Drawing::Point(154, 222);
			this->btn_six->Name = L"btn_six";
			this->btn_six->Size = System::Drawing::Size(65, 65);
			this->btn_six->TabIndex = 2;
			this->btn_six->Text = L"6";
			this->btn_six->UseVisualStyleBackColor = true;
			this->btn_six->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
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
			this->btn_op_minus->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
			// 
			// btn_one
			// 
			this->btn_one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_one->Location = System::Drawing::Point(12, 293);
			this->btn_one->Name = L"btn_one";
			this->btn_one->Size = System::Drawing::Size(65, 65);
			this->btn_one->TabIndex = 2;
			this->btn_one->Text = L"1";
			this->btn_one->UseVisualStyleBackColor = true;
			this->btn_one->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_two
			// 
			this->btn_two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_two->Location = System::Drawing::Point(83, 293);
			this->btn_two->Name = L"btn_two";
			this->btn_two->Size = System::Drawing::Size(65, 65);
			this->btn_two->TabIndex = 2;
			this->btn_two->Text = L"2";
			this->btn_two->UseVisualStyleBackColor = true;
			this->btn_two->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
			// 
			// btn_three
			// 
			this->btn_three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_three->Location = System::Drawing::Point(154, 293);
			this->btn_three->Name = L"btn_three";
			this->btn_three->Size = System::Drawing::Size(65, 65);
			this->btn_three->TabIndex = 2;
			this->btn_three->Text = L"3";
			this->btn_three->UseVisualStyleBackColor = true;
			this->btn_three->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
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
			this->btn_op_multiply->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
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
			this->btn_0->Click += gcnew System::EventHandler(this, &MainWindow::btn_number_Click);
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
			this->btn_sign_comma->Click += gcnew System::EventHandler(this, &MainWindow::btn_sign_comma_Click);
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
			this->btn_op_equals->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_equals_Click);
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
			this->btn_op_divide->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
			// 
			// btn_op_pi
			// 
			this->btn_op_pi->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_pi->Location = System::Drawing::Point(325, 80);
			this->btn_op_pi->Name = L"btn_op_pi";
			this->btn_op_pi->Size = System::Drawing::Size(65, 65);
			this->btn_op_pi->TabIndex = 2;
			this->btn_op_pi->Text = L"π";
			this->btn_op_pi->UseVisualStyleBackColor = true;
			this->btn_op_pi->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_pi_Click);
			// 
			// btn_op_sinh
			// 
			this->btn_op_sinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_sinh->Location = System::Drawing::Point(325, 151);
			this->btn_op_sinh->Name = L"btn_op_sinh";
			this->btn_op_sinh->Size = System::Drawing::Size(65, 65);
			this->btn_op_sinh->TabIndex = 2;
			this->btn_op_sinh->Text = L"Sinh";
			this->btn_op_sinh->UseVisualStyleBackColor = true;
			this->btn_op_sinh->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_cosh
			// 
			this->btn_op_cosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_cosh->Location = System::Drawing::Point(325, 222);
			this->btn_op_cosh->Name = L"btn_op_cosh";
			this->btn_op_cosh->Size = System::Drawing::Size(65, 65);
			this->btn_op_cosh->TabIndex = 2;
			this->btn_op_cosh->Text = L"Cosh";
			this->btn_op_cosh->UseVisualStyleBackColor = true;
			this->btn_op_cosh->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_tanh
			// 
			this->btn_op_tanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_tanh->Location = System::Drawing::Point(325, 293);
			this->btn_op_tanh->Name = L"btn_op_tanh";
			this->btn_op_tanh->Size = System::Drawing::Size(65, 65);
			this->btn_op_tanh->TabIndex = 2;
			this->btn_op_tanh->Text = L"Tanh";
			this->btn_op_tanh->UseVisualStyleBackColor = true;
			this->btn_op_tanh->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_exp
			// 
			this->btn_op_exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_exp->Location = System::Drawing::Point(325, 364);
			this->btn_op_exp->Name = L"btn_op_exp";
			this->btn_op_exp->Size = System::Drawing::Size(65, 65);
			this->btn_op_exp->TabIndex = 2;
			this->btn_op_exp->Text = L"Exp";
			this->btn_op_exp->UseVisualStyleBackColor = true;
			this->btn_op_exp->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
			// 
			// btn_op_log
			// 
			this->btn_op_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_op_log->Location = System::Drawing::Point(396, 80);
			this->btn_op_log->Name = L"btn_op_log";
			this->btn_op_log->Size = System::Drawing::Size(65, 65);
			this->btn_op_log->TabIndex = 2;
			this->btn_op_log->Text = L"Log";
			this->btn_op_log->UseVisualStyleBackColor = true;
			this->btn_op_log->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_log_Click);
			// 
			// btn_op_sin
			// 
			this->btn_op_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_sin->Location = System::Drawing::Point(396, 151);
			this->btn_op_sin->Name = L"btn_op_sin";
			this->btn_op_sin->Size = System::Drawing::Size(65, 65);
			this->btn_op_sin->TabIndex = 2;
			this->btn_op_sin->Text = L"Sin";
			this->btn_op_sin->UseVisualStyleBackColor = true;
			this->btn_op_sin->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_cos
			// 
			this->btn_op_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_cos->Location = System::Drawing::Point(396, 222);
			this->btn_op_cos->Name = L"btn_op_cos";
			this->btn_op_cos->Size = System::Drawing::Size(65, 65);
			this->btn_op_cos->TabIndex = 2;
			this->btn_op_cos->Text = L"Cos";
			this->btn_op_cos->UseVisualStyleBackColor = true;
			this->btn_op_cos->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_tan
			// 
			this->btn_op_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_tan->Location = System::Drawing::Point(396, 293);
			this->btn_op_tan->Name = L"btn_op_tan";
			this->btn_op_tan->Size = System::Drawing::Size(65, 65);
			this->btn_op_tan->TabIndex = 2;
			this->btn_op_tan->Text = L"Tan";
			this->btn_op_tan->UseVisualStyleBackColor = true;
			this->btn_op_tan->Click += gcnew System::EventHandler(this, &MainWindow::on_trigonometric_op_Click);
			// 
			// btn_op_mod
			// 
			this->btn_op_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_mod->Location = System::Drawing::Point(396, 364);
			this->btn_op_mod->Name = L"btn_op_mod";
			this->btn_op_mod->Size = System::Drawing::Size(65, 65);
			this->btn_op_mod->TabIndex = 2;
			this->btn_op_mod->Text = L"Mod";
			this->btn_op_mod->UseVisualStyleBackColor = true;
			this->btn_op_mod->Click += gcnew System::EventHandler(this, &MainWindow::btn_arithmetic_op);
			// 
			// btn_op_sqrt
			// 
			this->btn_op_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_sqrt->Location = System::Drawing::Point(467, 80);
			this->btn_op_sqrt->Name = L"btn_op_sqrt";
			this->btn_op_sqrt->Size = System::Drawing::Size(65, 65);
			this->btn_op_sqrt->TabIndex = 2;
			this->btn_op_sqrt->Text = L"Sqrt";
			this->btn_op_sqrt->UseVisualStyleBackColor = true;
			this->btn_op_sqrt->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_sqrt_Click);
			// 
			// btn_op_dec
			// 
			this->btn_op_dec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_dec->Location = System::Drawing::Point(467, 151);
			this->btn_op_dec->Name = L"btn_op_dec";
			this->btn_op_dec->Size = System::Drawing::Size(65, 65);
			this->btn_op_dec->TabIndex = 2;
			this->btn_op_dec->Text = L"Dec";
			this->btn_op_dec->UseVisualStyleBackColor = true;
			this->btn_op_dec->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_dec_Click);
			// 
			// btn_op_bin
			// 
			this->btn_op_bin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_bin->Location = System::Drawing::Point(466, 222);
			this->btn_op_bin->Name = L"btn_op_bin";
			this->btn_op_bin->Size = System::Drawing::Size(65, 65);
			this->btn_op_bin->TabIndex = 2;
			this->btn_op_bin->Text = L"Bin";
			this->btn_op_bin->UseVisualStyleBackColor = true;
			this->btn_op_bin->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_bin_Click);
			// 
			// btn_op_hex
			// 
			this->btn_op_hex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_hex->Location = System::Drawing::Point(467, 293);
			this->btn_op_hex->Name = L"btn_op_hex";
			this->btn_op_hex->Size = System::Drawing::Size(65, 65);
			this->btn_op_hex->TabIndex = 2;
			this->btn_op_hex->Text = L"Hex";
			this->btn_op_hex->UseVisualStyleBackColor = true;
			this->btn_op_hex->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_hex_Click);
			// 
			// btn_op_oct
			// 
			this->btn_op_oct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_oct->Location = System::Drawing::Point(467, 364);
			this->btn_op_oct->Name = L"btn_op_oct";
			this->btn_op_oct->Size = System::Drawing::Size(65, 65);
			this->btn_op_oct->TabIndex = 2;
			this->btn_op_oct->Text = L"Oct";
			this->btn_op_oct->UseVisualStyleBackColor = true;
			this->btn_op_oct->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_oct_Click);
			// 
			// btn_op_x_base3
			// 
			this->btn_op_x_base3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_x_base3->Location = System::Drawing::Point(538, 80);
			this->btn_op_x_base3->Name = L"btn_op_x_base3";
			this->btn_op_x_base3->Size = System::Drawing::Size(65, 65);
			this->btn_op_x_base3->TabIndex = 2;
			this->btn_op_x_base3->Text = L"x^3";
			this->btn_op_x_base3->UseVisualStyleBackColor = true;
			this->btn_op_x_base3->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_x_base3_Click);
			// 
			// btn_op_x_base2
			// 
			this->btn_op_x_base2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_x_base2->Location = System::Drawing::Point(538, 151);
			this->btn_op_x_base2->Name = L"btn_op_x_base2";
			this->btn_op_x_base2->Size = System::Drawing::Size(65, 65);
			this->btn_op_x_base2->TabIndex = 2;
			this->btn_op_x_base2->Text = L"x^2";
			this->btn_op_x_base2->UseVisualStyleBackColor = true;
			this->btn_op_x_base2->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_x_base2_Click);
			// 
			// btn_op_one_divide_x
			// 
			this->btn_op_one_divide_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_op_one_divide_x->Location = System::Drawing::Point(538, 222);
			this->btn_op_one_divide_x->Name = L"btn_op_one_divide_x";
			this->btn_op_one_divide_x->Size = System::Drawing::Size(65, 65);
			this->btn_op_one_divide_x->TabIndex = 2;
			this->btn_op_one_divide_x->Text = L"1/x";
			this->btn_op_one_divide_x->UseVisualStyleBackColor = true;
			this->btn_op_one_divide_x->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_one_divide_x_Click);
			// 
			// btn_op_in_x
			// 
			this->btn_op_in_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_in_x->Location = System::Drawing::Point(538, 293);
			this->btn_op_in_x->Name = L"btn_op_in_x";
			this->btn_op_in_x->Size = System::Drawing::Size(65, 65);
			this->btn_op_in_x->TabIndex = 2;
			this->btn_op_in_x->Text = L"In x";
			this->btn_op_in_x->UseVisualStyleBackColor = true;
			this->btn_op_in_x->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_in_x_Click);
			// 
			// btn_op_percent
			// 
			this->btn_op_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_op_percent->Location = System::Drawing::Point(538, 364);
			this->btn_op_percent->Name = L"btn_op_percent";
			this->btn_op_percent->Size = System::Drawing::Size(65, 65);
			this->btn_op_percent->TabIndex = 2;
			this->btn_op_percent->Text = L"%";
			this->btn_op_percent->UseVisualStyleBackColor = true;
			this->btn_op_percent->Click += gcnew System::EventHandler(this, &MainWindow::btn_op_percent_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radio_kelvin);
			this->panel1->Controls->Add(this->radio_fahrenheit_to_celsius);
			this->panel1->Controls->Add(this->radio_celsius_to_fahrenheit);
			this->panel1->Location = System::Drawing::Point(623, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(540, 410);
			this->panel1->TabIndex = 3;
			// 
			// lbl_operator
			// 
			this->lbl_operator->BackColor = System::Drawing::Color::White;
			this->lbl_operator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_operator->Location = System::Drawing::Point(13, 39);
			this->lbl_operator->Name = L"lbl_operator";
			this->lbl_operator->Size = System::Drawing::Size(25, 25);
			this->lbl_operator->TabIndex = 4;
			this->lbl_operator->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->temperatureToolStripMenuItem, this->menu_history, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::scientificToolStripMenuItem_Click);
			// 
			// temperatureToolStripMenuItem
			// 
			this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
			this->temperatureToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->temperatureToolStripMenuItem->Text = L"Temperature";
			this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::temperatureToolStripMenuItem_Click);
			// 
			// menu_history
			// 
			this->menu_history->Name = L"menu_history";
			this->menu_history->Size = System::Drawing::Size(141, 22);
			this->menu_history->Text = L"History";
			this->menu_history->Click += gcnew System::EventHandler(this, &MainWindow::menu_history_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(141, 22);
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
			// listB_history
			// 
			this->listB_history->FormattingEnabled = true;
			this->listB_history->Location = System::Drawing::Point(12, 441);
			this->listB_history->Name = L"listB_history";
			this->listB_history->Size = System::Drawing::Size(278, 134);
			this->listB_history->TabIndex = 5;
			// 
			// radio_celsius_to_fahrenheit
			// 
			this->radio_celsius_to_fahrenheit->AutoSize = true;
			this->radio_celsius_to_fahrenheit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radio_celsius_to_fahrenheit->Location = System::Drawing::Point(20, 21);
			this->radio_celsius_to_fahrenheit->Name = L"radio_celsius_to_fahrenheit";
			this->radio_celsius_to_fahrenheit->Size = System::Drawing::Size(226, 28);
			this->radio_celsius_to_fahrenheit->TabIndex = 0;
			this->radio_celsius_to_fahrenheit->TabStop = true;
			this->radio_celsius_to_fahrenheit->Text = L"Celsius to Fahrenheit";
			this->radio_celsius_to_fahrenheit->UseVisualStyleBackColor = true;
			// 
			// radio_fahrenheit_to_celsius
			// 
			this->radio_fahrenheit_to_celsius->AutoSize = true;
			this->radio_fahrenheit_to_celsius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radio_fahrenheit_to_celsius->Location = System::Drawing::Point(20, 71);
			this->radio_fahrenheit_to_celsius->Name = L"radio_fahrenheit_to_celsius";
			this->radio_fahrenheit_to_celsius->Size = System::Drawing::Size(226, 28);
			this->radio_fahrenheit_to_celsius->TabIndex = 0;
			this->radio_fahrenheit_to_celsius->TabStop = true;
			this->radio_fahrenheit_to_celsius->Text = L"Fahrenheit to Celsius";
			this->radio_fahrenheit_to_celsius->UseVisualStyleBackColor = true;
			// 
			// radio_kelvin
			// 
			this->radio_kelvin->AutoSize = true;
			this->radio_kelvin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_kelvin->Location = System::Drawing::Point(20, 124);
			this->radio_kelvin->Name = L"radio_kelvin";
			this->radio_kelvin->Size = System::Drawing::Size(85, 28);
			this->radio_kelvin->TabIndex = 0;
			this->radio_kelvin->TabStop = true;
			this->radio_kelvin->Text = L"Kelvin";
			this->radio_kelvin->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 581);
			this->Controls->Add(this->listB_history);
			this->Controls->Add(this->lbl_operator);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_op_percent);
			this->Controls->Add(this->btn_op_divide);
			this->Controls->Add(this->btn_op_in_x);
			this->Controls->Add(this->btn_op_multiply);
			this->Controls->Add(this->btn_op_one_divide_x);
			this->Controls->Add(this->btn_op_x_base2);
			this->Controls->Add(this->btn_op_minus);
			this->Controls->Add(this->btn_op_x_base3);
			this->Controls->Add(this->btn_op_pluss);
			this->Controls->Add(this->btn_op_oct);
			this->Controls->Add(this->btn_op_negative);
			this->Controls->Add(this->btn_op_hex);
			this->Controls->Add(this->btn_op_equals);
			this->Controls->Add(this->btn_op_bin);
			this->Controls->Add(this->btn_three);
			this->Controls->Add(this->btn_op_dec);
			this->Controls->Add(this->btn_six);
			this->Controls->Add(this->btn_op_sqrt);
			this->Controls->Add(this->btn_nine);
			this->Controls->Add(this->btn_op_mod);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_op_tan);
			this->Controls->Add(this->btn_sign_comma);
			this->Controls->Add(this->btn_op_cos);
			this->Controls->Add(this->btn_two);
			this->Controls->Add(this->btn_op_sin);
			this->Controls->Add(this->btn_five);
			this->Controls->Add(this->btn_op_log);
			this->Controls->Add(this->btn_eight);
			this->Controls->Add(this->btn_op_exp);
			this->Controls->Add(this->btn_clear_everything);
			this->Controls->Add(this->btn_op_tanh);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_op_cosh);
			this->Controls->Add(this->btn_one);
			this->Controls->Add(this->btn_op_sinh);
			this->Controls->Add(this->btn_four);
			this->Controls->Add(this->btn_op_pi);
			this->Controls->Add(this->btn_seven);
			this->Controls->Add(this->btn_backslash);
			this->Controls->Add(this->txt_display);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
private:
	double trigonometric_functions(Button^ funcOp, double value);
	System::Void on_trigonometric_op_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		txt_display->Text = "0";
		lbl_operator->Text = "";
		standardToolStripMenuItem_Click(sender, e);
	}

	private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Reduce size of window to hide remains of application
		MainWindow::Width = 320;
		MainWindow::Height = 480;
		standardToolStripMenuItem->Checked = true;

		//Display text box size
		txt_display->Width = 278;
		scientificToolStripMenuItem->Checked = false;
		temperatureToolStripMenuItem->Checked = false;
		menu_history->Checked = false;
	}

	private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Hide scientific section and everything that is to the right of it
		if (scientificToolStripMenuItem->Checked)
		{
			standardToolStripMenuItem_Click(sender, e);
			scientificToolStripMenuItem->Checked = false;
		}
		else
		{
			//Show scientific section of window
			MainWindow::Width = 640;
			scientificToolStripMenuItem->Checked = true;
		}
		temperatureToolStripMenuItem->Checked = false;
	}
	//Set window size to include scientific and standard sections
	private: System::Void temperatureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Hide temperature section
		if (temperatureToolStripMenuItem->Checked)
		{
			MainWindow::Width = 640;
			temperatureToolStripMenuItem->Checked = false;
		}
		else //Show temperature section
		{
			MainWindow::Width = 1180;
			temperatureToolStripMenuItem->Checked = true;
			scientificToolStripMenuItem->Checked = true;
		}
	}

	private: System::Void menu_history_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (menu_history->Checked == false)
		{
			menu_history->Checked = true;
			MainWindow::Height = 620;
		}
		else
		{
			menu_history->Checked = false;
			MainWindow::Height = 480;
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}

	private: System::Void btn_number_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ numbers = safe_cast<Button^>(sender);

		if (txt_display->Text == "0")
		{
			txt_display->Text = numbers->Text;
		}
		else
		{
			txt_display->Text = txt_display->Text + numbers->Text;
		}
	}
	private: System::Void btn_clear_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		txt_display->Clear();
		txt_display->Text = "0";
		lbl_operator->Text = "";
	}
	private: System::Void btn_sign_comma_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Handle decimal point
		if (!txt_display->Text->Contains(","))
		{
			txt_display->Text = txt_display->Text + ",";
		}
	}

	private: System::Void btn_arithmetic_op(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ op = safe_cast<Button^>(sender);
		iFirstNum = Double::Parse(txt_display->Text);
		txt_display->Text = "";
		iOperator = op->Text;
		lbl_operator->Text = System::Convert::ToString(iOperator);
	}

	private: System::Void btn_op_negative_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Plus / Minus
		if (txt_display->Text->Contains("-"))
		{
			txt_display->Text = txt_display->Text->Remove(0, 1);
		}
		else
		{
			txt_display->Text = "-" + txt_display->Text;
		}
	}
	private: System::Void btn_op_equals_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		iSecondNum = Double::Parse(txt_display->Text);
		if (iOperator == "+")
		{
			iResult = iFirstNum + iSecondNum;
			txt_display->Text = ""+iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
		else if (iOperator == "-")
		{
			iResult = iFirstNum - iSecondNum;
			txt_display->Text = "" + iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
		else if (iOperator == "*")
		{
			iResult = iFirstNum * iSecondNum;
			txt_display->Text = "" + iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
		else if (iOperator == "/")
		{
			iResult = iFirstNum / iSecondNum;
			txt_display->Text = "" + iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
		else if (iOperator == "Mod")
		{
			iResult = (int)iFirstNum % (int)iSecondNum;
			txt_display->Text = "" + iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
		else if (iOperator == "Exp")
		{
			iResult = (iFirstNum, (1 / iSecondNum));
			txt_display->Text = "" + iResult;
			listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
		}
	}

	private: System::Void btn_backslash_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//If input is longer than 1, remove last number
		if (txt_display->Text->Length > 1)
		{
			txt_display->Text = txt_display->Text->Remove(txt_display->Text->Length - 1, 1);
		}
		else //Reset input to zero if input is 1 or less
		{
			txt_display->Text = "0";
		}
	}

	//Pi button event
	private: System::Void btn_op_pi_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		txt_display->Text = "3.14";
	}

	//Log button event
	private: System::Void btn_op_log_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		a = Double::Parse(txt_display->Text);
		lbl_operator->Text = "log (" + txt_display->Text + ")";
		listB_history->Items->Add(lbl_operator->Text);
		a = Math::Log(a);
		txt_display->Text = ""+a;
	}

	//Square button event
	private: System::Void btn_op_sqrt_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		a = Double::Parse(txt_display->Text);
		a = Math::Sqrt(a);
		listB_history->Items->Add("Sqrt("+txt_display->Text+") = "+a);
		txt_display->Text = "" + a;
	}

	//Denary / decimal
	private: System::Void btn_op_dec_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ op = safe_cast<Button^>(sender);
		int a = int::Parse(txt_display->Text);
		lbl_operator->Text = op->Text;
		listB_history->Items->Add(op->Text + "(" + txt_display->Text + ") = " + a);
		txt_display->Text = "" + a;
	}
private:
	//Binary operator event handler
	System::Void btn_op_bin_Click(System::Object^  sender, System::EventArgs^  e);
	//Hexadecimal operator event handler
	System::Void btn_op_hex_Click(System::Object^  sender, System::EventArgs^  e);
	//Octal operator event handler
	System::Void btn_op_oct_Click(System::Object^  sender, System::EventArgs^  e);
	//x^3 operator event handler
	System::Void btn_op_x_base3_Click(System::Object^  sender, System::EventArgs^  e);
	//x^2 operator event handler
	System::Void btn_op_x_base2_Click(System::Object^  sender, System::EventArgs^  e);
	// 1 / x operator event handler
	System::Void btn_op_one_divide_x_Click(System::Object^  sender, System::EventArgs^  e);
	// In x operator event handler
	System::Void btn_op_in_x_Click(System::Object^  sender, System::EventArgs^  e);
	// % operator event handler
	System::Void btn_op_percent_Click(System::Object^  sender, System::EventArgs^  e);
};
}
