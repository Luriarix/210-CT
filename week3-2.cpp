#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
int i = 2;
bool prime_check(int x);
int main()
{
	int num;
	cout << "What number do you want to see if it is prime?" << endl;
	cin >> num;//user input
	if (prime_check(num) == false)// if the recursive function return false
		cout << "It's not prime!" << endl;
	else cout << "It's prime! Huray!" << endl;// if the recursive function return true
}

bool prime_check(int x)
{
	if (i <= x / 2)//checkes if i is any number below half the number 
	{
		if (x % i == 0)// if i divides x 
		{
			return false;// then x isn't prime
		}
		else// if i doesn't divide x 
		{
			i++;//i goes up by 1
			return prime_check(x);// and checks again
		}
	}
	else return true;// though if i is higher the half the number then the number is prime
}