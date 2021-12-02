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
    Node() : donor(nullptr), ptrToNext(nullptr) {}
    
	Node(DonorType* theDonor, Node* newPtrToNext) :
        donor(theDonor), ptrToNext(newPtrToNext){}

    Node* getPtrToNext() const { return ptrToNext; }
    DonorType& getDonor() { return *donor; }

    void setDonor(DonorType* theDonor) { donor = theDonor; }
    void setPtrToNext(Node* newPtrToNext) { ptrToNext = newPtrToNext;}
    
	~Node()
	{ 
        delete donor;
        ptrToNext = nullptr;
    }
private:
    DonorType* donor;
    Node* ptrToNext;
};

class DonorList
{
public:
    DonorList() : first(nullptr), last(nullptr), count(0) {};
    
	DonorList(const DonorList&);
	
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

private:
    DonorList& operator=(const DonorList&);
    
	void copyCallingObjIsEmpty(const DonorList&);
    void copyObjectsSameLength(const DonorList&) const;
    void copyCallingObjLonger(const DonorList&);
    void copyCallingObjShorter(const DonorList&);
	
    Node* first;
    Node* last;
    int count;
    
	
};

#endif
