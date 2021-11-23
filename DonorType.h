#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"



class DonorType : public MemberType
{
public:

	DonorType() :
		donationAmount(0) {};


	MemberType::DonorType(const std::string& first, const std::string& last, int id, double moneyGiven) :
		firstName(first), lastName(last), memberID(id), donationAmount(moneyGiven) {};

	void setDonorInfo(const std::string&, const std::string&, int, double);

	double setAmountDonated(&double);

	void printDonor();

	void printDonation();




};




#endif // !DONORTYPE_H
