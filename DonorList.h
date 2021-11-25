#pragma once
#ifndef DONORLIST_H
#define DONORLIST_H
#include"DonorType.h"
/*
	Feel free to make any edits or changes
	if you think it'll improve the code!
*/

class Node
{
public:
	Node() : 
		donor(nullptr), ptrToNext(nullptr) {}
	Node(DonorType* theDonor, Node* newPtrToNext) :
		donor(theDonor), ptrToNext(newPtrToNext){}

	Node* getPtrToNext() const { return ptrToNext; }
	DonorType& getDonor() { return *donor;}
	void setData(DonorType* theDonor) { donor = theDonor; }
	void setPtrToNext(Node* newPtrToNext) { ptrToNext = newPtrToNext; }
	~Node() {}
	private:
		DonorType* donor;
		Node* ptrToNext; 
};

class DonorList
{
public:
	DonorList() :
		first(nullptr), last(nullptr), count(0) {};

	void addDonor(const std::string& firstName,
		const std::string& lastName, int memberNum);

	void createList();

	int getNoOfDonors() const;

	double getTotalDonations() const;

	bool isEmpty() const;

	bool searchID(int memberID) const;

	void deleteDonor(int memberID);

	void printAllDonors() const;

	void clearList();

	~DonorList() {}
private:
	Node* first;
	Node* last;
	int count;
};
#endif
