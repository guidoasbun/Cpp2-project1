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
#include "set"
int main()
{
	std::cout << "********** MemberType Test **********" << std::endl;
	//Default Constructor
	MemberType member;
	//Overloaded Constructor
	MemberType memberTwo("Tom", "Brady", 9121);
	//setMemberInfo
	member.setMemberInfo("John", "McCarthy", 1231);
	//printName
	member.printName();
	memberTwo.printName();
	//printMemberInfo
	member.printMemberInfo();
	memberTwo.printMemberInfo();
	//printFirstName
	std::cout << member.getFirstName() << std::endl;
	//printLastName
	std::cout << member.getLastName() << std::endl;
	//getMembershipNo
	std::cout << member.getMembershipNo() << std::endl;


	std::cout << "********** DonorType Test **********" << std::endl;

	//Default Constructor
	DonorType aDonor;
	//Overloaded Constructor
	DonorType aDonor2("Michael", "Jordan", 23, 2222.22);
	//setDonorInfo
	aDonor.setDonorInfo("LeBron", "James", 6, 1111.11);
	//setAmountDonated
	aDonor2.setAmountDonated(3333.33);
	//getAmountDonated
	std::cout << aDonor.getAmountDonated() << std::endl;
	std::cout << aDonor2.getAmountDonated() << std::endl;
	//printDonor
	aDonor.printDonor();
	aDonor2.printDonor();
	//printDonation
	aDonor.printDonation();
	aDonor2.printDonation();


	std::cout << "********** Database Test **********" << std::endl;

	// getData test
	std::set<DonorType*> theSet =  getData();
	// checking if set returned is correct
	auto iter = theSet.begin();
	// checking values inside set
	(*iter)->printDonor();
	
	return 0;
}
