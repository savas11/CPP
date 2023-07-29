#include <iostream>
#include <string>

int main()
{
std::string a = "HI THIS IS BRAIN";

std::string *stringPTR = &a;
std::string &stringREF = a;

std::cout << "              START" << std::endl;
												std::cout << "--------------" << std::endl;

    std::cout << "Str memory adress:  ";
    std::cout << &a << std::endl;

	std::cout << "stringPTR memory:   ";
	std::cout << &stringPTR << std::endl;
												std::cout << "--------------" << std::endl;

    std::cout << "stringREF memory:    ";
    std::cout << &stringREF << std::endl;

    std::cout << "Str:   		     ";
    std::cout << &a << std::endl;
												std::cout << "--------------" << std::endl;    

    std::cout << "stringPTR:   ";
    std::cout << *stringPTR << std::endl;

    std::cout << "stringREF:   ";
    std::cout << stringREF << std::endl;

												std::cout << "--------------" << std::endl;
    std::cout << "              FINISH";
}
