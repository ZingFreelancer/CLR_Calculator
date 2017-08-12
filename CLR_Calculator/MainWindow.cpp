#include "MainWindow.h"
using namespace CLR_Calculator;

double CLR_Calculator::MainWindow::trigonometric_functions(Button^ funcOp, double value)
{
	if (funcOp->Equals(btn_op_sin))
		return Math::Sin(value);
	else if (funcOp->Equals(btn_op_cos))
		return Math::Cos(value);
	else if (funcOp->Equals(btn_op_tan))
		return Math::Tan(value);
	else if (funcOp->Equals(btn_op_sinh))
		return Math::Sinh(value);
	else if (funcOp->Equals(btn_op_cosh))
		return Math::Cosh(value);
	else if (funcOp->Equals(btn_op_tanh))
		return Math::Tanh(value);
	return 0.0;
}

System::Void CLR_Calculator::MainWindow::on_trigonometric_op_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ op = safe_cast<Button^>(sender);
	a = Double::Parse(txt_display->Text);
	lbl_operator->Text = op->Text;
	a = trigonometric_functions(op, a);
	listB_history->Items->Add(op->Text + "(" + txt_display->Text + ") = " + a);
	txt_display->Text = "" + a;
}

System::Void CLR_Calculator::MainWindow::on_scientific_op_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ op = safe_cast<Button^>(sender);
	a = Double::Parse(txt_display->Text);
	lbl_operator->Text = op->Text + "(" + txt_display->Text + ")";
	listB_history->Items->Add(lbl_operator->Text);
	a = scientific_functions(op, a);
	txt_display->Text = "" + a;
}

double CLR_Calculator::MainWindow::scientific_functions(Button ^ funcOp, double value)
{
	if (funcOp->Equals(btn_op_pi))
		return 3.14159265359;
	if (funcOp->Equals(btn_op_log))
		return Math::Log(value);
	else if (funcOp->Equals(btn_op_sqrt))
		return Math::Sqrt(value);
	else if (funcOp->Equals(btn_op_x_base3))
		return value * value * value;
	else if (funcOp->Equals(btn_op_x_base2))
		return value * value;
	else if (funcOp->Equals(btn_op_one_divide_x))
		return 1.0 / value;
	else if (funcOp->Equals(btn_op_Ln_x))
		return Math::Log(value);
	else if (funcOp->Equals(btn_op_percent))
		return value / 100.0;
	else if (funcOp->Equals(btn_op_dec))
		return Math::Round(value);
	else if (funcOp->Equals(btn_op_bin))
		return double::Parse(System::Convert::ToString(static_cast<int>(value), 2));
	else if (funcOp->Equals(btn_op_hex))
		return double::Parse(System::Convert::ToString(static_cast<int>(value), 16));
	else if (funcOp->Equals(btn_op_oct))
		return double::Parse(System::Convert::ToString(static_cast<int>(value), 8));
	else if (funcOp->Equals(btn_op_sin))
		return Math::Sin(value);
	else if (funcOp->Equals(btn_op_cos))
		return Math::Cos(value);
	else if (funcOp->Equals(btn_op_tan))
		return Math::Tan(value);
	else if (funcOp->Equals(btn_op_sinh))
		return Math::Sinh(value);
	else if (funcOp->Equals(btn_op_cosh))
		return Math::Cosh(value);
	else if (funcOp->Equals(btn_op_tanh))
		return Math::Tanh(value);
	return 0.0;
}

System::Void CLR_Calculator::MainWindow::MainWindow_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	txt_display->Text = "0";
	lbl_operator->Text = "";
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

System::Void CLR_Calculator::MainWindow::btn_number_Click(System::Object ^ sender, System::EventArgs ^ e)
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

System::Void CLR_Calculator::MainWindow::btn_clear_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	txt_display->Clear();
	txt_display->Text = "0";
	lbl_operator->Text = "";
}

System::Void CLR_Calculator::MainWindow::btn_sign_comma_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//Handle decimal point
	if (!txt_display->Text->Contains(","))
	{
		txt_display->Text = txt_display->Text + ",";
	}
}

System::Void CLR_Calculator::MainWindow::btn_arithmetic_op(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ op = safe_cast<Button^>(sender);
	iFirstNum = Double::Parse(txt_display->Text);
	txt_display->Text = "";
	iOperator = op->Text;
	lbl_operator->Text = System::Convert::ToString(iOperator);
}

System::Void CLR_Calculator::MainWindow::btn_op_negative_Click(System::Object ^ sender, System::EventArgs ^ e)
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

