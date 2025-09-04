/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project 4
 * Description: This program calculates the total price for a custom shop sign based on the 
 number of colors, inclusion of lighting, and the necessity of removing an old sign.
 * Due Date: 03/06/2024
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number_Colors;
    char light_Sign,
        old_Sign;
    double base_Price,
        new_Price;

    cout << "Enter the number of colors in the sign: ";
    cin >> number_Colors;

    if (number_Colors <= 0) {
        cout << "Error: Number of colors must be greater than 0." << endl;
        return 1;
    }

    cout << "Do you want a lighted sign (y/n)? ";
    cin >> light_Sign;
    cout << "Do you need an old sign removed (y/n)? ";
    cin >> old_Sign;

    switch (number_Colors)
    {
    case 1: base_Price = 250.0;
        break;
    case 2: base_Price = 325.0;
        break;
    case 3: base_Price = 450.0;
        break;
    case 4: base_Price = 625.0;
        break;
    default: base_Price = 850.0;
    }

    if (light_Sign == 'y' || light_Sign == 'Y')
    {
        new_Price = base_Price * 1.25;
    }
    else
    {
        new_Price = base_Price;
    }

    if (old_Sign == 'y' || old_Sign == 'Y')
    {
        new_Price = (base_Price * 0.10) + new_Price;
    }

    cout << fixed << showpoint << setprecision(2) << "The price is $" << new_Price << endl;

    return 0;
}
