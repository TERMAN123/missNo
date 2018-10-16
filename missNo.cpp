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

int main()
{
	const int size = 5;
	int array[size] = { 1,2,3,5,6 };
	int missNo = getMissingNo(array, size);
	std::cout << missNo;
}