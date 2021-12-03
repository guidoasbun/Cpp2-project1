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

#include <iostream>
#include "MemberType.h"
#include "DonorType.h"
#include "Database.h"
#include "DonorList.h"
#include "Interface.h"
#include "set"

using namespace std;

/* PART E testing
Create an object of the DonorList class.
Call function createDonorList to create the linked list.
Call function printAllDonor to check if all the donors are in the list.
Once this is working, start testing the copy constructor.
	How do you test the copy constructor?
		Create another object of the DonorList class using the copy constructor.
		Print both objects. They should be the same.
		Empty one of the objects.
	Print both objects again. One should still contain all original donors, 
	while the other should be empty.
If that is working, then test the copy assignment operator
	How do you test the copy assignment operator?
		You will need different tests for each case:
		Test copyCallingObjIsEmpty()
			Create list1 with no donors and list2 with 4 donors.
				Print both lists.
				Function call: list1 = list2
				Print both lists (should be the same).
				Empty one of the lists using the clearList() function.
				Print both lists (one should be empty).
		Test copyObjectsSameLength()
			Create list1 with 4 donors and list2 with 4 donors (not the same donors of list1).
			Repeat steps 1-5
		Test copyCallingObjLonger()
			Create list1 with 4 donors and list2 with 2 donors (not the same donors of list1).
			Repeat steps 1-5
		Test copyCallingObjShorter
			Create list1 with 2 donors and list2 with 4 donors (not the same donors of list1).
			Repeat steps 1-5
		Test objects are the same
			Create list1 with 2 donors.
			Function call: list1 = list1
			The same-object error should be displayed.
*/
int main() {
	// PART E TESTING
	cout << "\n\n********** Copy Constructor Test **********" << endl;
	// initialize a donor list
	DonorList aDonorList;
	aDonorList.createList();
	// test the list is full
	cout << "\n## DONORLIST A PRINT:\n\n";
	aDonorList.printAllDonors();
	// copy constructor test
	DonorList bDonorList = aDonorList;
	// test the copy works
	cout << "\n## DONORLIST B PRINT:\n\n";
	bDonorList.printAllDonors();
	// empty b
	bDonorList.clearList();
	cout << "\n## DONORLIST A PRINT AGAIN:\n\n";
	aDonorList.printAllDonors();
	cout << "\n## DONORLIST B PRINT...but EMPTY:\n\n";
	bDonorList.printAllDonors();
	
	cout << "\n\n********** Copy Assignment Operator Test Sequence **********" << endl;
		
	cout << "\n\n********** copyCallingObjIsEmpty Test **********" << endl;
	// create lists
	DonorList list1;
	DonorList list2;
	// assign
	list2.addDonor("Tom", "Brady", 9121, 1331);
	list2.addDonor("John", "McCarthy", 1231, 62622);
	list2.addDonor("Michael", "Jordan", 23, 2222);
	list2.addDonor("LeBron", "James", 6, 2313);
	// print em
	cout << "\n## LIST1 INITIAL PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n\n## LIST2 INITIAL PRINT:\n\n";
	list2.printAllDonors();
	// set equal
	list1 = list2;
	// print em again
	cout << "\n## LIST1 COPY PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 COPY PRINT:\n\n";
	list2.printAllDonors();
	// clear list 2
	list2.clearList();
	// print em again
	cout << "\n## LIST1 SAME PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 EMPTY PRINT:\n\n";
	list2.printAllDonors();

	cout << "\n\n\n********** copyObjectsSameLength Test **********" << endl;
	// clear
	list1.clearList();
	list2.clearList();
	// assign list1
	list1.addDonor("Sarah", "Connor", 1984, 331);
	list1.addDonor("Turanga", "Leela", 3000, 21232);
	list1.addDonor("Leia", "Organa", 1111, 42123);
	list1.addDonor("Ellen", "Ripley", 2154, 1665);
	// assign list2
	list2.addDonor("Tom", "Brady", 9121, 1331);
	list2.addDonor("John", "McCarthy", 1231, 62622);
	list2.addDonor("Michael", "Jordan", 23, 2222);
	list2.addDonor("LeBron", "James", 6, 2313);
	// print em
	cout << "\n## LIST1 INITIAL PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n\n## LIST2 INITIAL PRINT:\n\n";
	list2.printAllDonors();
	// set equal
	list1 = list2;
	// print em again
	cout << "\n## LIST1 COPY PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 COPY PRINT:\n\n";
	list2.printAllDonors();
	// clear list 2
	list2.clearList();
	// print em again
	cout << "\n## LIST1 SAME PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 EMPTY PRINT:\n\n";
	list2.printAllDonors();

	cout << "\n\n\n********** copyCallingObjLonger  Test **********" << endl;
	// clear
	list1.clearList();
	list2.clearList();
	// assign list1
	list1.addDonor("Sarah", "Connor", 1984, 331);
	list1.addDonor("Turanga", "Leela", 3000, 21232);
	list1.addDonor("Leia", "Organa", 1111, 42123);
	list1.addDonor("Ellen", "Ripley", 2154, 1665);
	// assign list2
	list2.addDonor("Michael", "Jordan", 23, 2222);
	list2.addDonor("LeBron", "James", 6, 2313);
	// print em
	cout << "\n## LIST1 INITIAL PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n\n## LIST2 INITIAL PRINT:\n\n";
	list2.printAllDonors();
	// set equal
	list1 = list2;
	// print em again
	cout << "\n## LIST1 COPY PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 COPY PRINT:\n\n";
	list2.printAllDonors();
	// clear list 2
	list2.clearList();
	// print em again
	cout << "\n## LIST1 SAME PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 EMPTY PRINT:\n\n";
	list2.printAllDonors();
	
	cout << "\n\n\n********** copyCallingObjShorter Test **********" << endl;
	// clear
	list1.clearList();
	list2.clearList();
	// assign list1
	list1.addDonor("Turanga", "Leela", 3000, 21232);
	list1.addDonor("Leia", "Organa", 1111, 42123);
	// assign list2
	list2.addDonor("Tom", "Brady", 9121, 1331);
	list2.addDonor("John", "McCarthy", 1231, 62622);
	list2.addDonor("Michael", "Jordan", 23, 2222);
	list2.addDonor("LeBron", "James", 6, 2313);
	// print em
	cout << "\n## LIST1 INITIAL PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n\n## LIST2 INITIAL PRINT:\n\n";
	list2.printAllDonors();
	// set equal
	list1 = list2;
	// print em again
	cout << "\n## LIST1 COPY PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 COPY PRINT:\n\n";
	list2.printAllDonors();
	// clear list 2
	list2.clearList();
	// print em again
	cout << "\n## LIST1 SAME PRINT:\n\n";
	list1.printAllDonors();
	cout << "\n## LIST2 EMPTY PRINT:\n\n";
	list2.printAllDonors();

	cout << "\n\n********** Objects Are The Same(OATS) Test **********" << endl;
	// clear
	list1.clearList();
	list2.clearList();
	// assign list1
	list1.addDonor("Turanga", "Leela", 3000, 21232);
	list1.addDonor("Leia", "Organa", 1111, 42123);

	cout << "\n\n";
	list1 = list1;


/*
int main() {
    DonorList aDonorList;
    aDonorList.createList();
    if (!aDonorList.isEmpty()) {
        displayMenu();
        processSelection(aDonorList);
    }

    return 0;
}
*/
/* 	DonorList list1;
	list1.createList();
	cout << "List 1:\n";
	cout << "Total donors: " << list1.getNoOfDonors() << endl;
	list1.printAllDonors();
	cout << "\n\n********** list2 Test **********\n" << endl;
	DonorList list2 = list1;
	cout << "Total donors: " << list2.getNoOfDonors() << endl;
	cout << "List 2:\n";
	list2.printAllDonors();

	cout << "\n\n********** Clearing list 2 **********\n" << endl;
	list2.clearList();

	cout << "List 1:\n";
	cout << "Total donors: " << list1.getNoOfDonors() << endl;
	list1.printAllDonors();
	cout << "\n\n********** list2 Test **********\n" << endl;
	cout << "List 2:\n";
	cout << "Total donors: " << list2.getNoOfDonors() << endl;

	list2.printAllDonors();
 *
 *
 *  */

//	std::cout << "********** MemberType Test **********" << std::endl;
//	//Default Constructor
//	MemberType member;
//	//Overloaded Constructor
//	MemberType memberTwo("Tom", "Brady", 9121);
//	//setMemberInfo
//	member.setMemberInfo("John", "McCarthy", 1231);
//	//printName
//	member.printName();
//	memberTwo.printName();
//	//printMemberInfo
//	member.printMemberInfo();
//	memberTwo.printMemberInfo();
//	//printFirstName
//	std::cout << member.getFirstName() << std::endl;
//	//printLastName
//	std::cout << member.getLastName() << std::endl;
//	//getMembershipNo
//	std::cout << member.getMembershipNo() << std::endl;
//
//
//	std::cout << "********** DonorType Test **********" << std::endl;
//
//	//Default Constructor
//	DonorType aDonor;
//	//Overloaded Constructor
//	DonorType aDonor2("Michael", "Jordan", 23, 2222.22);
//	//setDonorInfo
//	aDonor.setDonorInfo("LeBron", "James", 6, 1111.11);
//	//setAmountDonated
//	aDonor2.setAmountDonated(3333.33);
//	//getAmountDonated
//	std::cout << aDonor.getAmountDonated() << std::endl;
//	std::cout << aDonor2.getAmountDonated() << std::endl;
//	//printDonor
//	aDonor.printDonor();
//	aDonor2.printDonor();
//	//printDonation
//	aDonor.printDonation();
//	aDonor2.printDonation();
//
//
//	std::cout << "********** Database Test **********" << std::endl;
//	// getData test
//	std::set<DonorType> theSet =  getData();
//	// checking if set returned is correct
//	auto iter = theSet.begin();
//	// checking values inside set
//	for(iter; iter != theSet.end(); iter++)
//	iter->printDonor();
//
//
//    std::cout << "********** DonorList Test **********" << std::endl;
//    // addDonor() test
//    DonorList aDonorList;
//    aDonorList.addDonor("FirstName1", "LastName1", 39680388, 1000.00);
//    aDonorList.addDonor("FirstName2", "LastName2", 46865466, 2000.00);
//
//    //printAllDonors() test
//    aDonorList.printAllDonors();
//
//    //clearList() test
//    aDonorList.clearList();
//
//    //createList() test
//    DonorList aDonorList2;
//    aDonorList2.createList();
//    aDonorList2.printAllDonors();
//
//    //getNoOfDonors() test
//    std::cout << "getNoOfDonors() = " << aDonorList2.getNoOfDonors() << std::endl;
//
//    //getTotalDonations() test
//    std::cout << "getTotalDonations() = " << aDonorList2.getTotalDonations() << std::endl;
//
//    //isEmpty() test
//    std::cout << "isEmpty() of empty List = " << aDonorList.isEmpty() << std::endl;
//    std::cout << "isEmpty() of non empty List = " << aDonorList2.isEmpty() << std::endl;
//
//    //searchID() test
//    std::cout << "searchId() id in list = " << aDonorList2.searchID(85144828) << std::endl;
//    std::cout << "searchId() id not in list = " << aDonorList2.searchID(85112828) << std::endl;
//
//    //deleteDonor() test
//    std::cout << "test deleteDonor() delete last = " << std::endl;
//    aDonorList2.deleteDonor(39680388);
//    aDonorList2.printAllDonors();
//    std::cout << "test deleteDonor() delete first = " << std::endl;
//    aDonorList2.deleteDonor(85156739);
//    aDonorList2.printAllDonors();
//    std::cout << "test deleteDonor() delete middle = " << std::endl;
//    aDonorList2.deleteDonor(20158583);
//    aDonorList2.printAllDonors();
//
//    std::cout << "After deleting 3 donors, we should have 15: ";
//    std::cout << aDonorList2.getNoOfDonors() << std::endl;
//    //printAllDonations() test
//    aDonorList2.printAllDonations();
//
//
//    aDonorList2.clearList();

	return 0;
}
