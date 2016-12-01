#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int sqr_check(unsigned long int x);
unsigned long int i = 1;

int main()
{
	unsigned long int x;//number being verified as a prime
	cout << "Number to be checked if it is a perfect square ";
	cin >> x;// use input
	if (x > sqr_check(x))//checkes if the input is higher then the output
		cout << "Highest perfect square is " << sqr_check(x) << endl;// recursive function output
	else if (x == sqr_check(x))//checkes if the input is the same as the output
		cout << "It's a perfect square! Huray!" << endl;
}

int sqr_check(unsigned long int x)
{
	if ((i*i) <= x)// checkes if the highest perfect square is smaller or the same as the input
	{
		i++;//number that forms the highest perfect square
		return sqr_check(x);// recursive function recall
	}
	else {
		i--;//this is so the number is corect instead of going one over
		return i*i;// recursive function output
	}
}

