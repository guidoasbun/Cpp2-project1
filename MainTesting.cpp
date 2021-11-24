/*
	NobleTeam

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

int main()
{
    std::cout << "********** MemberType Test **********" << std::endl;

	MemberType member;
	member.printName();
	member.printMemberInfo();

	member.setMemberInfo("Harry", "Derderian", 0000);
	member.printName();
	member.printMemberInfo();

	std::cout << member.getFirstName() << std::endl;
	std::cout << member.getLastName() << std::endl;
	std::cout << member.getMembershipNo() << std::endl;

	MemberType memberTwo("Tom", "Brady", 0001);
	memberTwo.printMemberInfo();

    std::cout <<  "********** DonorType Test **********" << std::endl;

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

    return 0;
}
