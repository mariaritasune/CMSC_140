/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project 4
 * Description: Develop a program that asks for the number of tickets sold and computes the total cost of the purchase at Walt Disney World.
 * Due Date:02/25
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Rita Sune Marques
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double ticket_Price = 109.0;
    double total_Cost, numberOfDays, discount;

    cout << "How many days of tickets were sold?";
    cin >> numberOfDays;

    if (numberOfDays <= 0)
        cout << "Tickets sold must be greater than zero.";
    else if (numberOfDays >= 10)
        discount = 0.42;
    else if (numberOfDays >= 7)
        discount = 0.33;
    else if (numberOfDays >= 5)
        discount = 0.25;
    else if (numberOfDays >= 3)
        discount = 0.1;
    else
        discount = 0.0;

    if (numberOfDays > 0) {
        total_Cost = ticket_Price * numberOfDays * (1 - discount);
        cout << fixed << setprecision(2);
        cout << "The total cost of the purchase is $" << total_Cost << endl;
    }
    return 0;
}