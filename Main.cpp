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
#include "Interface.h"

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
