#include "Bureaucrat.hpp"

int main(void)
{	

	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);
	Bureaucrat b3("b3", 15);
	b3 = b2;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << std::endl;

	try
	{

		std::cout << "************TEST1***********" << std::endl;
		b1.increment();

		std::cout << b1 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "***********TEST2************" << std::endl;
		b2.increment();
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		std::cout << "************TEST3***********" << std::endl;
		b3.decrement();
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}