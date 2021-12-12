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

#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"

class DonorType : public MemberType
{
public:
	DonorType();
	DonorType(const std::string& firstName,
				const std::string& lastName, 
				const int& memberNumber,
				const double& donationAmount);

	void setDonorInfo(const std::string& firstName, 
				const std::string& lastName, 
				const int& memberNumber, 
				const double& donationAmount);

	void setAmountDonated(const double& donationAmount);

    double getAmountDonated() const;

    void printDonor() const;
    void printDonation() const;

    ~DonorType();

    bool operator<(const DonorType& otherDonor) const;

private:
	double amount = 0;
};

#endif
