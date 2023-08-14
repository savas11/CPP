#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "************TEST1***********" << std::endl;
	try
	{
		Bureaucrat b1("b1", 20);
		std::cout << b1 << std::endl;
		Form f1("f1", 70, 80);
		b1.signForm(f1);
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "************TEST2***********" << std::endl;
	try
	{
		Bureaucrat b2("b2", 80);
		std::cout << b2 << std::endl;
		Form f2("f2", 50, 70);
		b2.signForm(f2);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}