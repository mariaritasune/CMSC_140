/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project 5
 * Description: This program simulates a magic square using 3 one dimensional
 parallel arrays of integer type. 
 * Due Date: 04/28
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques
*/
#include<iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
void fillArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);

int main()
{
    char choice;

    do {
        // Define arrays for each row of the magic square
        int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];

        // Fill the arrays with user input
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        // Display the magic square
        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        // Check if it's a magic square
        if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
        {
            cout << "\nThis is a Lo Shu magic square!\n";
            cout << "\nName: Maria Marques\n";
            cout << "Project 5\n";
            cout << "Due Date: 04/28/2024\n";
            return 0; // End the program after successful execution
        }
        else
        {
            cout << "\nThis is not a Lo Shu magic square.\n";

            cout << "\nDo you want to try again? (y/n): ";
            cin >> choice;
        }
    } while (choice == 'y' || choice == 'Y');

    cout << "\nName: Maria Marques\n";
    cout << "Project 5\n";
    cout << "Due Date: 04/28/2024\n";

    return 0;
}





// Function to fill the arrays with user input
void fillArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    cout << "Enter the number for row 0 and column 0: ";
    cin >> arrayrow1[0];
    cout << "Enter the number for row 0 and column 1: ";
    cin >> arrayrow1[1];
    cout << "Enter the number for row 0 and column 2: ";
    cin >> arrayrow1[2];
    cout << "Enter the number for row 1 and column 0: ";
    cin >> arrayrow2[0];
    cout << "Enter the number for row 1 and column 1: ";
    cin >> arrayrow2[1];
    cout << "Enter the number for row 1 and column 2: ";
    cin >> arrayrow2[2];
    cout << "Enter the number for row 2 and column 0: ";
    cin >> arrayrow3[0];
    cout << "Enter the number for row 2 and column 1: ";
    cin >> arrayrow3[1];
    cout << "Enter the number for row 2 and column 2: ";
    cin >> arrayrow3[2];
}

// Function to display the magic square
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arrayrow1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < size; ++i)
    {
        cout << arrayrow2[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < size; ++i)
    {
        cout << arrayrow3[i] << " ";
    }
    cout << "\n";
}

// Function to check if the input forms a magic square
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    // Check if each row sum is equal
    if (!checkRowSum(arrayRow1, size) || !checkRowSum(arrayRow2, size) || !checkRowSum(arrayRow3, size))
        return false;

    
    if (!checkColSum(arrayRow1, arrayRow2, arrayRow3, size))
        return false;

    
    if (!checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size))
        return false;

    return true;
}

// Function to check if the sum of each row is the same
bool checkRowSum(int arrayRow[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arrayRow[i];
    }
    return sum == 15;  // Sum of numbers 1 to 9
}

// Function to check if the sum of each column is the same
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    int sum1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
    int sum2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
    int sum3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

    return sum1 == 15 && sum2 == 15 && sum3 == 15;  // Sum of numbers 1 to 9
}

// Function to check if the sum of each diagonal is the same
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    int sumDiag1 = arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
    int sumDiag2 = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];

    return sumDiag1 == 15 && sumDiag2 == 15;  // Sum of numbers 1 to 9
}

// Function to check if the values are within 1-9
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
    for (int i = 0; i < size; ++i)
    {
        if (arrayRow1[i] < min || arrayRow1[i] > max ||
            arrayRow2[i] < min || arrayRow2[i] > max ||
            arrayRow3[i] < min || arrayRow3[i] > max)
        {
            return false;
        }
    }
    return true;
}

// Function to check if the values in each array are unique
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arrayRow1[i] == arrayRow1[j] ||
                arrayRow2[i] == arrayRow2[j] ||
                arrayRow3[i] == arrayRow3[j])
            {
                return false;
            }
        }
    }
    return true;
}