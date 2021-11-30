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
    cout << " => Enter your selection: ";
}