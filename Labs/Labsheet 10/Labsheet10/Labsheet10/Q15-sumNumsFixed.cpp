// Liam Curry
// c00311724
// 28-01-2026
// ----------------------------------------------
// Labsheet 10, Question 15: Suming numbers fixed
// Time Taken: 0 hours 5 minutes
// ----------------------------------------------
// Known Bugs: No

#include <iostream>
#include <string>

const int MAX_ITEMSV2 = 10;
int arrayNumV2[] = { 4, 5, 1, 9, 20, 3, 4, 2, 28, 18 };
void sumNumbers();

int mainQ15()
{
	sumNumbers();

	system("Pause");
	return 0;
}

void sumNumbers()
{
	int sum = 0;
	int index = 0;

	for (index = (MAX_ITEMSV2-1); index >= 0; index--)
	{
		sum = sum + arrayNumV2[index];
	}

	std::cout << "The sum is " + std::to_string(sum) << std::endl;
}

// Questions

// I do not expect this code to run properly as there is many issues
// The index decrements in twos so it will miss numbers in the array
// the index is set to a number outside of the array's memory, so it will corrupt other memory

// I have fixed this code by changing the index to "(MAX_ITEMS-1)" as this will not go outside the range of the array
// I have change the decrement to "index--" so it goes down in ones instead