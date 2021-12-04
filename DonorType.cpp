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

#include "DonorType.h"

#include <iostream>
#include <iomanip>

using namespace std;

DonorType::DonorType()
{
    amount = 0;
}

DonorType::DonorType(const string& firstName, const string& lastName,
	const int& memberNumber, const double& donationAmount) : 
	MemberType(firstName, lastName, memberNumber)
{
    amount = donationAmount;
}

void DonorType::setDonorInfo(const string& firstName,
	const string& lastName, const int& memberNumber,
	const double& donationAmount)
{
    MemberType::setMemberInfo(firstName, lastName, memberNumber);
    amount = donationAmount;
}

void DonorType::setAmountDonated(const double& donationAmount)
{
    amount = donationAmount;
}

double DonorType::getAmountDonated() const
{
    return amount;
}

void DonorType::printDonor() const
{
    MemberType::printMemberInfo();
}

void DonorType::printDonation() const
{
	cout << this->getFirstName() << ", " << this->getLastName() << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Donation Amount: $" << amount << endl;
}

bool DonorType::operator<(const DonorType& otherDonor) const
{
	if (amount == otherDonor.amount)
		return  this->getMembershipNo() < otherDonor.getMembershipNo();
	else
		return  amount < otherDonor.amount;
}

DonorType::~DonorType() { }
