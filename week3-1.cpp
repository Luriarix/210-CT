#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int i, e, y, j, z, b, c = 1, d = 0;
string x;
string a;
int wordSize(int y);
int switchWord(int y);

int main()
{

	getline(cin, x);
	y = x.size();
	i = y;
	cout << wordSize(y);
	/*	for (i = y; i >= 0; i--)
	{
	if (i == y) {
	a += i;
	cout << "a[0]" << (int)(a[0]) << endl;
	}

	else if (x[i] == ' ') {
	cout << "x[" << i << "]" << x[i] << endl;
	a += i;
	}
	}*/

	/*e = a.size();
	for (i = 1; i <= e; i++)
	{
	j = a[i];
	b = a[i - 1];
	if (j != 0) {
	for (z = j + 1; z <= b; z++)
	{
	cout << x[z];
	}
	}
	else if (j == 0) {
	for (z = j; z <= b; z++)
	{
	cout << x[z];
	}
	}
	}*/
	cout << endl;
}
int wordSize(int y) {

	if (i > 0)
	{
		if (i == y) {
			a += i;
			cout << "a[0]" << (int)(a[0]) << endl;
			i--;
			return wordSize(y);
		}

		else if (x[i] == ' ') {
			cout << "x[" << i << "]" << x[i] << endl;
			a += i;		i--;
			return wordSize(y);
		}
		else if ((i > 0) && (i < y) && ((x[i]) != ' ')) {
			i--;
			return wordSize(y);
		}

	}
	else
	{
		a += i;
		i = 1; e = a.size();
		return switchWord(e);
	}
}
int switchWord(int y) {
	if (i <= y)
	{

		j = a[i];
		b = a[i - 1];
		if (j != 0) {
			z = j + c;
			if (z < b)
			{
				cout << x[z];
				c++;
				return switchWord(y);
			}
			else if (z = b)
			{
				cout << x[z];
				c = 1;
				i++;
				return switchWord(y);
			}
		}
		else if (j == 0)
			z = j + d;
		if (z < b)
		{
			cout << x[z];
			d++;
			return switchWord(y);
		}
		else if (z = b)
		{
			cout << x[z];
			return 1;
		}
	}
}
