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

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include<string>

class MemberType
{
	public:
		MemberType() : 
			firstName("N/A"), lastName("N/A"), memberID(0) {};
		MemberType(const std::string& first, const std::string& last, int id) :
			firstName(first), lastName(last), memberID(id) {};
		
		void setMemberInfo(const std::string&, const std::string&, int);

		const std::string& getFirstName() const;
		const std::string& getLastName() const; 
		const int& getMembershipNo() const;

		void printName() const;
		void printMemberInfo() const;

		~MemberType();
		
	protected:
		std::string firstName;
		std::string lastName;
		int  memberID;
};

#endif
