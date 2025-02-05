#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


vector<vector<int>> matrix_multiplication(vector<vector<int>> &a, vector<vector<int>> &b, size_t n)
{
	vector<vector<int>> c;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			v.push_back(0);
		}
		c.push_back(v);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	return c;
}

int main()
{
	vector<vector<int>> a, b;
	vector<vector<int>> c;
	vector<int> v;
	ifstream f("fis.in");
	int n,k;
	f >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f >> k;
			v.push_back(k);
		}
		a.push_back(v);
		v.clear();
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f >> k;
			v.push_back(k);
		}
		b.push_back(v);
		v.clear();
	}
	c = matrix_multiplication(a, b, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<< c[i][j]<<" ";
		}
		cout << endl;
	}
	f.close();
}

