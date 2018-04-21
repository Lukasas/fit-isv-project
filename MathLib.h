/**
 *	@file MathLib.h
 *	@author Roman Janik (xjanik20)
 *	@brief IVS projekt 2 - Kalkulacka
 */

#ifndef MATH_LIB_H
#define MATH_LIB_H

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

namespace MathLib
{
	// functions
	/**
	 * Sum (a+b).
	 * @param	a	operand a
	 * @param	b	operand b
	 * @return	sum
	 */
	double Sum(const double a, const double b);

	/**
	 * Difference (a-b).
	 * @param	a	operand a
	 * @param	b	operand b
	 * @return	difference
	 */
	double Dif(const double a, const double b);

	/**
	 * Multiplication (a*b).
	 * @param	a	operand a
	 * @param	b	operand b
	 * @return	product
	 */
	double Mul(const double a, const double b);

	/**
	 * Division (a/b).
	 * @param	a	operand a
	 * @param	b	operand b
	 * @return	quotient
	 */
	double Div(const double a, const double b);

	/**
	 * Factorial (a!).
	 * @param	a	operand a
	 * @return	factorial
	 */
	long long Fact(const double a);

	/**
	 * Exponentiation (base^exponent).
	 * @param	base	base
	 * @param	exponent	exponent
	 * @return	product
	 */
	double Pow(const double base, const int exponent);

	/**
	 * Nth Root (radicand^(index)^-1).
	 * @param	radicand	radicand
	 * @param	index	index
	 * @return	nth root
	 */
	double NthRoot(const double radicand, const double index);

	/**
	 * Sinus (sin(a)).
	 * @param	a	operand a
	 * @return	sinus
	 */
	double opSinus(const double a);
}


#endif // !MATH_LIB_H
