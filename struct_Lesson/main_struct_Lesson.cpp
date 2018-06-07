// struct_Lesson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "header_struct_Lesson.h"
#include <iostream>
#include <string>


const int ROW = 3;


int main()
{
	char p;

	studentType stud1;
	studentType newStudent[5];

	testSettingsType copper[ROW];
	
	
	//getStudentData(stud1);
	//getNewStudData(newStudent);
	//getTestSettings(copper);

	employeeType newEmployee[ROW];
	getEmployeeName(newEmployee);


	
	
	std::cout << std::endl;
	std::cout << "Press Any Key...";
	std::cin >> p;
    return 0;
}

//-----------------------------------------------------


