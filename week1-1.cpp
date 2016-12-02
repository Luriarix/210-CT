#include "stdafx.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;
int shuffle(int y);
int check(int y);
int j = 0, i, a[]{ 1, 24, 42, 7, 4, 12, 15, 34, 67, 84 }, c[10], s = 0;
int main()
{
	srand(time(NULL));
	i = rand() % 10 + 1;
	cout << shuffle(i);

}

int shuffle(int y) {
	if (j == 0) {
		c[j] = a[y];
		cout << "c[0]" << c[j] << endl;
		j = 1;
		i = ((i*i) + 1) % 10;
		return shuffle(i);
	}
	if ((j < 10) && (j > 0)) {
		c[j] = a[y];

		return check(j);
	}
	else if (j == 10)
		return j;
}

int check(int y) {
	if (s < y)
	{
		if ((c[s] != c[y]) && (s < y))
		{
			s++;
			return check(y);
		}
		else if ((c[s] == c[y]) && (s < y))
		{
			s = 0;
			i = ((i + i) + 3) % 10;
			return shuffle(i);
		}
	}
	else if (s == y) {
		s = 0;
		cout << "c[j]" << c[j] << endl;
		j++;
		i = ((i*i) + 1) % 10;
		return shuffle(i);
	}
}