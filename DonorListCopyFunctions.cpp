#include "DonorList.h"
#include "DonorType.h"
#include "Database.h"
#include "set"

using namespace std;

DonorList::DonorList(const DonorList& otherList)
{
	first = nullptr;
	last = first;
	count = 0;
	Node* current = otherList.first;
	while (current != nullptr)
	{
		DonorType donor = current->getDonor();
		addDonor(donor.getFirstName(), donor.getLastName(), 
				 donor.getMembershipNo(), donor.getAmountDonated() );
		current = current->getPtrToNext();
	}
	/*
	Using the function addDonor, copy each donor from the parameter list into the calling list.
	*/
}
