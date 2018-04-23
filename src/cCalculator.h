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
    /**
     * @brief memorySum
     * Function that sums memory with value.
     * @param Value that'll be added into memory.
     */
	void memorySum(const double value);

    /**
     * @brief memorySub
     * Function that subtracts memory with number.
     * @param Value that will be subtracted from memory value.
     */
	void memorySub(const double value);

    /**
     * @brief memoryRecall
     * Function that returns current value in memory.
     * @return Value that is stored in memory.
     */
	double memoryRecall() const;

    /**
     * @brief memoryClean
     * Function that sets memory value to 0.0
     */
	void memoryClean();

	 
    /**
     * @brief fnCall
     * This function accepts value with function name for calculations.
     * @param value from display already in double
     * @param fnName Name of a function in specific format "SUM", "SUB" ...
     * @return Current value in calculator
     */
	double fnCall(const double value, const std::string fnName);


	double Result() const;
    /**
     * @brief Clean
     * Resets values in calculator.
     */
    void Clean();

};

