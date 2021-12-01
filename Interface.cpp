/*
	Noble Team

	Noble, Trevor
	Derderian, Harry
	Kaboli, Seena
	Asbun, Guido
	Kim, Yeomyung

	November 22, 2021

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
    cout << "\n Select one of the following:\n\n";
    cout << string(4, ' ') << "1. Add a donor\n";
    cout << string (4, ' ') << "2. Delete a donors\n";
    cout << string(4, ' ') << "3. Print all donors\n";
    cout << string (4, ' ') << "4. To Exit\n\n";
}

void processSelection(DonorList& aDonorList)
{

    string willContinue = "y";
    bool exit = false;

    while ((willContinue == "y") && !exit)
    {
        cout << " => Enter your selection: ";
        int selection{0};
        cin >> selection;

        switch (selection)
        {
            case 1:
                addDonor(aDonorList);
                break;
            case 2:
                deleteDonor(aDonorList);
                break;
            case 3:
                printAllDonors(aDonorList);
                break;
            case 4:
                cout << " => Thank you for visiting our site!";
                exit = true;
                break;
            default:
                cout << " => Sorry. That is not a selection. ";
        }

        if (!exit)
        {
            cout << " \n=> Would you like to continue? (y/n) ";
            cin >> willContinue;
            if (willContinue == "y")
                displayMenu();
        }
    }
}

void addDonor(DonorList& aDonorList)
{
    string firstName;
    cout << " => Enter donor's first name: ";
    cin >> firstName;

    string lastName;
    cout << " => Enter donor's last name: ";
    cin >> lastName;

    int memberNumber;
    cout << " => Enter donor's membership number: ";
    cin >> memberNumber;

    double donationAmount;
    cout << " => Enter amount donated: $ ";
    cin >> donationAmount;

    aDonorList.addDonor(firstName, lastName, memberNumber, donationAmount);
    cout << " => Donor has been added. \n";
}

void deleteDonor(DonorList& aDonorList)
{
    int membershipNumber;
    cout << " => Enter donor's membership number: ";
    cin >> membershipNumber;

    aDonorList.deleteDonor(membershipNumber);

    cout << " => Donor has been deleted. \n";
}

void printAllDonors(DonorList& aDonorList){
    aDonorList.printAllDonors();
}