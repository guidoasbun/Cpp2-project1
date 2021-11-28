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

#include "DonorList.h"
#include "DonorType.h"
#include "Database.h"
#include "set"

using namespace std;

void DonorList::addDonor(const std::string &firstName, const std::string &lastName, int memberNum, int donation)
{
    DonorType *newDonor = new DonorType(firstName, lastName, memberNum, donation);
    Node* newNode = new Node(newDonor, nullptr);
    if (first == nullptr)
    {
        first = newNode;
        last = first;
    }
    else
    {
        Node* current = first;
        while (current->getPtrToNext() != nullptr)
            current = current->getPtrToNext();
        current->setPtrToNext(newNode);
        last = current;
    }
    ++count;
}

void DonorList::createList()
{

}

int DonorList::getNoOfDonors() const
{
    return count;
}

double DonorList::getTotalDonations() const
{
    return 1.1;
}

bool DonorList::isEmpty() const
{
    return !count;
}

bool DonorList::searchID(int memberID) const
{
    return true;
}

void DonorList::deleteDonor(int memberID)
{

}

void DonorList::printAllDonors() const
{
    if (first == nullptr)
        cerr << "Donor list is empty";
    else
    {
        Node* current = first;
        while (current != nullptr)
        {
            current->getDonor().printMemberInfo();
            current = current->getPtrToNext();
        }
    }
}

void DonorList::printAllDonations() const
{
    if (first == nullptr)
        cerr << "Donor list is empty";
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
