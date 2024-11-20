#include <iostream>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <iomanip>
#include "agesfunctions.h"
using namespace std;


// Recursive function to calculate array using pointers
int arraySum(int* ages, int size)
{
	if (size == 0)
	{
		return 0;
	}
	else
	{
		return *(ages + size - 1) + arraySum(ages, size - 1); // Sum last element in the ages array using recursion arithmetic
	}
}
 


 