#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern RandomIntern;
		Form* Form;
		Bureaucrat b1("b1", 1);
		std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
		Form = RandomIntern.makeForm("ShrubberyCreationForm", "shrubbery");
		std::cout << Form->getName();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}