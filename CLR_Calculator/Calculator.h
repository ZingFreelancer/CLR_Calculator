#pragma once
#include <stack>
#include <map>
#include <string>
#include <complex>
#include "OperatorTypes.h"

class Calculator
{
private:
	bool ERROR;
	std::stack<double> operandStack;
	std::stack <OperatorTypes> operatorStack;
	std::map<std::string, OperatorTypes> operatorTypeMap;
public:
	Calculator();
	virtual ~Calculator();

	/// <summary>
	/// Finds the foo.
	/// </summary>
	/// <param name="numberOfFoos">The number of foos.</param>
	/// <returns></returns>

	/// <summary>
	/// Evaluates arthitmetic expression and return an answer
	/// </summary>
	/// <param name="expression">Arthitmetic expression like: 2*5+5</param>
	/// <returns>Result after all operands and operators has been evaluated</returns>
	double evaluateExpression(std::string expression);
	/// <summary>
	/// Evaluate and perform single or dual value operations
	/// </summary>
	/// <param name="op">OperatorTypes that is currently being evaluated by evaluateExpression</param>
	void evaluateOperation(OperatorTypes op);
	/// <summary>
	/// Performs a scientific operation on single value from stack
	/// </summary>
	/// <param name="op">Operation to perform</param>
	void singleValueOperation(OperatorTypes op);
	/// <summary>
	/// Performs a arithmetic operation on two values from stack
	/// </summary>
	/// <param name="op">Operation to perform</param>
	void dualValueOperation(OperatorTypes op);
	/// <summary>
	/// Performs a arithmetic operation on two values from stack
	/// </summary>
	/// <param name="op">Operation to perform</param>
	bool currentOperatorHasLowerPriority(OperatorTypes onStack, OperatorTypes current);
	/// <summary>
	/// Map string values with operation types for easy switch handling
	/// </summary>
	/// <param name="key">Value to be used as key</param>
	/// <param name="type">Value to be used as key value</param>
	void enlistOperatorTypes(std::string key, OperatorTypes type);
	/// <summary>
	/// Check if either operand or operator stacks needs clearing and pop all remaining values
	/// </summary>
	void ClearStacks();
};

