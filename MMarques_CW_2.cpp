/*
* Class: CMSC140 CRN
* Instructor: Huseyin Aygun
* Project 2
* Description:Develop a program that displays the following
information to the console, each piece of information on a 
separate line: your name, your address; house #, street, 
city, state, and ZIP code, telephone number and college major
* Due Date: 02/04
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Maria Rita Sune Marques
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string NAME = "Maria Rita Sune Marques";
	const string MAJOR = "Computer Science";

	string address = "4400 East West HWY. Bethesda, MD 20814";
	string phoneNumber = "301-828-8264";

	cout << NAME << "\n"
		<< address << "\n"
		<< phoneNumber << "\n"
		<< MAJOR << "\n";

	return 0;
}


