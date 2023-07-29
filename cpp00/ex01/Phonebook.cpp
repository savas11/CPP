#include "PhoneBook.hpp"

int main()
{
	Phonebook p;

	p.add = 0;
	p.i = 0;
	std::string tmp;

	while (-1)
	{
		std::cout << std::endl;
		std::cout << "WELCOME TO MY PHONEBOOK" << std::endl;
		std::cout << "                 copyright by osavas" << std::endl;
		std::cout << "_____________________________" << std::endl;
    std::cout << "| 1 : Add New Contact       |" << std::endl;
	std::cout << "| 2 : Search                |" << std::endl;
	std::cout << "| 3 : Exit                  |" << std::endl;
	std::cout << "|___________________________|" << std::endl;
	std::cout << "Please press 1 - 3 number : ";

		getline(std::cin, tmp);
		if(!tmp.compare("1"))
			p.ADD();
		else if (!tmp.compare("2"))
			p.SEARCH();
		else if (!tmp.compare("3"))
			exit(0);
	}
}
