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

#include <iostream>
#include "set"

using namespace std;

void DonorList::addDonor(const std::string &firstName,
	const std::string &lastName, int memberNum, double donation)
{
    DonorType *newDonor = new DonorType(firstName, lastName,
		memberNum, donation);
    Node* newNode = new Node(*newDonor, nullptr);
    if (first == nullptr)
    {
        first = newNode;
        last = first;
    }
    else
    {
        if (first->getDonor().getMembershipNo() > memberNum)
        {
            newNode->setPtrToNext(first);
            first = newNode;
        }
        else {
            Node* temp = first->getPtrToNext();
            Node* trail = first;
            while (temp != nullptr && temp->getDonor().getMembershipNo() < memberNum)
            {
                trail = temp;
                temp = temp->getPtrToNext();
            }
            newNode->setPtrToNext(temp);
            trail->setPtrToNext(newNode);
        }
    }
    ++count;
}

void DonorList::createList()
{
    set<DonorType> theSet =  getData();

	if (theSet.empty())
		cerr << "\nDatabase has no data.\n";
	else
	{
		auto iter = theSet.begin();
		for (const auto& elem : theSet)
            addDonor(elem.getFirstName(), elem.getLastName(), elem.getMembershipNo(), elem.getAmountDonated());
    }
}

int DonorList::getNoOfDonors() const
{
    return count;
}

double DonorList::getTotalDonations() const
{
    //Assumption, the list is not empty
    Node* current = first;
    double amountDonated = 0.0;
    while (current != nullptr)
    {
        amountDonated += current->getDonor().getAmountDonated();
        current = current->getPtrToNext();
    }
    return amountDonated;
}

bool DonorList::isEmpty() const
{
    return !count;
}

bool DonorList::searchID(int memberID) const
{
    //Assumption, the list is not empty
    Node* current = first;
    while (current != nullptr)
    {
        if (current->getDonor().getMembershipNo() == memberID)
            return true;
        current = current->getPtrToNext();
    }
    return false;
}

void DonorList::deleteDonor(int memberID)
{
    if (first->getDonor().getMembershipNo() == memberID)
    {
        Node* current = first;
        first = first->getPtrToNext();
        delete current;
        current = nullptr;
        --count;
    }
    else
    {
        bool found = false;
        Node* trailCurrent = first;
        Node* current = first->getPtrToNext();

        while (!found && current != nullptr)
        {
            if (current->getDonor().getMembershipNo() == memberID)
            {
                trailCurrent->setPtrToNext(current->getPtrToNext());
                if (last->getDonor().getMembershipNo() == memberID)
                    last = trailCurrent;
                delete current;
                current = nullptr;
                --count;
                found = true;
            }
            else
            {
                trailCurrent = current;
                current = current->getPtrToNext();
            }
        }
        if (!found)
            cout << "Donor is not on the list";
    }
}

void DonorList::printAllDonors() const
{
        Node* current = first;
        while (current != nullptr)
        {
            current->getDonor().printMemberInfo();
            current = current->getPtrToNext();
        }
}

void DonorList::printAllDonations() const
{
    if (first == nullptr)
        cout << "Donor list is empty";
    else
    {
        Node* current = first;
        while (current != nullptr)
        {
            current->getDonor().printDonation();
            current = current->getPtrToNext();
        }
    }
}

void DonorList::clearList()
{
    Node* temp = first;

    while (first != nullptr)
    {
        first = first->getPtrToNext();
        delete temp;
        temp = first;
    }

    last = nullptr;
    count = 0;
}

DonorList::~DonorList()
{
    clearList();
}
