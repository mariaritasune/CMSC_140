/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project<6>
 * Description: This program allows the user to 
 choose addition or subtraction operations on two whole numbers entered from the keyboard.
 * Due Date: 04/06
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques
*/
#include <iostream>
#include <limits>
using namespace std;

int getOperationChoice();
bool validateChoice(int choice);
void getNumbers(int& num1, int& num2);
int performOperation(char choice, int num1, int num2);

int main() 
{
    int choice;
    int num1, num2, result;

    choice = getOperationChoice();

    if (!validateChoice(choice)) 
    {
        return 1;
    }

    getNumbers(num1, num2);

    result = performOperation(choice, num1, num2);

    cout << "The result of the operation is: " << result << endl;

    return 0;
}

int getOperationChoice() 
{
    int choice;
    cout << "Enter your choice, 1 for addition, 2 for subtraction: ";
    cin >> choice;
    return choice;
}

bool validateChoice(int choice) 
{
    if (choice != 1 && choice != 2) 
    {
        cout << "Invalid choice of operation. Try again\n";
        return false;
    }
    else
    {
        return true;
    }
}

void getNumbers(int& num1, int& num2) 
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

int performOperation(char choice, int num1, int num2) 
{
    if (choice == 1) 
    {
        return num1 + num2;
    }
    else 
    {
        return num1 - num2;
    }
}
