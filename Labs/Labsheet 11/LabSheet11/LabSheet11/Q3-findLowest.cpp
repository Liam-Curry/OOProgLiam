// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 10 minutes
// ------------------------------------------------------
// Labsheet 11, Q3: Finding the lowest number in an array
// ------------------------------------------------------
// Known bugs: None

#include <iostream>

// Declaring function
int findLowest(int t_array[]);
const int MAX_NUM = 7;

int main()
{
	int array[MAX_NUM] = { 7,2,7,3,8,3,4 }; // Array of 7 values
	int lowest = 0;

	lowest = findLowest(array); // Calling function
	std::cout << "The lowest number is " << lowest << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Searches array for the lowest number
/// </summary>
/// <param name="t_array"> The array itself </param>
/// <param name="t_MAX_NUM"> Max numbers in array </param>
/// <returns> returns the lowest to main </returns>

int findLowest(int t_array[])
{
	int lowest = 0;

	for (int index = 0; index < MAX_NUM; index++)
	{
		if (index == 0)
		{
			lowest = t_array[index];
		}

		if (t_array[index] < lowest)
		{
			lowest = t_array[index];
		}
	}
	return lowest;
}