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

#include <iostream>
#include "MemberType.h"
#include "DonorType.h"
#include "Database.h"
#include "DonorList.h"
#include "Interface.h"

#include "set"
using namespace std;

int main()
{
	DonorList aDonorList;
	aDonorList.createList();
	if (!aDonorList.isEmpty())
	{
		displayMenu();
		processSelection(aDonorList);
	}

	return 0;
}
