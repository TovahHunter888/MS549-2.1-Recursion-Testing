/*
* Tovah Hunter
* 11/9/2024
* 2.1 Recurison, Testing
* Estimate 8
* Actual 6
*/
#include <iostream>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <iomanip>
#include "agesfunctions.h"
using namespace std;


// call the function calculate ages sum
int main()
{
	int ages[3] = { 22, 31, 55 }; // array of ages
	int size = sizeof(ages) / sizeof(ages[0]);


	// start time exection test clock
	clock_t start, end;
	start = clock();  // start time measuring

	int sum = arraySum(ages, size); // call the recursion sum function

	// stop time execution test clock
	end = clock();
	int elapsed_time  = end - start;  // Elapsed time in clock
	double elasped_time = double(end - start) / CLOCKS_PER_SEC * 1000.0; // convert to milliseconds
	
	//Output the results
	cout << "sum of array ages: " << sum << endl;
	cout << "Elapsed time: = " << elapsed_time << " ms " << endl;

	return 0;
}