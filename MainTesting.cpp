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
#include <iostream>
#include "MemberType.h"
#include "DonorType.h"
#include "Database.h"
#include "DonorList.h"
#include "Interface.h"
#include "set"

int main() {

	DonorList list1;
	list1.createList();
	std::cout << "List 1:\n";
	std::cout << "Total donors: " << list1.getNoOfDonors() << std::endl;
	list1.printAllDonors();
	std::cout << std::endl << "\n********** list2 Test **********\n" << std::endl;
	DonorList list2 = list1;
	std::cout << "Total donors: " << list2.getNoOfDonors() << std::endl;
	std::cout << "List 2:\n";
	list2.printAllDonors();

	std::cout << std::endl << "\n********** Clearing list 2 **********\n" << std::endl;
	list2.clearList();

	std::cout << "List 1:\n";
	std::cout << "Total donors: " << list1.getNoOfDonors() << std::endl;
	list1.printAllDonors();
	std::cout << std::endl << "\n********** list2 Test **********\n" << std::endl;
	std::cout << "List 2:\n";
	std::cout << "Total donors: " << list2.getNoOfDonors() << std::endl;
	
	list2.printAllDonors();
	return 0;
}

/* DonorList aDonorList;
	aDonorList.createList();
	if (!aDonorList.isEmpty()) {
		displayMenu();
		processSelection(aDonorList);
	}
	aDonorList.clearList();

	return 0; */

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

//	return 0;
