/**
 *	@file ivs_math.h
 *	@author Roman Janik (xjanik20)
 *	@brief IVS projekt 2 - Kalkulacka
 */

#ifndef IVS_MATH_H
#define IVS_MATH_H

#include <cmath>
#include <iostream>
#include <exception>

using namespace std;


// functions
double opAdd(const double a, const double b);
double opSubtract(const double a, const double b);
double opMultiply(const double a, const double b);
double opDivide(const double a, const double b);
unsigned long long opFactorial(const unsigned long long a);
double opExponentiation(const double base, const int exponent);
double opNthRoot(const double radicand, const double index);
double opSinus(const double a);

#endif // !IVS_MATH_H