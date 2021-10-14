#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

public:
	Contact();
	~Contact();
	void FirstName(void);
	void LastName(void);
	void NickName(void);
	void PhoneNumber(void);
	void Secret(void);
	void PrintContact(int index);
	int CheckEmpty();
};

#endif
