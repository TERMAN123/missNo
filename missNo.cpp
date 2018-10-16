#include "pch.h"
#include <stdio.h> 
#include <iostream>


int getMissingNo(int* array, int n)
{
	int i;
	int sum;
	sum = (n + 1)*(n + 2) / 2;
	for (i = 0; i < n; i++)
	{
		sum -= array[i];
	}
	return sum;
}

int getMissingNoByXOR(int* arry, int n)
{
	int i;
	int x1 = arry[0]; 
	int x2 = 1;

	for (i = 1; i < n; i++)
	{
		x1 = x1 ^ arry[i];
	}
	for (i = 2; i <= n + 1; i++)
	{
		x2 = x2 ^ i;
	}

	return (x1^x2);
}

int main()
{
	const int size = 5;
	int array[size] = { 1,2,3,5,6 };
	int missNo = getMissingNo(array, size);
	int missNoXOR  = getMissingNoByXOR(array, size);
	std::cout << "Missing number:" << missNo << "\n";
	std::cout << "Missing number by XOR:" << missNoXOR;
}