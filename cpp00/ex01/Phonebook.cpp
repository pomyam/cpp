#include "Phonebook.hpp"

Phonebook::Phonebook() {
	std::cout << "Phonebook was opened!" << std::endl;
	index = 0;
	count = 0;
}

Phonebook::~Phonebook() {
	std::cout << "Phonebook was closed!" << std::endl;
}

void Phonebook::Add() {
	if (index == 8) {
		index = 0;
	}
	contact[index].FirstName();
	contact[index].LastName();
	contact[index].NickName();
	contact[index].PhoneNumber();
	contact[index].Secret();
	this->index++;
	if (count != 8)
		count++;
	std::cout << "It was add in phonebook!" << std::endl;
}

void Phonebook::Search() {
	std::string str;

	if (index == 0)
	{
		std::cout << "You don't type anything before!" << std::endl;
		return ;
	}
	std::cout << std::setw(11) << "index|" << std::setw(11) << "firstname|"
		<< std::setw(11) << "lastname|" << std::setw(11) << "nickname" << std::endl;
	std::cout << "---------- ---------- ---------- -----------" << std::endl;
	for (int i = 0; i < count; i++)
		contact[i].PrintContact(i);
	while (1)
	{
		std::cout << "Select necessary index: ";
		std::getline(std::cin, str);
		if ((str[0] - '0' > 7) || str.size() != 1)
		{
			std::cout << "Error index! ";
			continue;
		}
		else if (contact[str[0] - '0'].CheckEmpty() == 1)
			continue;
		else
			break;
	}
}

