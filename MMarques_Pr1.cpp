/*
 * Class: CMSC 140
 * Instructor: Huseyin Aygun
 * Project 1
 * Description: Greets the user and asks for their name, 
 asks the user for their favorite number, 
 calculates and displays various mathematical operations on the number, 
 asks the user for two numbers, and demonstrates integer and floating point division.
 * Due Date: 02/18
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Name: Maria Rita Sune Marques
*/
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	
	string name;
	double favorite_Number, 
		double_of_Favorite, 
		half_of_Favorite, 
		square_of_Favorite, 
		root_of_Favorite, 
		floating_Division;
	int whole_number, 
		whole_number_two, 
		int_Divison;
	
	const string HEADER = "********** Welcome to Programming Event **********";

	cout << HEADER << endl;
	cout << "========================================" << endl;

	cout << "Hello, What's your name?" << endl;
	getline(cin, name);
	cout << endl;

	
	cout << "Nice to meet you, " << name << "." << endl;
	cout << "Tell me, " << name << " what's your favorite number?" << endl;
	cin >> favorite_Number;
	cout << "========================================" << endl;
	
	double_of_Favorite = favorite_Number * 2;
	half_of_Favorite = favorite_Number / 2;
	square_of_Favorite = pow(favorite_Number, 2.0);
	root_of_Favorite = sqrt(favorite_Number);
	cout << "Great choice! Here are some fun facts about the number " << favorite_Number << ":" << endl;
	cout << "-Double of " << favorite_Number << " is " << double_of_Favorite << "." << endl;
	
	cout << "-Half of " << favorite_Number << " is " << half_of_Favorite << "." << endl;
	
	cout << "-" << favorite_Number << " squared is " << square_of_Favorite << "." << endl;
	
	cout << "-Square root of " << favorite_Number << " is approximately " << root_of_Favorite << "." << endl;
	cout << "========================================" << endl;
	
	cout << "Now, " << name << " let's explore division. Give me a whole number." << endl;
	cin >> whole_number;
	
	cout << "Now, give me another whole number." << endl;
	cin >> whole_number_two;
	cout << "========================================" << endl;
	
	int_Divison = whole_number / whole_number_two;
	floating_Division = static_cast<float>(whole_number) / whole_number_two;
	cout << "Using integer division, " << whole_number << " divided by " << whole_number_two << " is approximately " << int_Divison << endl;
	cout << "Using floating point division, " << whole_number << " divided by " << whole_number_two << " is approximately " << floating_Division << endl;
	cout << "========================================" << endl;
	
	cout << "Thank you for testing my program!" << endl;
	cout << "Programmer: Maria Marques" << endl;
	cout << "CMSC 140 Project #1" << endl;
	cout << "Due Date: 2/18/2024" << endl;
	cout << "========================================";
	return 0;
}