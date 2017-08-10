#pragma once
#include <stack>
#include <map>
#include <string>
#include "OperatorTypes.h"

class Calculator
{
private:
	std::stack<double> *operands;
	std::stack <OperatorTypes> *operators;
	std::map<std::string, OperatorTypes> *opTypes;
public:
	Calculator();
	virtual ~Calculator();
};

