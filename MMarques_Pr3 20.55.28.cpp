/*
 *Class: CMSC140 CRN
 * Instructor:Huseyin
 * Project<3>
 * Description: This is a program that calculates the occupancy rate and the total hotel income 
 for one night and displays this information as well as some other information described below. 
 * Due Date: 03/31
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques
*/
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

const double SINGLE_RATE = 60.0;
const double DOUBLE_RATE = 75.0;
const double KING_RATE = 100.0;
const double SUITE_RATE = 150.0;

const int MAX_FLOORS = 5;
const int MAX_ROOMS_PER_FLOOR = 30;

int main() {
    string location;
    int numFloors;

    
    cout << "============================================================\n";
    cout << setw(35) << "Bluemont Hotel\n";
    cout << "============================================================\n";

    
    cout << "Enter the location for this hotel chain: ";
    getline(cin, location);

    do {
        cout << "Enter the number of floors (max 5): ";
        cin >> numFloors;

        if (numFloors < 1 || numFloors > MAX_FLOORS) {
            cout << "Invalid input. Number of floors must be between 1 and 5." << endl;
        }
    } while (numFloors < 1 || numFloors > MAX_FLOORS);

    double totalIncome = 0.0;
    int totalOccupiedRooms = 0;
    int totalRooms = 0;
    int minRooms = MAX_ROOMS_PER_FLOOR + 1;
    int minFloor = -1;

    
    cin.ignore();

    
    for (int floor = 1; floor <= numFloors; ++floor) {
        int numRooms;

        
        do {
            cout << "\nEnter the number of rooms on floor " << floor << " (max 30): ";
            cin >> numRooms;

            if (numRooms < 1 || numRooms > MAX_ROOMS_PER_FLOOR) {
                cout << "Invalid input. Number of rooms must be between 1 and 30." << endl;
            }
        } while (numRooms < 1 || numRooms > MAX_ROOMS_PER_FLOOR);

        totalRooms += numRooms;

        int singleOccupied, doubleOccupied, kingOccupied, suiteOccupied;

        
        cout << "How many SINGLE rooms are occupied in the " << floor << " floor? ";
        cin >> singleOccupied;
        totalOccupiedRooms += singleOccupied;
        totalIncome += singleOccupied * SINGLE_RATE;

        cout << "How many DOUBLE rooms are occupied in the " << floor << " floor? ";
        cin >> doubleOccupied;
        totalOccupiedRooms += doubleOccupied;
        totalIncome += doubleOccupied * DOUBLE_RATE;

        cout << "How many KING rooms are occupied in the " << floor << " floor? ";
        cin >> kingOccupied;
        totalOccupiedRooms += kingOccupied;
        totalIncome += kingOccupied * KING_RATE;

        cout << "How many SUITE rooms are occupied in the " << floor << " floor? ";
        cin >> suiteOccupied;
        totalOccupiedRooms += suiteOccupied;
        totalIncome += suiteOccupied * SUITE_RATE;

        
        if (numRooms < minRooms) {
            minRooms = numRooms;
            minFloor = floor;
        }
    }

    
    double occupancyRate = (static_cast<double>(totalOccupiedRooms) / totalRooms) * 100.0;

    cout << "============================================================================================\n";
    cout << setw(35) << "Bluemont Hotel located in " << location << endl;
    cout << endl;
    cout << setw(49) << "TODAY'S ROOM RATES <US$/night>\n" << endl;
    cout << setw(15) << " Single Room " << setw(15) << " Double Room " << setw(15)
        << " King Room " << setw(15) << " Suite Room " << setw(15) << endl;
    cout << setw(14) << "60" << setw(15) << "75"
        << setw(15) << "100" << setw(15) << "150" << endl;
    cout << "============================================================================================\n";

    
    cout << fixed << setprecision(2);
    cout << setw(25) << "Hotel Income: " << setw(3) << "$"<< totalIncome << endl;
    cout << setw(25) << "Total Occupied Rooms: " << setw(10) << totalOccupiedRooms << endl;
    cout << setw(25) << "Total Unoccupied Rooms: " << setw(10) << totalRooms - totalOccupiedRooms << endl;
    cout << setw(25) << "Occupancy Rate: " << setw(10) << occupancyRate << "%" << endl;
    cout << endl;
    if (occupancyRate < 60.0) {
        cout << "Need to improve occupancy rate!" << endl;
    }
    cout << "Floor with Minimum Rooms: " << minFloor << endl;
    cout << endl;

    cout << "Thank you for testing my program!!\n";
    cout << "PROGRAMMER: MARIA MARQUES\n";
    cout << "CMSC140 Common Project 3\n";
    cout << "Due Date: 03/31/2024\n";
    return 0;
}

