// ConsoleRental.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rental.cpp";

using namespace std;

int main()
{
    int choice;
    
    cout << "Welcome to Github Car Rental\n\n";
    
    cout << "1: Add new rental\n2: Delete saved rental"; cin >> choice;

    if (choice == 1) {
        string new_car;

        cout << "Name of the new car: "; cin >> new_car;

        CreateRental(new_car);

        main();
    }

    if (choice == 2) {
        string carToRemove;
        // we should output the content in the file here
        cout << "Which car would you like to remove: "; cin >> carToRemove;

        DeleteRental(carToRemove);

        main();
    }
}