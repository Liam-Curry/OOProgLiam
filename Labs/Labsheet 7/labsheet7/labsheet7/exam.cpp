//Liam Curry 
//c00311724
//13-10-2025
//Labsheet 7, Exam grades
//0 hours 30 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

int mainP3()
{
	int grade = 0;

	std::cout << "Please enter the grade percent you have recieved" << std::endl; //reading user input
	std::cin >> grade;

	if (grade < 0 || grade > 100) {
		std::cout << "Error, invalid grade amount entered" << std::endl;
	}
	else if (grade >= 0 && grade < 40) {
		std::cout << "You have recieved the grade of Fail" << std::endl;
	}
	else if (grade >= 40 && grade < 55) {
		std::cout << "You have recieved the grade of Pass" << std::endl;
	}
	else if (grade >= 55 && grade < 70) {
		std::cout << "You have recieved the grade of Merit" << std::endl;
	}
	else
	{
		std::cout << "You have recieved the grade of Distinction, congradulations!" << std::endl;
	}

	system("Pause");
	return(0);
}