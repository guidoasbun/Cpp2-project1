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

#ifndef DONORLIST_H
#define DONORLIST_H

#include"DonorType.h"

class Node
{
public:
	Node() : donor(), ptrToNext(nullptr) {}

	Node(const DonorType& theDonor, Node* newPtrToNext) :
		donor(theDonor), ptrToNext(newPtrToNext){}

	Node* getPtrToNext() const { return ptrToNext; }
	DonorType& getDonor() { return donor; }

	void setDonor(const DonorType& theDonor) { donor = theDonor; }
	void setPtrToNext(Node* newPtrToNext) { ptrToNext = newPtrToNext;}

	~Node() {}

private:
	DonorType donor;
	Node* ptrToNext;
};

class DonorList
{
public:
	DonorList() : first(nullptr), last(nullptr), count(0) {};

	void addDonor(const std::string& firstName,
		const std::string& lastName, int memberNum, int donation);

	void createList();

	int getNoOfDonors() const;
	double getTotalDonations() const;

	bool isEmpty() const;
	bool searchID(int memberID) const;

	void deleteDonor(int memberID);

	void printAllDonors() const;
	void printAllDonations() const;

	void clearList();
	~DonorList();
	
	DonorList(const DonorList&);
	DonorList& operator=(const DonorList&);

private:
	void copyCallingObjIsEmpty(const DonorList& otherList);
	void copyObjectsSameLength(const DonorList& otherList) const;
	void copyCallingObjLonger(const DonorList& otherList);
	void copyCallingObjShorter(const DonorList& otherList);
	
    Node* first;
    Node* last;
    int count;
    
	
};

#endif
