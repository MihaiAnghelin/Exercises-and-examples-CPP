// Numere complexe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

using namespace std;

class complex
{
public:
	float x, y;
	complex(float a, float b);
	complex(float a);
	complex();
	double modul();
	complex operator+(complex z);
	complex operator+(float a);
	complex operator-(complex z);
	complex operator-(float a);
	complex operator*(complex z);
	complex operator*(float a);
	complex operator/(complex z);
	complex operator/(float a);
	complex putere(int n);
};
complex::complex(float a, float b)
{
	x = a; y = b;
}
complex::complex(float a)
{
	x = a; y = 0;
}
complex::complex() {}
double complex::modul()
{
	return  sqrt(x * x + y * y);
}
complex complex::operator+(complex z)
{
	complex t;
	t.x = x + z.x;
	t.y = y + z.y;
	return t;
}
complex complex::operator+(float a)
{
	complex t;
	t.x = x + a;
	t.y = y;
	return t;
}
complex complex::operator-(complex z)
{
	complex t;
	t.x = x - z.x;
	t.y = y - z.y;
	return t;
}
complex complex::operator-(float a)
{
	complex t;
	t.x = x - a;
	t.y = y;
	return t;
}
complex complex::operator*(complex z)
{
	complex t;
	t.x = x * z.x - y * z.y;
	t.y = x * z.y + z.x*y;
	return t;
}
complex complex::operator*(float a)
{
	complex t;
	t.x = x * a;
	t.y = y * a;
	return t;
}
complex complex::operator/(complex z)
{
	complex t;
	t.x = (x * z.x + y * z.y) / (z.x * z.x + z.y * z.y);
	t.y = (z.x * y - x * z.y) / (z.x * z.x + z.y * z.y);
	return t;
}
complex complex::operator/(float a)
{
	complex t;
	t.x = (x * a) / (a * a);
	t.y = (a * y) / (a * a);
	return t;
}
complex complex::putere(int n)
{
	complex z(x, y);
	complex h = z;
	for (int i = 1; i < n; i++)
	{
		h = h * z;
	}
	return h;
}


int main()
{
	complex z1, z2, z3;
	int n;
	cout << "z1.x = "; cin >> z1.x;
	cout << "z1.y = "; cin >> z1.y;
	cout << "z2.x = "; cin >> z2.x;
	cout << "z2.y = "; cin >> z2.y;
	cout << "n = "; cin >> n;
	z3 = z1 / z2;
	z3 = z3.putere(n);
	cout << "(z1 / z2) ^ n = " << z3.x << "+ i * " << z3.y<<endl;
	return 0;
}
