#include "Contact.hpp"

Contact::Contact() {
//	std::cout << "Contact was create!" << std::endl;
}

Contact::~Contact() {
//	std::cout << "Contact was deleted!" << std::endl;
}

void Contact::FirstName() {
	std::cout << "Type new first name: ";
	std::getline(std::cin, this->first_name);
}

void Contact::LastName() {
	std::cout << "Type new last name: ";
	std::getline(std::cin, this->last_name);
}

void Contact::NickName() {
	std::cout << "Type new nickname: ";
	std::getline(std::cin, this->nickname);
}

void Contact::PhoneNumber() {
	std::cout << "Type new phone number: ";
	std::getline(std::cin, this->phone_number);
}

void Contact::Secret() {
	std::cout << "Type your new secret: ";
	std::getline(std::cin, this->secret);
}

void CheckSize(std::string str)
{
	int	c;

	c = str.size();
	if (c >= 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << '|';
}

void Contact::PrintContact(int index){
	std::cout << std::setw(10) << index << '|';
	CheckSize(first_name);
	CheckSize(last_name);
	CheckSize(nickname);
	std::cout << std::endl;
}

int Contact::CheckEmpty() {
	if (first_name.empty() && last_name.empty() && nickname.empty() && phone_number.empty() && secret.empty()) {
		std::cout << "This contact is empty! You should add information about it or choose another contact!" << std::endl;
		return (1);
	}
	else {
		std::cout << "It's all information about this contact" << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
		std::cout << "Firstname: " << first_name << std::endl;
		std::cout << "Lastname :" << last_name << std::endl;
		std::cout << "Nickname: " << nickname << std::endl;
		std::cout << "Phone number: " << phone_number << std::endl;
		std::cout << "Secret: " << secret << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
	}
	return (0);
}




