// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 10 minutes
// ------------------------------------------------------
// Labsheet 11, Q4: Finding the average of the array
// ------------------------------------------------------
// Known bugs: None

#include <iostream>

float calAverage(double t_array[]); // declaring function
const int MAX_NUMS = 5; // global constant

int mainQ4()
{
	double array[MAX_NUMS] = { 2,8,1,6,2 };
	float avg = 0;

	avg = calAverage(array); // calling function
	std::cout << "The average is " << avg << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Function used to gain the average of the numbers inside the array
/// </summary>
/// <param name="t_array"> Array sent by address from main </param>
/// <returns> Returns average to main </returns>

float calAverage(double t_array[])
{
	float sum = 0;
	float avg = 0;

	for (int index = 0; index < MAX_NUMS; index++)
	{
		sum = sum + t_array[index];
	}

	avg = sum / MAX_NUMS;
	return avg;
}