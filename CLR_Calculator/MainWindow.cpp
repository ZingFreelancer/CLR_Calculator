#include "MainWindow.h"
using namespace CLR_Calculator;

System::Void CLR_Calculator::MainWindow::btn_op_equals_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//If input is a binary conversion, do nothing
	if (m_hasBinaryInput)
	{
		ResetInput();
		return;
	}
	//If we are missing right paranthesis, dont evalute expression
	if (m_hasLeftParenthesis)
	{
		listB_history->Items->Add(txt_display->Text + "= missing closing paranthesis");
		txt_display->Text = "ERROR, missing )";
		m_clearDisplayOnNextInput = true;
		return;
	}
	//Take backup of expression
	System::String^ expression = txt_display->Text;
	//Evaluate expression using calculator class, replace display field value with answer from evaluation
	txt_display->Text = System::Convert::ToString(mp_calculator->evaluateExpression(StringToString(txt_display->Text)));
	//add expression and answer to history
	listB_history->Items->Add(expression + "=" + txt_display->Text);
	//safety reset of parenthesis bool
	m_hasLeftParenthesis = false;
}

System::Void CLR_Calculator::MainWindow::add_operand_to_expression(System::Object ^ sender, System::EventArgs ^ e)
{
	//Convert sender object to a button
	Button^ btn = safe_cast<Button^>(sender);
	addToExpression(btn->Text);
}

System::Void CLR_Calculator::MainWindow::add_simple_operator_to_expression(System::Object ^ sender, System::EventArgs ^ e)
{
	//Convert sender object to a button
	Button^ btn = safe_cast<Button^>(sender);
	//If we have no input, add no operator
	txt_display->Text = txt_display->Text + btn->Text;
}

System::Void CLR_Calculator::MainWindow::add_complex_operator_to_expression(System::Object ^ sender, System::EventArgs ^ e)
{
	//Convert sender to button object
	Button^ btn = safe_cast<Button^>(sender);
	//Check if you appending to current input value is legal operation
	if (!canAddComplexOperator(txt_display->Text[txt_display->Text->Length-1]))
		m_clearDisplayOnNextInput = true;
	//Add button name + left paranthesis to current expression
	addToExpression(btn->Text + "(");
	//Set bool to true in anticipation of right paranthesis
	m_hasLeftParenthesis = true;
}

System::Void CLR_Calculator::MainWindow::on_binary_op_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ btn = safe_cast<Button^>(sender);
	System::String^ expression = txt_display->Text;
	if (btn->Equals(btn_op_bin))
		txt_display->Text = System::Convert::ToString(static_cast<int>(Double::Parse(txt_display->Text)), 2);
	else if (btn->Equals(btn_op_oct))
		txt_display->Text = System::Convert::ToString(static_cast<int>(Double::Parse(txt_display->Text)), 8);
	else if (btn->Equals(btn_op_hex))
		txt_display->Text = System::Convert::ToString(static_cast<int>(Double::Parse(txt_display->Text)), 16);
	listB_history->Items->Add(btn->Text+"("+expression + ") = " + txt_display->Text);
	m_hasBinaryInput = true;
}

System::Void CLR_Calculator::MainWindow::add_parenthesis_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//If we have no input (its 0), replace 0 with (
	if (txt_display->Text == "0" || m_clearDisplayOnNextInput || m_hasBinaryInput)
	{
		ResetInput();
		txt_display->Text = "(";
		m_hasLeftParenthesis = true;
	}
	else
	{	//Check if we have an open parenthesis
		if (m_hasLeftParenthesis)
		{	//Close paranthesis
			m_hasLeftParenthesis = false;
			txt_display->Text += ")";
		}
		else //Open paranthesis
		{
			m_hasLeftParenthesis = true;
			txt_display->Text += "(";
		}
	}
}

System::Void CLR_Calculator::MainWindow::btn_clear_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ResetInput();
}

System::Void CLR_Calculator::MainWindow::btn_backslash_Click(System::Object ^ sender, System::EventArgs ^ e)
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

#pragma region temperature handling
System::Void CLR_Calculator::MainWindow::temperature_button_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	RadioButton^ op = safe_cast<RadioButton^>(sender);
	if (op->Equals(radio_celsius_to_fahrenheit))
		m_Operation = 'C';
	else if (op->Equals(radio_fahrenheit_to_celsius))
		m_Operation = 'F';
	else
		m_Operation = 'K';
}

