#include "pch.h"
#include <iostream>

using namespace std;

typedef unsigned long long ull;

class SumFct
{
public:
	static unsigned long long fibonacci(int n)
	{
		long long a = 1, b = 1;
		for (int i = 1; i < n; i++)
		{
			if (a < b)
			{
				a += b;
			}
			else
			{
				b += a;
			}
		}
		if (a < b) return a;
		else return b;
	}

	static ull perimeter(int n)
	{
		unsigned long long sum = 0;
		for (int i = 1; i <= n+1 ; i++)
		{
			sum += fibonacci(i);
		}
		return 4 * sum;
	}
};


int main()
{
	SumFct a;
	cout << a.perimeter(5);
}