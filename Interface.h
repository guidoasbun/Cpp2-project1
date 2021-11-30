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

#ifndef INTERFACE_H
#define INTERFACE_H

#include "DonorList.h"

void displayMenu();

void processSelection(DonorList& aDonorList);

void addDonor(DonorList& aDonorList);

void deleteDonor(DonorList& aDonorList);

void printAllDonors(DonorList& aDonorList);


#endif //CPP2_PROJECT1_INTERFACE_H
