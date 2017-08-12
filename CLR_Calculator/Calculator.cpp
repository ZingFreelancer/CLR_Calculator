#include "Calculator.h"

Calculator::Calculator() : m_operandStack{}, m_operatorStack{}, m_operatorTypeMap{}, m_error{}
{}

Calculator::~Calculator()
{}

double Calculator::evaluateExpression(std::string expression)
{
	ResetMemberVariables();
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
				m_operandStack.push(std::stod(digits));
				digits.clear();
			}
			currentOperator += expression[i];
			//Check if map has current operator, if not, continue for loop
			if (m_operatorTypeMap.count(currentOperator))
			{	//If we have items on stack & our current operator have lower presedence than operator on stack
				OperatorTypes curOpType = m_operatorTypeMap.at(currentOperator);
				currentOperator = "";
				while (!m_operatorStack.empty() && currentOperatorHasLowerPriority(m_operatorStack.top(), curOpType))
				{	//Perform operation using our current operator
					evaluateOperation(m_operatorStack.top());
				}
				//Push current operator on operator stack
				m_operatorStack.push(curOpType);
			}
		}
	}
	//Check if we have remaining values in digits and push them to operand stack
	if (!digits.empty())
		m_operandStack.push(std::stod(digits));
	//Evaluate remaining operator stack
	while (!m_operatorStack.empty())
	{
		evaluateOperation(m_operatorStack.top());
	}
	//The last item on operand stack is the answer to the expression
	return m_operandStack.top();
}

void Calculator::evaluateOperation(OperatorTypes op)
{
	switch (op)
	{
		case RightParenthesis:
		{
			while (!m_operatorStack.empty() && m_operatorStack.top() != OperatorTypes::LeftParenthesis)
			{
				m_operatorStack.pop(); //Remove RightParenthesis
				evaluateOperation(m_operatorStack.top()); //Perform operation inside Parenthesis
			}
			m_operatorStack.pop(); //Remove LeftParenthesis
		} 
		break;
		case Pluss: dualValueOperation(op); break;
		case Minus: dualValueOperation(op); break;
		case Multiply: dualValueOperation(op); break;
		case Divide: dualValueOperation(op); break;
		case Mod: dualValueOperation(op); break;
		case Pi: m_operandStack.push(3.14159); break;
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
		default: m_error = true; break;
	}
}

void Calculator::singleValueOperation(OperatorTypes op)
{
	double value = m_operandStack.top();
	m_operandStack.pop();
	switch (op)
	{
		case Log: m_operandStack.push(std::log(value)); break;
		case Ln: m_operandStack.push(std::log(value)); break;
		case Square: m_operandStack.push(std::sqrt(value)); break;
		case Percent: m_operandStack.push(value / 100.0); break;
		case Sin: m_operandStack.push(std::sin(value)); break;
		case Cos: m_operandStack.push(std::cos(value)); break;
		case Tan: m_operandStack.push(std::tan(value)); break;
		case Sinh: m_operandStack.push(std::sinh(value)); break;
		case Cosh: m_operandStack.push(std::cosh(value)); break;
		case Tanh: m_operandStack.push(std::tanh(value)); break;
		case Xbase3: m_operandStack.push(value * value * value); break;
		case Xbase2: m_operandStack.push(value * value); break;
		case OneDivideX: m_operandStack.push(1.0 / value); break;
		//If you are here, something went wrong
		default: m_error = true; break;
	}
	//Release current operator from operator stack
	m_operatorStack.pop();
}

void Calculator::dualValueOperation(OperatorTypes op)
{
	double value2 = m_operandStack.top();
	m_operandStack.pop();
	double value1 = m_operandStack.top();
	m_operandStack.pop();
	switch (op)
	{
		case Pluss: m_operandStack.push(value1 + value2); break;
		case Minus: m_operandStack.push(value1 - value2); break;
		case Multiply: m_operandStack.push(value1 * value2); break;
		case Divide: m_operandStack.push(value1 / value2); break;
		case Mod: m_operandStack.push(std::fmod(value1,value2)); break;
		//If you are here, something went wrong
		default: m_error = true; break;
	}
	//Release current operator from operator stack
	m_operatorStack.pop();
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
		default: m_error = true; return false;
	}
}

void Calculator::enlistOperatorTypes(std::string key, OperatorTypes type)
{
	m_operatorTypeMap.emplace(key, type);
}

void Calculator::ResetMemberVariables()
{
	m_error = false;
	if (!m_operandStack.empty())
	{
		while (!m_operandStack.empty())
			m_operandStack.pop();
	}
	if (!m_operatorStack.empty())
	{
		while (!m_operatorStack.empty())
			m_operatorStack.pop();
	}
}
