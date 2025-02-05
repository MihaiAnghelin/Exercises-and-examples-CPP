#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int n, ariemax = 0, latmin, lungmin, perimmin = 2147483647, latmax, lungmax;
	cout << "Numarul dreptunghiurilor: "; cin >> n;
	struct dreptunghi {
		float lungime, latime, arie, perimetru;
	}d[20];
	for (int i = 1; i <= n; i++)
	{
		cout << "Lungimea dreptunghiului " << i << " = "; cin >> d[i].lungime;
		cout << "Latimea dreptunghiului " << i << " = "; cin >> d[i].latime;
		d[i].perimetru = 2 * d[i].lungime + 2 * d[i].latime;
		d[i].arie = d[i].lungime *d[i].latime;
		if (ariemax < d[i].arie)
		{
			ariemax = d[i].arie;
			latmin = d[i].latime;
			lungmin = d[i].lungime;
		}
		if (perimmin > d[i].perimetru)
		{
			perimmin = d[i].perimetru;
			latmax = d[i].latime;
			lungmax = d[i].lungime;
		}
	}
	cout << "Dreptunghiul cu suprafata cea mai mare este cel de latime " << latmin << " si lungime " << lungmin;
	cout << "Dreptunghiul cu perimetrul cel mai mic este cel de latura " << latmax << " si lungime " << lungmax;
}
