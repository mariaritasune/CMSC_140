/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project 4
 * Description: 
The program simulates a movie ticket booking system, 
allowing users to select a movie, verify their age against the movie's rating, 
purchase tickets, and calculate change.
 * Due Date: 03/03/2024
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques 
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  
    const int G_RATING = 0;
    const int PG_RATING = 7;
    const int PG13_RATING = 13;
    const int R_RATING = 17;
    const int NC17_RATING = 18;
    const double ADULT_TICKET = 12.00;
    const double CHILD_TICKET = 8.00;

    
    cout << "********** Movie Ticket Booking **********" << endl;
    cout << "Today's Movies:" << endl;
    cout << "1. \"Joker\" - Rated R" << endl;
    cout << "2. \"Harry Potter and The Prisioner of Azkabam\" - Rated PG" << endl;
    cout << "3. \"Jurassic Park 2\" - Rated PG-13" << endl;
    cout << "4. \"The Lion King\" - Rated G" << endl;
    cout << "5. \"American Pie\" - Rated NC-17\n" << endl;

    
    int movie;
    cout << "Please select a movie by entering its number (1-5): ";
    cin >> movie;
    cout << endl;

    
    switch (movie) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        break;
    default:
        cout << "Error: Invalid movie selection. Please enter a number between 1 and 5.\n" << endl;
        return 1;
    }

   
    int age;
    cout << "Please enter your age: ";
    cin >> age; 
    cout << endl;

    
    if (age < 0) {
        cout << "Error: Invalid age. Age cannot be negative." << endl;
        return 1;
    }

    
    bool ageRequirementMet = false;
    switch (movie) {
    case 1:
        ageRequirementMet = (age >= R_RATING);
        break;
    case 2:
        ageRequirementMet = (age >= PG_RATING);
        break;
    case 3:
        ageRequirementMet = (age >= PG13_RATING);
        break;
    case 4:
        ageRequirementMet = true; 
        break;
    case 5:
        ageRequirementMet = (age >= NC17_RATING);
        break;
    }

    
    if (ageRequirementMet) {
        
        int adultTickets, childTickets;
        double totalCost;

        
        cout << "How many adult tickets would you like to purchase? ";
        cin >> adultTickets;

       
        if (adultTickets < 0) {
            cout << "Error: Invalid number of adult tickets. Number cannot be negative." << endl;
            return 1;
        }

        
        cout << "How many child tickets would you like to purchase? ";
        cin >> childTickets;

        
        if (childTickets < 0) {
            cout << "Error: Invalid number of child tickets. Number cannot be negative." << endl;
            return 1;
        }

       
        totalCost = (adultTickets * ADULT_TICKET) + (childTickets * CHILD_TICKET);
        cout << endl << "Total cost: $" << fixed << setprecision(2) << totalCost << endl;

       
        double amountTendered;
        cout << "Please enter the amount you are tendering: $";
        cin >> amountTendered;

        
        if (amountTendered < 0) {
            cout << "Error: Invalid amount tendered. Amount cannot be negative." << endl;
            return 1;
        }

        
        if (amountTendered < totalCost) {
            cout << "Error: Amount tendered is less than the total cost. Transaction Cancelled." << endl;
            return 1;
        }

        
        double change = amountTendered - totalCost;
        cout << "Change: $" << fixed << setprecision(2) << change << endl;
    }
    else {
        cout << "Sorry, you must be at least 18 to watch NC-17 movies." << endl;
    }

    return 0;
}
