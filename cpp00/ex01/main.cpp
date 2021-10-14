#include <iostream>
#include "Phonebook.hpp"

int	main()
{
	std::string	str;
	Phonebook	phonebook;
	while (1)
	{
		std::cout << "Type one of this command ADD, SEARCH or EXIT: ";
		std::getline (std::cin, str);
		if (str == "ADD")
			phonebook.Add();
		else if (str == "SEARCH")
			phonebook.Search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "I don't know this command! :(" << std::endl;
	}
	return 0;
}