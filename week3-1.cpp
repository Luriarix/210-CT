#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int i, e, y, j,z,b;
string x;
string a;

int main()
{

	getline(cin, x);
	y = x.size();
	for (i = y; i >= 0; i--)
	{
		if (i == y) {
			a += i;
			cout <<"a[0]"<< (int)(a[0]) << endl;
		}
		
		else if (x[i] == ' ') {
			cout <<"x["<<i<<"]"<<x[i] << endl;
				a += (i);
			}	
	}

	e = a.size();
	/*for (i = 0; i <= e; i++) {
		cout << "a[" << i << "]" << (int)(a[i]) << endl;
		cout << "x[a[" << i << "]]" << x[a[i]]<<endl;
	}*/
	
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
	}
}
