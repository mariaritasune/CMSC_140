/*
* Class: CMSC140 CRN
* Instructor : Huseyin
* Project<5>
* Description : This program asks for the user name, phone number, street address,
city, state, and zip code.The pogram saves the user information to a file
and then displayes the information.
* Due Date : 04 / 02
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Maria Marques
*/
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, address, city, state;
    int pnumber, zipcode;

    ofstream outputFile;
    outputFile.open("List.txt");

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your phone number: ";
    cin >> pnumber;

    cout << "Enter your street address: ";
    cin.ignore();
    getline(cin, address);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your state: ";
    getline(cin, state);

    cout << "Enter your zip code: ";
    cin >> zipcode;
    cout << endl;
    cout << "Information saved to List.txt\n";
  
    outputFile << name << endl;
    outputFile << pnumber << endl;
    outputFile << address << endl;
    outputFile << city << endl;
    outputFile << state << endl;
    outputFile << zipcode << endl;

    outputFile.close(); 

    ifstream inputFile("List.txt");
 

    cout << "Displaying information from List.txt:" << endl;
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}
