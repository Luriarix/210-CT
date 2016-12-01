#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

string position(string a, int b);
int i, b, e, f = 0, h, y;
string a, d, x;
int main()
{

	getline(cin, x);
	y = x.size();

	cout << position(x, y) << endl;

}
string position(string a, int b)
{
	string c;
	if (y > 0) {
		for (i = b; a[i] != ' ' || i == 0; i--)
		{
			c += a[i];

		}
		e = c.size();
		cout << "c=" << c << endl;
		for (i = e; i > 0; i--)
		{
			d += c[i];
		}
		h = d.size();
		cout << "d=" << d << endl;
		c.clear();
		y -= h;
		return position(x, y);
	}
	else
		return d;

}

