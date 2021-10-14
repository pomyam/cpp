#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook {
private:
	Contact	contact[8];
	int 	index;
	int 	count;
public:
	Phonebook();
	~Phonebook();

	void Add();
	void Search();
};

#endif
