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
int main()
{
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
}
