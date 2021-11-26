/*
	Noble Team
	Noble, Trevor
	Derderian, Harry
	Kaboli, Seena
	Asbun, Guido
	Kim, Yeomyung
	November 25, 2021
	CS A250
	Project 1
*/

#include "Database.h"
using namespace std;
set<DonorType> getData()
{
	set<DonorType> allDonors = {
	DonorType {"Maria", "Curie", 12345678, 10000.0},
	DonorType {"Caroline", "Herschel", 67017117, 20000.0},
	DonorType {"Joseph", "Kruskal", 56111585, 3000.0},
	DonorType {"Jane", "Goodall", 85156739, 2000.0},
	DonorType {"Alessandra", "Giliani", 52617296, 5000.0},
	DonorType {"Maria", "Agnesi", 39680388, 30000.0},
	DonorType {"Edsger", "Dijkstra", 80056721, 8000.0},
	DonorType {"Peter", "Landin", 41775096, 3500.0},
	DonorType {"Ada", "Lovelace", 12341234, 10000.0},
	DonorType {"Niels", "Bohr", 37000712, 25000.0},
	DonorType {"Maria", "Mitchell", 16248232, 6000.0},
	DonorType {"Colette", "Rolland",63380154, 5000.0},
	DonorType {"Charles", "Darwin", 71448063, 15000.0},
	DonorType {"Alicia", "Stott", 47744231, 10000.0},
	DonorType {"Leonardo", "DaVinci", 14122419, 5000.0},
	DonorType {"Nikola", "Tesla", 20158583, 5000.0},
	DonorType {"Sophie", "Germain", 85144828, 12000.0},
	DonorType {"Alan", "Turing", 87654321, 20000.0},
	};
	return allDonors;
}
