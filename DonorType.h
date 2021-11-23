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
#ifndef DONORTYPE_H
#define DONORTYPE_H

#include <iostream>
#include "MemberType.h"

class DonorType : public MemberType
{
public:
    DonorType();

    DonorType(const std::string& firstName, const std::string& lastName, const int& memberNumber, const double& donationAmount);

    void setDonorInfo(const std::string& firstName, const std::string& lastName, const int& memberNumber, const double& donationAmount);

    void setAmountDonated(const double& donationAmount);

    double getAmountDonated();

    void printDonor();

    void printDonation();

private:
    double amount;
};


#endif
