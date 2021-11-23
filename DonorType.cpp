#include "DonorType.h"
#include <iostream>
#include <iomanip>

using namespace std;
DonorType::DonorType()
{
    amount = 0;
}

DonorType::DonorType(const std::string &firstName, const std::string &lastName, const int &memberNumber,
                     const double &donationAmount) : MemberType(firstName, lastName, memberNumber)
                     {
                        amount = donationAmount;
                     }

void DonorType::setDonorInfo(const std::string& firstName, const std::string& lastName, const int& memberNumber, const double& donationAmount)
{
    MemberType::setMemberInfo(firstName, lastName, memberNumber);
    amount = donationAmount;
}

void DonorType::setAmountDonated(const double &donationAmount)
{
    amount = donationAmount;
}

double DonorType::getAmountDonated()
{
    return amount;
}

void DonorType::printDonor()
{
    MemberType::printMemberInfo();
}

void DonorType::printDonation()
{
    cout << getFirstName() << ", " << getLastName() << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Donation Amount: $" << amount << endl;
}
