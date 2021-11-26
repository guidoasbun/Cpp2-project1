#ifndef DATABASE_H
#define DATABASE_H_H
#include <set>
#include "DonorType.h"

/* If the set is returned by ref the program will crash
*  only return the set by value, unless you can find a way to store it in the heap.
* 
*/
const std::set<DonorType*> getData()
{
	/* use new operator to store the donors in the heap
	* so their life time outlives the function.
	* important note make sure to create a set based on the set returned here.
	* if we don't do that we will have memory leaks within the heap 
	* (we will lose the pointers to the donors)
	*/
	DonorType* aDonor2 = new DonorType("Harry", "Derderian", 20, 750.25);
	std::set<DonorType*> donors;
	donors.insert(aDonor2);
	return donors;
}
#endif
