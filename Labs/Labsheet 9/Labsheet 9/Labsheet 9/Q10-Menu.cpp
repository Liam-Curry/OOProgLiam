// Liam Curry
// c00311724
// 26-11-2025
// Labsheet 9, Menu w/ switch input
// Time Taken: 0 hours, 25 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void fToC();
void iToC();

int main()
{
	int num = 0;
	int count = 1;

	std::cout << "Menu\n\n1. Fahrenheit to Celcius\n2. Inches to Centimetres\n3. Exit\n\n";
	std::cin >> num;

	do
	{
		switch (num)
		{
		case 1:
		{
			fToC();
			count = 0;
			break;
		}
		case 2:
		{
			iToC();
			count = 0;
			break;
		}
		case 3:
		{
			std::cout << "\nExiting\n\n";
			count = 0;
			break;
		}
		default:
		{
			count = 1;
			std::cout << "Not a valid entry, please re-enter\n";
			std::cin >> num;
			break;
		}
		}
	} while (count == 1);
	system("Pause");
	return 0;
}

void fToC()
{
	float fahrenheit = 0.0;
	float celcuis = 0.0f;

	std::cout << "\nPlease enter the value of Fahrenheit\n";
	std::cin >> fahrenheit;

	while (fahrenheit <= 0)
	{
		std::cout << "\nInvalid value, please re-enter\n";
		std::cin >> fahrenheit;
	}

	celcuis = (fahrenheit - 32) * (5.0f / 9);

	std::cout << "\nYour Fahrenheit in Celcius is: " << celcuis << std::endl;
}

void iToC()
{
	float inches = 0.0;
	float centimetres = 0.0f;

	std::cout << "\nPlease enter the value of Inches\n";
	std::cin >> inches;

	while (inches <= 0)
	{
		std::cout << "\nInvalid value, please re-enter\n";
		std::cin >> inches;
	}

	centimetres = inches * 2.54;

	std::cout << "\nYour Inches in Centimetres is: " << centimetres << std::endl;
}