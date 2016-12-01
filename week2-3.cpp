// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
const int n = 4;
int addition(int B[n][n], int C[n][n]);
int substraction(int B[n][n], int C[n][n]);
int multiplication(int B[n][n], int C[n][n]);
int matrix(int B[n][n]);
int main()
{
}

int addition(int B[n][n], int C[n][n])
{
	int A[n][n];
	if (i < n)
	{
		A[n][i] = B[n][i] + C[n][i];
		cout << A[n][i] << endl;
		return addition(B,C)
	}
	if i == n - 1
	{
		n++;
		return addition;
	}
	else return A;

}

int substraction(int B[n][n], int C[n][n])
{
	int A[n][n];
	for (i = 0; i < n; i++)
		A[n][i] = B[n][i] - C[n][i];
	cout << A[n][i] << endl;
	if i == n - 1
	{
		n++;
		return substraction(B[n][n], C[n][n]);
	}
	else return A;
}

int multiplication(int B[n][n], int C[n][n])
{
	int A[n][n];
	for (i = 0; i < n; i++)
		A[n][i] = B[n][i] * C[i][n];
	cout << A[n][i] << endl;
	if i == n - 1
	{
		n++;
		return multiplication(B[n][n], C[n][n]);
	}
	else return A;
}
