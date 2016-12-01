#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int trail(int x);//recursive function
int z = 0, i = 5;//global variables
int main()//main function
{
	int facNum;//local variable
	cout << "Give a factorial number: ";
	cin >> facNum;//user input
	cout << "It has " << trail(facNum) << " trailing zeros." << endl; //recursive function output
}

int trail(int x)
{
	if (x / i >= 1)// if true do brakets
	{
		z += x / i;// keeps track of the trailing zeros
		i *= 5;
		return trail(x);// calls again the recursive function
	}
	else return z;// returns the result
}