System::Void CLR_Calculator::MainWindow::btn_op_equals_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	iSecondNum = Double::Parse(txt_display->Text);
	if (iOperator == "+")
	{
		iResult = iFirstNum + iSecondNum;
	}
	else if (iOperator == "-")
	{
		iResult = iFirstNum - iSecondNum;
	}
	else if (iOperator == "*")
	{
		iResult = iFirstNum * iSecondNum;
	}
	else if (iOperator == "/")
	{
		iResult = iFirstNum / iSecondNum;
	}
	else if (iOperator == "Mod")
	{
		iResult = (int)iFirstNum % (int)iSecondNum;
	}
	else if (iOperator == "Exp")
	{
		iResult = (iFirstNum, (1 / iSecondNum));
	}
	txt_display->Text = "" + iResult;
	listB_history->Items->Add(System::Convert::ToString(lbl_operator->Text));
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

System::Void CLR_Calculator::MainWindow::temperature_button_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	RadioButton^ op = safe_cast<RadioButton^>(sender);
	if (op->Equals(radio_celsius_to_fahrenheit))
		iOperation = 'C';
	else if (op->Equals(radio_fahrenheit_to_celsius))
		iOperation = 'F';
	else
		iOperation = 'K';
}

System::Void CLR_Calculator::MainWindow::btn_temp_convert_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	switch (iOperation)
	{
	case 'C': (float::TryParse(txt_temperature->Text, iCelcius));
		txt_temp_result->Text = ((9 * iCelcius) / 5) + 32+"";
		break;
	case 'F': (float::TryParse(txt_temperature->Text, iFehrenheit));
		txt_temp_result->Text = ((iFehrenheit - 32) * 5) / 9+ "";
		break;
	case 'K': (float::TryParse(txt_temperature->Text, iKelvin));
		txt_temp_result->Text = ((9 * iKelvin) / 5) + 32 + 273.15 + "";
		break;
	}
}

System::Void CLR_Calculator::MainWindow::btn_temp_reset_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	txt_temperature->Text = "0";
	txt_temp_result->Text = "0";
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
	calculator->enlistOperatorTypes(StringToString(btn_op_pluss->Text), OperatorTypes::Pluss);
	calculator->enlistOperatorTypes(StringToString(btn_op_minus->Text), OperatorTypes::Minus);
	calculator->enlistOperatorTypes(StringToString(btn_op_multiply->Text), OperatorTypes::Multiply);
	calculator->enlistOperatorTypes(StringToString(btn_op_divide->Text), OperatorTypes::Divide);
	calculator->enlistOperatorTypes(StringToString(btn_op_negative->Text), OperatorTypes::Negative);
	calculator->enlistOperatorTypes(StringToString(btn_op_pi->Text), OperatorTypes::Pi);
	calculator->enlistOperatorTypes(StringToString(btn_op_log->Text), OperatorTypes::Log);
	calculator->enlistOperatorTypes(StringToString(btn_op_Ln_x->Text), OperatorTypes::Ln);
	calculator->enlistOperatorTypes(StringToString(btn_op_sqrt->Text), OperatorTypes::Square);
	calculator->enlistOperatorTypes(StringToString(btn_op_mod->Text), OperatorTypes::Mod);
	calculator->enlistOperatorTypes(StringToString(btn_op_percent->Text), OperatorTypes::Percent);
	calculator->enlistOperatorTypes(StringToString(btn_op_sin->Text), OperatorTypes::Sin);
	calculator->enlistOperatorTypes(StringToString(btn_op_cos->Text), OperatorTypes::Cos);
	calculator->enlistOperatorTypes(StringToString(btn_op_tan->Text), OperatorTypes::Tan);
	calculator->enlistOperatorTypes(StringToString(btn_op_sinh->Text), OperatorTypes::Sinh);
	calculator->enlistOperatorTypes(StringToString(btn_op_cosh->Text), OperatorTypes::Cosh);
	calculator->enlistOperatorTypes(StringToString(btn_op_tanh->Text), OperatorTypes::Tanh);
	calculator->enlistOperatorTypes(StringToString(btn_op_x_base3->Text), OperatorTypes::Xbase3);
	calculator->enlistOperatorTypes(StringToString(btn_op_x_base2->Text), OperatorTypes::Xbase2);
	calculator->enlistOperatorTypes(StringToString(btn_op_one_divide_x->Text), OperatorTypes::OneDivideX);
	calculator->enlistOperatorTypes("(", OperatorTypes::LeftParenthesis);
	calculator->enlistOperatorTypes(")", OperatorTypes::RightParenthesis);
}

//void Calculator::MarshalString(System::String ^ s, std::string &os)
//{
//	using namespace System::Runtime::InteropServices;
//	const char* chars =
//		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
//	os = chars;
//	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
//}
