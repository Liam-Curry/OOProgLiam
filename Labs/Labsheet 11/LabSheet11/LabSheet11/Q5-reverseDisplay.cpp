// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 15 minutes
// ---------------------------------------------
// Labsheet 11, Q5: Displaying array in reverse
// ---------------------------------------------
// Known bugs: None

#include <iostream>

// Declaring function
void reverseArray(int t_array1[]);
const int MAX_ARRAY = 7;

int mainQ5()
{
	int array1[MAX_ARRAY] = { 23, 65, 14, 63, 13, 53, 55 }; // Main array

	// Displaying array normally
	std::cout << "The array is ";

	for (int index = 0; index < MAX_ARRAY; index++)
	{
		std::cout << array1[index] << " ";
	}
	std::cout << std::endl;

	reverseArray(array1); // Function call

	// Displaying array backwards
	std::cout << "The array after is ";

	for (int index = 0; index < MAX_ARRAY; index++)
	{
		std::cout << array1[index] << " ";
	}
	std::cout << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Function used to reverse the array
/// index1 is used to set the reverse array
/// index2 is used to gain the main array in reverse
/// </summary>
/// <param name="t_array1"> The main array </param>

void reverseArray(int t_array1[])
{
	int array2[MAX_ARRAY] = { 0, 0, 0, 0, 0, 0, 0 }; // Spare array used to display in reverse
	int index1 = 0;

	// To set array in reverse to a spare array
	for (int index2 = (MAX_ARRAY - 1); index2 >= 0; index2--)
	{
		array2[index1] = t_array1[index2];
		index1++;
	}

	// To move values from spare array into the main array
	for (index1 = 0; index1 < MAX_ARRAY; index1++)
	{
		t_array1[index1] = array2[index1];
	}
}