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