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
#include "MemberType.h"
#include <iostream>
void MemberType::setMemberInfo(const std::string& newFirst, 
							   const std::string& newLast, int newID)
{
	firstName = newFirst;
	lastName = newLast;
	memberID = newID;
}
const std::string& MemberType::getFirstName() const
{
	return firstName;
}

const std::string& MemberType::getLastName() const
{
	return lastName;
}

const int& MemberType::getMembershipNo() const
{
	return memberID;
}

void MemberType::printName() const
{
	std::cout << firstName << " " 
			<< lastName << std::endl;
}

void MemberType::printMemberInfo() const
{
	std::cout << memberID << " - " << firstName 
		<< " " << lastName << std::endl;
}

MemberType::~MemberType()
{
	// UNSURE IF ANYTHING NEEDS TO BE DELETED.
}
