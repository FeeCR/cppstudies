#pragma once
#include <string>
#include <vector>

enum class Operator {
	Add,
	Subtract,
	Multiply,
	Divide
};

struct Expression {
	double left;
	double right;
	Operator op;
	double result;
};

//Converts an operator to its corresponding symbol
std::string operatorToSymbol(Operator op);

//Performs the calculation based on the given expression
//and returns true if the calculation was successful, false otherwise (e.g., division by zero)
bool calculate(Expression& expr);

//Exibits the history of calculations
void printHistory(const std::vector<Expression>& history);

//Save to .txt file
void saveHistory(const std::vector<Expression>& history);