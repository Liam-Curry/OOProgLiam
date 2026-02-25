//Liam Curry
//c00311724
//5-11-2025
//Labsheet 8, Which exam grade fits the mark given
//Time Taken: 0 hours, 25 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>
#include <string>

std::string getExamGrade(int t_examMark); //declaring function

int mainQ4()
{
	int examMark = 0;
	std::string examGrade;

	std::cout << "Please enter your exam mark\n"; //gaining user input
	std::cin >> examMark;

	if (examMark < 0 || examMark > 100) //error checking
	{
		std::cout << "The mark you have entered is invalid\n";
	}
	else
	{
		examGrade = getExamGrade(examMark); //calling function
		std::cout << "Your exam grade is : " << examGrade << std::endl;
	}
	system("Pause");
	return(0);
}

std::string getExamGrade(int t_examMark) //function used to calculate mark given into the grade
{
	std::string examGrade;
	if (t_examMark >= 0 && t_examMark < 40) //Checking which grade fits the mark
	{
		examGrade = "Fail";
	}
	else if (t_examMark >= 40 && t_examMark < 55)
	{
		examGrade = "Pass";
	}
	else if (t_examMark >= 55 && t_examMark < 70)
	{
		examGrade = "Merit";
	}
	else if (t_examMark >= 70 && t_examMark <= 100)
	{
		examGrade = "Distinction";
	}
	return examGrade;
}