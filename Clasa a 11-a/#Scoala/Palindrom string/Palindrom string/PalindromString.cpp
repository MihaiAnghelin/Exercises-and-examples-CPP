// Palindrom string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cout << "Introduceti textul: \n";
	getline(cin, a);
	b = a;
	reverse(b.begin(), b.end());
	if (a == b)
		cout << "Textul introdus este palindrom.\n";
	else
		cout << "Textul introdus nu este palindrom.\n";
}