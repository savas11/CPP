#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->_type = "WrongCat";
    this->_brain = new Brain();
    if(this->_brain == NULL)
    {
        perror("WrongCat Brain allaWrongCation failed");
        std::cerr << "Exiting the process now." << std::endl;
        exit(1);
    }
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal()
{
    *this = copy;
    std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    delete(this->_brain);
    std::cout << "WrongCat Deconstructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if(this == &src)
        return(*this);
    this->_type = src._type;
    this->_brain = new Brain();
    if(this->_brain == NULL)
    {
        perror("WrongCat Brain alloWrongCation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
    }
    *this->_brain = *src._brain;
    return(*this);
}

void WrongCat::makeSound(void)const
{
    std::cout << this->getType() << " says: WrongCat Sound" << std::endl;
}

void WrongCat::getIdeas(void)const{
    for(int i = 0; i < 100; i++)
        std::cout << "\tIdea " << i << " of the WrongCat is: \"" << this->_brain->getIdeas(i) << "\"" << std::endl;
}

void WrongCat::setIdea(size_t i, std::string idea)
{
    this->_brain->setIdea(i, idea);
}