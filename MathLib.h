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


// functions
double Sum(const double a, const double b);
double Dif(const double a, const double b);
double Mul(const double a, const double b);
double Div(const double a, const double b);
long long Fact(const double a);
double Pow(const double base, const int exponent);
double NthRoot(const double radicand, const double index);
double opSinus(const double a);

#endif // !MATH_LIB_H
