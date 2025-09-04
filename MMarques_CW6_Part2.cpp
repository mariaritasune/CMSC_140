/*
 * Class: CMSC140 CRN
 * Instructor: Huseyin
 * Project<6>
 * Description: This program works as a soda vending machine.
 The program show the product menu with price and takes user input for product number,
 quantity and pay amount.
 * Due Date:04/14
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Maria Marques
*/
#include<iostream>
#include<cmath>

using namespace std;

double showMenu();
double takePurchase(double price); 
double takePayment();
void displayInfo(double purchasePrice,double payment);


int main()
{
    double price = showMenu(); 
    double totalPrice = takePurchase(price);
    double payment = takePayment();
    cout << endl;
    displayInfo(totalPrice, payment); 
}

double showMenu()
{
    int choice;
    cout << "**** Vending Machine ****\n";
    cout << "1. Coke $1.25\n";
    cout << "2. Pepsi $1.00\n";
    cout << "3. Water $2.00\n";
    cout << "4. Coffee $1.50\n";
    cout << "5. Exit Menu\n";

    cout << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    double price; 
    switch (choice)
    {
    case 1: price = 1.25; break;
    case 2: price = 1.00; break;
    case 3: price = 2.00; break;
    case 4: price = 1.50; break;
    case 5: price = 0; break;
    default: cout << "You did not enter 1, 2, 3, 4 or 5!\n";
        price = 0; 
    }
    return price; 
}

double takePurchase(double price) 
{
    int quantity;
    cout << "How many do you want? ";
    cin >> quantity;
    double purchasePrice = quantity * price; 
    return purchasePrice; 
}
double takePayment()
{
    double payment;
    cout << "How much is your payment? ";
    cin >> payment;
    return payment;
}

void displayInfo(double purchasePrice, double payment)
{
    double tax;
    double totalPurchasePrice;
    double change;
    tax = purchasePrice * 0.06;
    cout << "Tax Amount: $" << tax << endl;
    totalPurchasePrice = tax + purchasePrice;
    cout << "Total Purchase: $" << totalPurchasePrice << endl;
    change = payment - totalPurchasePrice;
    cout << "Change: $" << change << endl;



}