System::Void CLR_Calculator::MainWindow::btn_temp_convert_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	switch (m_Operation)
	{
	case 'C': (float::TryParse(txt_temperature->Text, m_Celcius));
		txt_temp_result->Text = ((9 * m_Celcius) / 5) + 32+"";
		break;
	case 'F': (float::TryParse(txt_temperature->Text, m_Fehrenheit));
		txt_temp_result->Text = ((m_Fehrenheit - 32) * 5) / 9+ "";
		break;
	case 'K': (float::TryParse(txt_temperature->Text, m_Kelvin));
		txt_temp_result->Text = ((9 * m_Kelvin) / 5) + 32 + 273.15 + "";
		break;
	}
}

System::Void CLR_Calculator::MainWindow::btn_temp_reset_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	txt_temperature->Text = "0";
	txt_temp_result->Text = "0";
}
#pragma endregion //temperature handling

#pragma region Menu strip
System::Void CLR_Calculator::MainWindow::MainWindow_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	txt_display->Text = "0";
	standardToolStripMenuItem_Click(sender, e);
}

System::Void CLR_Calculator::MainWindow::standardToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
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

System::Void CLR_Calculator::MainWindow::scientificToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
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

System::Void CLR_Calculator::MainWindow::temperatureToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//Hide temperature section
	if (temperatureToolStripMenuItem->Checked)
	{
		MainWindow::Width = 640;
		temperatureToolStripMenuItem->Checked = false;
	}
	else //Show temperature section
	{
		MainWindow::Width = 1025;
		temperatureToolStripMenuItem->Checked = true;
		scientificToolStripMenuItem->Checked = true;
	}
	txt_temperature->Text = "0";
	txt_temp_result->Text = "0";
}

System::Void CLR_Calculator::MainWindow::menu_history_Click(System::Object ^ sender, System::EventArgs ^ e)
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

System::Void CLR_Calculator::MainWindow::exitToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Application::Exit();
}
#pragma endregion //menu strip

void CLR_Calculator::MainWindow::ResetInput()
{
	txt_display->Text = "0";
	m_hasLeftParenthesis = false;
	m_clearDisplayOnNextInput = false;
	m_hasBinaryInput = false;
}

void CLR_Calculator::MainWindow::addToExpression(System::String^ s)
{
	//If we have no input (its 0), or any of flags are set to true replace 0 with s
	if (txt_display->Text == "0" || m_clearDisplayOnNextInput || m_hasBinaryInput)
	{
		ResetInput();
		txt_display->Text = s;
	}
	else
	{	//Add s to current input
		txt_display->Text += s;
	}
}

bool CLR_Calculator::MainWindow::canAddComplexOperator(wchar_t c)
{
	switch (c)
	{
		case '%':
		case ')':
		case '+':
		case '-':
		case '/':
		case '*': return true;
		default: return false;
	}
}

void CLR_Calculator::MainWindow::ToSTDString(System::String ^ s, std::string & os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

std::string CLR_Calculator::MainWindow::StringToString(System::String ^ s)
{
	std::string re;
	ToSTDString(s, re);
	return re;
}

void CLR_Calculator::MainWindow::initOperators()
{
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_pluss->Text), OperatorTypes::Pluss);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_minus->Text), OperatorTypes::Minus);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_multiply->Text), OperatorTypes::Multiply);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_divide->Text), OperatorTypes::Divide);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_negative->Text), OperatorTypes::Negative);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_pi->Text), OperatorTypes::Pi);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_log->Text), OperatorTypes::Log);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_Ln_x->Text), OperatorTypes::Ln);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_sqrt->Text), OperatorTypes::Square);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_mod->Text), OperatorTypes::Mod);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_percent->Text), OperatorTypes::Percent);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_sin->Text), OperatorTypes::Sin);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_cos->Text), OperatorTypes::Cos);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_tan->Text), OperatorTypes::Tan);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_sinh->Text), OperatorTypes::Sinh);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_cosh->Text), OperatorTypes::Cosh);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_tanh->Text), OperatorTypes::Tanh);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_x_base3->Text), OperatorTypes::Xbase3);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_x_base2->Text), OperatorTypes::Xbase2);
	mp_calculator->enlistOperatorTypes(StringToString(btn_op_one_divide_x->Text), OperatorTypes::OneDivideX);
	mp_calculator->enlistOperatorTypes("(", OperatorTypes::LeftParenthesis);
	mp_calculator->enlistOperatorTypes(")", OperatorTypes::RightParenthesis);
}
