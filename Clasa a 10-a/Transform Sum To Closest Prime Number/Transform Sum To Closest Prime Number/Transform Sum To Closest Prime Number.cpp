// Transform Sum To Closest Prime Number.cpp : Defines the entry point for the console application.
//http://www.codewars.com/kata/transform-to-prime/train/cpp

#include "stdafx.h"
#include <vector>
#include <iostream>


using namespace std;

bool isPrime(int x)
{
	bool ok = true;
	int d = 2;
	while (d <= sqrt(x) && ok)
	{
		if (x%d == 0)
		{
			ok = false; break;
		}
		d++;
	}
	return ok;
}

int minimumNumber(vector <int> numbers)
{
	int sum = 0;
	for (int& n : numbers)
		sum += n;
	int i = 1, min = sum, max = sum;
	if (isPrime(sum))
		return 0;
	else while ((isPrime(min) == false) || (isPrime(max) == false))
	{
		if (i > 0)
		{
			min = sum - i++;
			i = -i;
		}
		else
		{
			max = sum - i--;
			i = -i;
		}
	}
	if (sum - min < max - sum)
		return sum - min;
	else
		return max - sum;
}
int main()
{
	vector <int> nr = { 3,1,2 };
	cout<<minimumNumber(nr);
}
