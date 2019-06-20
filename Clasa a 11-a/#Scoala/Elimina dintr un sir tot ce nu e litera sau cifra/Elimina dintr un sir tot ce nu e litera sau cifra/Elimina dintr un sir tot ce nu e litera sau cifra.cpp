// Elimina dintr un sir tot ce nu e litera sau cifra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Introduceti sirul: ";
	getline(cin, str);
	int first = str.length();
	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] < 'A' || str[i] > 'Z') &&
			 (str[i] < 'a' || str[i] > 'z') &&
			 (str[i] < '0' || str[i] > '9'))
			str.erase(str.begin() + i--);
	}
	cout << "Lungimea initiala a sirului este: " << first<<endl;
	cout << "Lungimea finala a sirului este: " << str.length()<<endl;
	if (str.length() == 0)cout << "Sirul a fost sters complet.\n";
		else cout << "Sirul final este: " << str << endl;
}