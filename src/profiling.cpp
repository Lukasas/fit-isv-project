/**
*	@file profiling.cpp
*	@author Roman Janik (xjanik20)
*	@brief IVS projekt 2 - Kalkulacka
*/

#include <iostream>
#include <string>
#include <stdexcept>
#include "MathLib.h"

using namespace MathLib;


int main()
{
	string word;
	double n = 0.0, x, avg, sumX = 0.0, sumX2 = 0.0, a, b, c, d;
	
	cout << "Sample profiling source code\nEnter numbers, end with Ctrl+D:" << endl;

	while (cin >> word)
	{
		try
		{
			x = std::stod(word);
		}
		catch (const logic_error &e)
		{
			cout << "Enter only numbers!\n";
			continue;
		}

		n++; // increase n
		sumX = Sum(sumX, x);
		sumX2 = Sum(sumX2, Mul(x, x));
	}

	try
	{
		avg = Div(sumX, n);
		a = Pow(avg, 2);
		a = Mul(a, n);
		b = Dif(sumX2, a);
		c = Dif(n, 1);
		c = Div(1, c);
		d = Mul(b, c);

		cout << "Standard deviation: " << NthRoot(d, 2) << endl;
	}
	catch (const logic_error &e)
	{
		cerr << e.what() << endl;
		return 1;
	}

	return 0;
}
