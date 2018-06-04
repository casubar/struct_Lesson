// struct_Lesson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "header_struct_Lesson.h"
#include <iostream>
#include <string>




int main()
{
	char p;

	structType sd;
	
	getData(sd);
	std::cout << sd.a << " " << sd.b;
	
	std::cout << std::endl;
	std::cout << "Press Any Key...";
	std::cin >> p;
    return 0;
}

//-----------------------------------------------------


