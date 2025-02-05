// Numere complexe ( ex 22 pag 97 mov).cpp : Defines the entry point for the console application.
//Z = X + iY

#include "stdafx.h"
#include <iostream>

using namespace std;

struct complex
{
	float x;
	float y;
};

complex adunare(complex a, complex b);
complex scadere(complex a, complex b);
complex inmultire(complex a, complex b);
complex impartire(complex a, complex b);


int main()
{
	
	complex numar1, numar2, numar3;
	cout << "Cititi primul numar complex (a, b): "; cin >> numar1.x >> numar1.y;
	cout << "Cititi al doilea numar complex (a, b): "; cin >> numar2.x >> numar2.y;
	numar3 = adunare(numar1, numar2);
	if (numar3.y>0)
		cout << "\nSuma = " << numar3.x << " + i" << numar3.y << endl;
	else
		cout << "\nSuma = " << numar3.x << " - i" << -1 * numar3.y << endl;
	numar3 = scadere(numar1, numar2);
	if(numar3.y>0)
		cout << "\nDiferenta = " << numar3.x << " + i" << numar3.y << endl;
	else
		cout << "\nDiferenta = " << numar3.x << " - i" << -1 * numar3.y << endl;
	numar3 = inmultire(numar1, numar2);
	if (numar3.y>0)
		cout << "\nProdus = " << numar3.x << " + i" << numar3.y << endl;
	else
		cout << "\nProdus = " << numar3.x << " - i" << -1 * numar3.y << endl;
	numar3 = impartire(numar1, numar2);
	if (numar3.y>0)
		cout << "\nCat = " << numar3.x << " + i" << numar3.y << endl<<endl;
	else
		cout << "\nCat = " << numar3.x << " - i" << -1 * numar3.y << endl<<endl;
}

complex adunare(complex a, complex b)
{
	complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

complex scadere(complex a, complex b)
{
	complex c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

complex inmultire(complex a, complex b)
{
	complex c;
	c.x = a.x*b.x - a.y*b.y;
	c.y = a.y*b.x + a.x*b.y;
	return c;
}

complex impartire(complex a, complex b)
{
	complex c;
	c.x = (a.x*b.x + a.y*b.y) / (b.x*b.x + b.y*b.y);
	c.y = (a.y*b.x - a.x*b.y) / (b.x*b.x + b.y*b.y);
	return c;
}
