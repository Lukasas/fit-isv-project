#pragma once

#include "MathLib.h"
using namespace MathLib;


class cCalculator
{
private:
	double memory;
	double a_operand;
	double b_operand;
	std::string fnName;

	bool a_set;
public:
	cCalculator();
	~cCalculator();

	void memorySum(const double value);
	void memorySub(const double value);
	double memoryRecall() const;
	void memoryClean();

	 
	double fnCall(const double value, const std::string fnName);

	double Result() const;
	void Clean();

};

