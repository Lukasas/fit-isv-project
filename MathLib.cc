/**
*	@file MathLib.cpp
*	@author Roman Janik (xjanik20)
*	@brief IVS projekt 2 - Kalkulacka
*/

#include "MathLib.h"

double Sum(const double a, const double b)
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

double Dif(const double a, const double b)
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

double Mul(const double a, const double b)
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

double Div(const double a, const double b)
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

unsigned long long Fact(const unsigned long long a)
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
double Pow(const double base, const int exponent)
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
double Sqrt(const double radicand, const double index)
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
