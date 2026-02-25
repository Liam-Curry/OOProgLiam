// Liam Curry
// c00311724
// 28-01-2026
// ------------------------------------------
// Labsheet 10, Question 14: Array search fix
// Time Taken: 0 hours 5 minutes
// ------------------------------------------
// Known Bugs: No

#include <iostream>
#include <string>

const int MAX_ITEMS = 10;
int arrayNum[] = { 4, 5, 1, 9, 20, 3, 4, 2, 28, 18 };

int mainQ14()
{
	int index = 0;
	int itemToBeFound = 2;
	bool found = false;
	std::string displayMessage = " ";

	while (!found && index < MAX_ITEMS)
	{
		if (arrayNum[index] == itemToBeFound)
		{
			displayMessage = "Item " + std::to_string(itemToBeFound) + " found at index " + std::to_string(index);
			found = true;
		}
		index++;
	}

	std::cout << displayMessage << std::endl;

	system("Pause");
	return 0;
}


// Questions

// The code does not work as expected as the original code was missing a double "=" inside the if statement's arguements
// I have added the extra "=" to the if statement's arguements