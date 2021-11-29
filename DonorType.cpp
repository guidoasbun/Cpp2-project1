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

#include "DonorType.h"
#include <iostream>
#include <iomanip>

using namespace std;



DonorType::DonorType()
{
    amount = 0;
}

DonorType::DonorType(const std::string& firstName, const std::string& lastName, const int& memberNumber,
    const double& donationAmount) : MemberType(firstName, lastName, memberNumber)
{
    amount = donationAmount;
}

void DonorType::setDonorInfo(const std::string& firstName, const std::string& lastName, const int& memberNumber, const double& donationAmount)
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
    cout << firstName << ", " << lastName << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Donation Amount: $" << amount << endl;
}

bool DonorType::operator<(const DonorType& otherDonor) const
{
    if (amount == otherDonor.amount)
        return  return memberID < otherDonor.memberID;
   
   else
        return  amount < otherDonor.amount;
}
