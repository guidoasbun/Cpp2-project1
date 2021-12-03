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

#include "DonorList.h"
#include "DonorType.h"
#include "Database.h"
#include "set"

using namespace std;

/*
Copy constructor
	Parameter: an object of the DonorList class
*/
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
	count = otherList.count;
}

/*
Copy assignment operator
	 Parameter: an object of the DonorList class
*/
DonorList& DonorList::operator=(const DonorList& otherList)
{
	if (&otherList != this)
	{
		if (first == nullptr)
			copyCallingObjIsEmpty(otherList);

		else if (count == otherList.count)
			copyObjectsSameLength(otherList);

		else if (count > otherList.count)
			copyCallingObjLonger(otherList);

		else
			copyCallingObjShorter(otherList);
		
		count = otherList.count;
	}
	else
	{
		cerr << "\nAttempted assignment to itself." << endl;
	}

	return *this;
}

/*
 Function copyCallingObjIsEmpty
	Parameter: an object of the DonorList class
	Case: The calling list is empty.
	
	Use the addDonor() function to start copying data from the 
	parameter list.
*/
void DonorList::copyCallingObjIsEmpty(const DonorList& otherList)
{
	Node* curParam = otherList.first->getPtrToNext();
	
	first = new Node(otherList.first->getDonor(), nullptr);
	Node* curCall  = first;

	while (curParam != nullptr)
	{
		curCall->setPtrToNext(new Node(curParam->getDonor(), nullptr));
		curParam = curParam->getPtrToNext();
		curCall  = curCall->getPtrToNext();
	}
	last  = curCall;
	count = otherList.count;
}

/*
 Function copyObjectsSameLength
	Parameter: an object of the DonorList class
	Case: The calling object and the parameter object have the same
	number of nodes.

	Since all the nodes are already there, you simply need to copy the
	data from the parameter object into the calling object, without
	deleting or creating any nodes.
*/
void DonorList::copyObjectsSameLength(const DonorList& otherList) const
{
	Node* curParam = otherList.first;
	Node* curCall  = first;

	while (curParam != nullptr)
	{
		curCall->setDonor(curParam->getDonor());
		curParam = curParam->getPtrToNext();
		curCall  = curCall->getPtrToNext();
	}
}

/*
 Function copyCallingObjLonger
	Parameter: an object of the DonorList class
	Case: The calling object has more nodes than the parameter object.
	
	Copy the data from the parameter object into the calling object,
	and then delete one by one the additional nodes left in the
	calling object.
*/
void DonorList::copyCallingObjLonger(const DonorList& otherList)
{
	Node* curParam = otherList.first;
	Node* curCall  = first;
	Node* temp = nullptr;

	while (curParam->getPtrToNext() != nullptr)
	{
		curCall->setDonor(curParam->getDonor());
		curParam = curParam->getPtrToNext();
		curCall  = curCall->getPtrToNext();
	}

	curCall->setDonor(curParam->getDonor());
	last = curCall;
	curCall = curCall->getPtrToNext();

	while (curCall != nullptr)
	{
		temp = curCall;
		delete curCall;
		curCall = temp->getPtrToNext();
	}
	last->setPtrToNext(nullptr);

	count = otherList.count;
}

/*
 Function copyCallingObjShorter
	Parameter: an object of the DonorList class
	Case: The calling object has fewer nodes than the parameter object
	
	Copy the data from the parameter object into the calling object,
	and then create additional nodes. Use the addDonor() function to
	copy the rest of the parameter list.
*/
void DonorList::copyCallingObjShorter(const DonorList& otherList)
{
	Node* curParam = otherList.first;
	Node* curCall  = first;

	while (curParam != nullptr)
	{
		curCall->setDonor(curParam->getDonor());
		curParam = curParam->getPtrToNext();
		
		if (curCall->getPtrToNext() == nullptr && curParam != nullptr)
		{
			DonorType donor = curParam->getDonor();
			addDonor(donor.getFirstName(),donor.getLastName(), 
				 donor.getMembershipNo(),donor.getAmountDonated());
		}
		curCall = curCall->getPtrToNext();
	}		
	count = otherList.count;
}
