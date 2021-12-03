/*
	Noble Team

	Noble, Trevor
	Derderian, Harry
	Kaboli, Seena
	Asbun, Guido
	Kim, Yeomyung

	December 3, 2021

	CS A250
	Project 1
*/

#include "Interface.h"
#include "DonorList.h"

#include <iostream>
#include <string>

using namespace std;

void displayMenu()
{
    cout << string(49, '*') << endl;
    cout << string (20 , ' ') << "MAIN MENU" << endl;
    cout << string(49, '*') << endl;
    cout << "\nSelect one of the following:\n\n";
    cout << string(4, ' ') << "1. Add a donor\n";
    cout << string (4, ' ') << "2. Delete a donor\n";
    cout << string(4, ' ') << "3. Print all donor\n";
    cout << string (4, ' ') << "4. To Exit\n\n";
}

void processSelection(DonorList& aDonorList)
{

    char willContinue = 'y';
    bool exit = false;

    while ((willContinue == 'y') && !exit)
    {
        cout << "  => Enter your selection: ";
        int selection{0};
        cin >> selection;

        switch (selection)
        {
            case 1:
                cout << endl;
                addDonor(aDonorList);
                break;
            case 2:
                cout << endl;
                deleteDonor(aDonorList);
                break;
            case 3:
                cout << endl;
                printAllDonors(aDonorList);
                break;
            case 4:
                cout << "\n  => Thank you for visiting our site!\n";
                exit = true;
                break;
            default:
                cout << "\n  => Sorry. That is not a selection.\n";
        }

        if (!exit)
        {
            cout << " \n  => Would you like to continue? (y/n) ";
            cin >> willContinue;
            cout << endl;
            if (willContinue == 'y')
                displayMenu();
            else
                cout << "  => Thank you for visiting our site!\n";
        }
    }
}

void addDonor(DonorList& aDonorList)
{
    string firstName;
    cout << "  => Enter donor's first name: ";
    cin >> firstName;

    string lastName;
    cout << "  => Enter donor's last name: ";
    cin >> lastName;

    int memberNumber;
    cout << "  => Enter donor's membership number: ";
    cin >> memberNumber;

    double donationAmount;
    cout << "  => Enter amount donated: $ ";
    cin >> donationAmount;

    aDonorList.addDonor(firstName, lastName, memberNumber,
		donationAmount);
    cout << "\n  => Donor has been added. \n";
}

void deleteDonor(DonorList& aDonorList)
{
    int membershipNumber;
    cout << "  => Enter donor's membership number: ";
    cin >> membershipNumber;

    aDonorList.deleteDonor(membershipNumber);

    cout << "\n  => Donor has been deleted. \n";
}

void printAllDonors(DonorList& aDonorList){
    aDonorList.printAllDonors();
}
