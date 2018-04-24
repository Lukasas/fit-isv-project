/**
*	@file MathLib.cpp
*	@author Roman Janik (xjanik20)
*	@brief IVS projekt 2 - Kalkulacka
*/

#include "MathLib.h"

namespace MathLib
{
	double Sum(const double a, const double b)
	{
		return a + b;
	}

	double Dif(const double a, const double b)
	{
		return a - b;
	}

	double Mul(const double a, const double b)
	{
		return a * b;
	}

	double Div(const double a, const double b)
	{
		if (b == 0)
			throw invalid_argument("invalid_argument");

		return a / b;
	}

	long long Fact(const double a)
	{
		long long b, i, factorial = 1;
		double intpart;

		if (modf(a, &intpart) != 0.0) // a is decimal
			throw invalid_argument("invalid_argument");

		b = (long long)a;

		if (b < 0LL)
			throw out_of_range ("out_of_range");

		if (b == 0LL)
			return factorial;

		for (i = 1; i <= b; i++)
		{
			factorial *= i;
		}

		return factorial;
	}

	double Pow(const double base, const int exponent)
	{
		if ((base == 0) && (exponent <= 0))
			throw invalid_argument("invalid_argument");

		return pow(base, exponent);
	}

	double NthRoot(const double radicand, const double index)
	{
		if (index <= 0){
			throw invalid_argument("invalid_argument");
		}
		else if ((index % 2) = 0 && radicand < 0){
			throw invalid_argument("invalid_argument");
		}
		
		return pow(radicand, 1.0 / index);
	}

	double opSinus(const double a)
	{
		return sin(a);
	}
}


//int main(int argc, char *argv[]) // g++ -std=c++11 -O2 -o xxx MathLib.h MathLib.cc
//{
//	/*double res = Sum(888888888888888888, -111111111111111111);
//	cout << "Expected: 777777777777777777\n";
//	cout << std::setprecision(16) << res << "\n";*/
//
//	// pow:
//	cout << "pow " << setprecision(16) << Pow(0.1, 2) << "\n";
//
//	if (Pow(0.1, 2) == 0.01) // tohle nikdy fungovat nebude!
//		cout << "equal\n";
//
//	// opSinus:
//	cout << "opSinus " << setprecision(16) << opSinus(1) << "\n";
//
//	// nthroot:
//	//cout << "nthroot " << setprecision(16) << NthRoot(2, 2) << "\n";
//
//	return 0;
//}
