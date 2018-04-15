/**
*	@file ivs_math.cpp
*	@author Roman Janik (xjanik20)
*	@brief IVS projekt 2 - Kalkulacka
*/

#include "ivs_math.h"

double opAdd(const double a, const double b)
{
	try
	{
		return a + b;
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}

double opSubtract(const double a, const double b)
{
	try
	{
		return a - b;
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}

double opMultiply(const double a, const double b)
{
	try
	{
		return a * b;
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}

double opDivide(const double a, const double b)
{
	try
	{
		return a / b;
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}

unsigned long long opFactorial(const unsigned long long a)
{
	unsigned long long i, factorial = 1;

	try
	{
		/*if (a < 0)
			throw out_of_range("out_of_range");*/

		if (a == 0)
			return factorial;

		for (i = 1; i <= a; i++)
		{
			factorial *= i;
		}

		return factorial;
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}
double opExponentiation(const double base, const int exponent)
{
	try
	{
		if ((base == 0) && (exponent == 0)) // 0^0 = 1
			return 1;

		return pow(base, exponent);

	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}
double opNthRoot(const double radicand, const double index)
{
	try
	{
		return pow(radicand, 1.0 / index);
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}
double opSinus(const double a)
{
	try
	{
		return sin(a);
	}
	catch (const exception &e)
	{
		cout << e.what() << '\n';
	}
}
