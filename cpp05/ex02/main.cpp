#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try{
		Bureaucrat b1("b1", 10);
		std::cout << "===========ShrubberyCreationForm Success Test===========" << std::endl;
		ShrubberyCreationForm s1("b1");
		std::cout << b1 << std::endl;
		s1.beSigned(b1);
		b1.signForm(s1);
		b1.executeForm(s1);
		std::cout << s1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "============ShrubberyCreationForm Fail Test============" << std::endl;
		Bureaucrat b2("b2", 149);
		ShrubberyCreationForm s2("b2");
		std::cout << b2 << std::endl;
		s2.beSigned(b2);
		b2.signForm(s2);
		b2.executeForm(s2);
		std::cout << s2 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;
	try{
		Bureaucrat b3("b3", 40);
		std::cout << "============RobotomyRequestForm Success Test============" << std::endl;
		std::cout << b3 << std::endl;
		RobotomyRequestForm r1("b3");
		r1.beSigned(b3);
		b3.signForm(r1);
		b3.executeForm(r1);
		std::cout << r1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat b4("b4", 82);
		std::cout << "============RobotomyRequestForm Fail Test============" << std::endl;
		std::cout << b4 << std::endl;
		RobotomyRequestForm r1("b4");
		r1.beSigned(b4);
		b4.signForm(r1);
		b4.executeForm(r1);
		std::cout << r1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;
	try{
		Bureaucrat b5("b5", 1);
		std::cout << "============PresidentialPardonForm Success Test============" << std::endl;
		std::cout << b5 << std::endl;
		PresidentialPardonForm p2("Presidential");
		p2.beSigned(b5);
		b5.signForm(p2);
		b5.executeForm(p2);
		std::cout << p2 << std::endl;
		}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
		std::cout << std::endl;

	try{
		Bureaucrat b6("b6", 30);
		std::cout << "============PresidentialPardonForm Fail Test============" << std::endl;
		std::cout << b6 << std::endl;
		PresidentialPardonForm p2("Presidential");
		p2.beSigned(b6);
		b6.signForm(p2);
		b6.executeForm(p2);
		std::cout << p2 << std::endl;
		}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}