// Nr maxim coloane si linii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a[90][90], m, n, col, colmax = 0, lin, linmax = 0, nrcol = 0, nrlin = 0;
	cout << "M = "; cin >> m;
	cout << "N = "; cin >> n;
	for (int i = 0; i < m; i++) {
		lin = 0;
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
			lin += a[i][j];
		}
		if (lin > linmax) {
			linmax = lin; nrlin = i;
		}
	}

	for (int j = 0; j < n; j++) {
		col = 0;
		for (int i = 0; i < m; i++)
			col += a[i][j];
		if (col > colmax) { colmax = col; nrcol = j; }

	}

	cout << endl << "Maxim de pe linii = " << linmax << ". Pe linia " <<++nrlin<< endl;
	cout << endl << "Maxim de pe coloane = " << colmax << ". Pe coloana " << ++nrcol << endl;

}
