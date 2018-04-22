#include "cCalculator.h"

void cCalculator::memorySum(const double value)
{
	this->memory = MathLib::Sum(this->memory, value);
}

void cCalculator::memorySub(const double value)
{
	this->memory = MathLib::Dif(this->memory, value);
}

double cCalculator::memoryRecall() const
{
	return this->memory;
}

void cCalculator::memoryClean()
{
	this->memory = 0.0;
}

double cCalculator::fnCall(const double value, const std::string fnName)
{
	if (this->fnName == "")
	{
		this->fnName = fnName;
		this->a_operand = value;
	}
	else if (this->fnName == "RET")
	{
		this->a_operand = value;
	}
	else if (this->fnName == "SUM")
	{
		this->a_operand = MathLib::Sum(this->a_operand, value);
	}
	else if (this->fnName == "SUB")
	{
		this->a_operand = MathLib::Dif(this->a_operand, value);
	}
	else if (this->fnName == "MUL")
	{
		this->a_operand = MathLib::Mul(this->a_operand, value);
	}
	else if (this->fnName == "DIV")
	{
		this->a_operand = MathLib::Div(this->a_operand, value);
	}
	else if (this->fnName == "FAC")
	{
		this->a_operand = MathLib::Fact(this->a_operand);
	}
	else if (this->fnName == "POW")
	{
		this->a_operand = MathLib::Pow(this->a_operand, value);
	}
	else if (this->fnName == "SQR")
	{
		this->a_operand = MathLib::NthRoot(this->a_operand, value);
	}
	else if (this->fnName == "SIN")
	{
		this->a_operand = MathLib::opSinus(this->a_operand);
	}
	else if (this->fnName == "RET")
	{
		this->a_operand = 0.0;
	}
	if (this->fnName != "")
		this->fnName = fnName;
	return this->a_operand;
}

double cCalculator::Result() const
{
	return this->a_operand;
}

void cCalculator::Clean()
{
	this->a_operand = 0.0;
	this->b_operand = 0.0;
	this->a_set = false;
	this->fnName = "";
}

cCalculator::cCalculator()
{
	memoryClean();
	Clean();
}



cCalculator::~cCalculator()
{
}
