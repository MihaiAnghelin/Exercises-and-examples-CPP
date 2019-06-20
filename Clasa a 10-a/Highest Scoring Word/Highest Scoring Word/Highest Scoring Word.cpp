// Highest Scoring Word.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

string highestScoringWord(string s)
{
	string nou = "", bau = "",ham=s;
	int max=0,nr=0;
	ham += " ";
	for (int i = 0; i < ham.Length; i++)
	{
		if (s[i] >= 97 && ham[i] <= 122)
		{
			nou += ham[i];
			nr += (int)ham[i]-96;
		}
		else
		{
			if (max < nr)
			{
				max = nr;
				bau = nou;
			}
			nou = "";
			nr = 0;
		}
	}
	
	return bau;
}

int main()
{
	cout << highestScoringWord("what time are we climbing up the volcano");
    return 0;
}

