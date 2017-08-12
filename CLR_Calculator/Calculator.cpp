#include "Calculator.h"

Calculator::Calculator() : ERROR(false), operandStack(), operatorStack(), operatorTypeMap()
{}

Calculator::~Calculator()
{}

double Calculator::evaluateExpression(std::string expression)
{
	ClearStacks();
	std::string digits = "";
	std::string currentOperator = "";
	for (unsigned int i = 0; i < expression.length(); i++)
	{
		//Check if we are dealing with a number or decimal sign
		if (isdigit(expression[i]) || expression[i] == ',')
		{
			//Add current sign to string list
			digits += expression[i];
		}
		else
		{
			//Check if digits should be pushed to stack
			if (!digits.empty())
			{	//Push digits to double stack using stod
				operandStack.push(std::stod(digits));
				digits.clear();
			}
			currentOperator += expression[i];
			//Check if map has current operator, if not, continue for loop
			if (operatorTypeMap.count(currentOperator))
			{	//If we have items on stack & our current operator have lower presedence than operator on stack
				OperatorTypes curOpType = operatorTypeMap.at(currentOperator);
				currentOperator = "";
				while (!operatorStack.empty() && currentOperatorHasLowerPriority(operatorStack.top(), curOpType))
				{	//Perform operation using our current operator
					evaluateOperation(operatorStack.top());
				}
				//Push current operator on operator stack
				operatorStack.push(curOpType);
			}
		}
		//Check if we have remaining values in digits and push them to operand stack
		if(!digits.empty())
			operandStack.push(std::stod(digits));
		//Evaluate remaining operator stack
		while (!operatorStack.empty())
		{
			evaluateOperation(operatorStack.top());
		}
	}
	//The last item on operand stack is the answer to the expression
	return operandStack.top();
}

void Calculator::evaluateOperation(OperatorTypes op)
{
	switch (op)
	{
	case RightParenthesis:
	{
		while (!operatorStack.empty() && operatorStack.top() != OperatorTypes::LeftParenthesis)
		{
			operatorStack.pop(); //Remove RightParenthesis
			evaluateOperation(operatorStack.top()); //Perform operation inside Parenthesis
		}
		operatorStack.pop(); //Remove LeftParenthesis
	}
		case Pluss: dualValueOperation(op); break;
		case Minus: dualValueOperation(op); break;
		case Multiply: dualValueOperation(op); break;
		case Divide: dualValueOperation(op); break;
		case Mod: dualValueOperation(op); break;
		case Pi: operandStack.push(3.14159); break;
		case Log: singleValueOperation(op); break;
		case Ln: singleValueOperation(op); break;
		case Square: singleValueOperation(op); break;
		case Percent: singleValueOperation(op); break;
		case Sin: singleValueOperation(op); break;
		case Cos: singleValueOperation(op); break;
		case Tan: singleValueOperation(op); break;
		case Sinh: singleValueOperation(op); break;
		case Cosh: singleValueOperation(op); break;
		case Tanh: singleValueOperation(op); break;
		case Xbase3: singleValueOperation(op); break;
		case Xbase2: singleValueOperation(op); break;
		case OneDivideX: singleValueOperation(op); break;
		//If you are here, something went wrong
		default: ERROR = true; break;
	}
}

void Calculator::singleValueOperation(OperatorTypes op)
{
	double value = operandStack.top();
	operandStack.pop();
	switch (op)
	{
		case Log: operandStack.push(std::log(value)); break;
		case Ln: operandStack.push(std::log(value)); break;
		case Square: operandStack.push(std::sqrt(value)); break;
		case Percent: operandStack.push(value / 100.0); break;
		case Sin: operandStack.push(std::sin(value)); break;
		case Cos: operandStack.push(std::cos(value)); break;
		case Tan: operandStack.push(std::tan(value)); break;
		case Sinh: operandStack.push(std::sinh(value)); break;
		case Cosh: operandStack.push(std::cosh(value)); break;
		case Tanh: operandStack.push(std::tanh(value)); break;
		case Xbase3: operandStack.push(value * value * value); break;
		case Xbase2: operandStack.push(value * value); break;
		case OneDivideX: operandStack.push(1.0 / value); break;
		//If you are here, something went wrong
		default: ERROR = true; break;
	}
	//Release current operator from operator stack
	operatorStack.pop();
}

void Calculator::dualValueOperation(OperatorTypes op)
{
	double value1 = operandStack.top();
	operandStack.pop();
	double value2 = operandStack.top();
	operandStack.pop();
	switch (op)
	{
		case Pluss: operandStack.push(value1 + value2); break;
		case Minus: operandStack.push(value1 - value2); break;
		case Multiply: operandStack.push(value1 * value2); break;
		case Divide: operandStack.push(value1 / value2); break;
		case Mod: operandStack.push(std::fmod(value1,value2)); break;
		//If you are here, something went wrong
		default: ERROR = true; break;
	}
	//Release current operator from operator stack
	operatorStack.pop();
}

bool Calculator::currentOperatorHasLowerPriority(OperatorTypes onStack, OperatorTypes current)
{
	switch (onStack)
	{
		case LeftParenthesis: return false;
		case RightParenthesis: return true;
		case Pluss: return current == OperatorTypes::Pluss || current == OperatorTypes::Minus;
		case Minus: return current == OperatorTypes::Minus;
		case Multiply: return current != OperatorTypes::Divide && current != OperatorTypes::LeftParenthesis;
		case Divide: return true;
		case Pi: return false;
		case Log: return false;
		case Ln: return false;
		case Square: return false;
		case Mod: return false;
		case Percent: return true;
		case Sin: return false;
		case Cos: return false;
		case Tan: return false;
		case Sinh: return false;
		case Cosh: return false;
		case Tanh: return false;
		case Xbase3: return true;
		case Xbase2: return true;
		case OneDivideX: return true;
		//If you are here, something went wrong
		default: ERROR = true; return false;
	}
}

void Calculator::enlistOperatorTypes(std::string key, OperatorTypes type)
{
	operatorTypeMap.emplace(key, type);
}

void Calculator::ClearStacks()
{
	if (!operandStack.empty())
	{
		while (!operandStack.empty())
			operandStack.pop();
	}
	if (!operatorStack.empty())
	{
		while (!operatorStack.empty())
			operatorStack.pop();
	}
}
