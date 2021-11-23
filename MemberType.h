#pragma once
#include<string>

class MemberType
{
	public:
		// SHOULD WE MAKE THE CONSTRUCTORS IN CPP ONLY OR IS THIS FINE?
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
		
	private:
		std::string firstName;
		std::string lastName;
		int  memberID;
};
