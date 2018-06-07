#include "stdafx.h"
#include "header_struct_Lesson.h" // needed to link struct in header file
#include <iostream>
#include <string>
#include <fstream>


const int ROW = 3;


int total(int a, int b) {
	return a + b;
}


void getStudentData(studentType& newStudent) {
	
	int score;

	std::cout << "Fname: ";
	std::cin >> newStudent.Fname;
	std::cout << "Lname: ";
	std::cin >> newStudent.Lname;
	std::cout << "testScore: ";
	std::cin >> newStudent.testScore;
	std::cout << "programmingScore: ";
	std::cin >> newStudent.programmingScore;

	score = (newStudent.testScore + newStudent.programmingScore) / 2;

	if (score >= 90) {
		newStudent.courseGrade = 'A';
	}
	else if (score >=80) {
		newStudent.courseGrade = 'B';
	}
	else if (score >= 70) {
		newStudent.courseGrade = 'C';
	}
	else {
		newStudent.courseGrade = 'F';
	}

	std::cout << "Grade = " << newStudent.courseGrade;
}

void getNewStudData(studentType studList[]) {

	for (int i = 0; i < 5; i++) {
		std::cout << "Student[" << i << "]" << std::endl;
		std::cout << "Fname: ";
		std::cin >> studList[i].Fname;
		std::cout << "Lname: ";
		std::cin >> studList[i].Lname;
	}

}


//---------wireXpert Test Settings

void getTestSettings(testSettingsType cable[]) {

	for (int numCable = 0; numCable < ROW; numCable++) {
		std::cout << "Cable [" << numCable + 1 << "]" << std::endl;

		std::cout << "Limit: ";
		std::cin >> cable[numCable].testLimit;
		std::cout << "Cable Name: ";
		std::cin >> cable[numCable].cableName;
		std::cout << "NVP: ";
		std::cin >> cable[numCable].NVP;
		std::cout << "Length: ";
		std::cin >> cable[numCable].cableLength;
	}
}

// ------ Employee Data
void getEmployeeName(employeeType newEmployee[ROW]) {	
	for (int numEmploy = 0; numEmploy < ROW; numEmploy++) {
		std::cout << "Employee [" << numEmploy + 1 << "]" << std::endl;
		std::cout << "Fname: ";
		std::cin >> newEmployee[numEmploy].name.Fname;
		std::cout << "Mname: ";
		std::cin >> newEmployee[numEmploy].name.Mname;
		std::cout << "Lname: ";
		std::cin >> newEmployee[numEmploy].name.Lname;
	}
}