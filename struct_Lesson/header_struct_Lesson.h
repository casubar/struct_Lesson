#pragma once
#include <string> // needed for string type in header


int total(int a, int b);


// struct students
struct studentType {
	std::string Fname;
	std::string Lname;
	char courseGrade;
	int testScore;
	int programmingScore;
	double GPA;
};


// wireXpert test settings
struct testSettingsType {
	std::string testLimit;
	std::string cableName;
	double NVP;
	int cableLength;
};


// ------ Employee Data

struct nameType {
	std::string Fname;
	std::string Mname;
	std::string Lname;
};

struct addressType {
	std::string address1;
	std::string address2;
	std::string city;
	std::string state;
	std::string zip;
};

struct dateType {
	int month;
	int day;
	int year;
};

struct contactType {
	std::string phone;
	std::string cellphone;
	std::string fax;
	std::string pager;
	std::string email;
};

struct employeeType {
	nameType name;
	std::string empID;
	addressType address;
	dateType hireDate;
	dateType quitDate;
	contactType contact;
	std::string deptID;
	double salary;
};



void getStudentData(studentType& newStudent);

void getNewStudData(studentType studList[]);

void getTestSettings(testSettingsType cable[]);

// ------ Employee Data
void getEmployeeName(employeeType newEmployee[]);