#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal() {
    std::cout << "Dog constructor called" << std::endl;
    Animal::type = "Dog";
    this->brain = new Brain();
    if(this->brain == NULL)
    {
        perror("Dog Brain allocation failed");
        std::cerr << "Exiting the process now." << std::endl;
        exit(1);
    }
}

Dog::Dog(const Dog& copy): Animal(){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
     std::cout << "Dog Assignation operator called" << std::endl;
    if(this == &copy)
        return(*this);
    this->type = copy.type;
    this->brain = new Brain();
    if(this->brain == NULL)
    {
        perror("Dog Brain allacation failed");
        std::cerr << "Exiting the process now." << std::endl;
        exit(1);
    }
    *this->brain = *copy.brain;
    return(*this);
}

void Dog::makeSound() const {
    std::cout << "Hav Hav Havvvvv" << std::endl;
}

Brain *Dog::getBrain() const {
    return brain;
}

void Dog::getIdeas(void)const {
    for(int i = 0; i < 100; i++)
        std::cout << "\tIdea " << i << " od the Dog is: \"" << this->brain->getIdeas(i) << "\"" << std::endl;
}

void Dog::setIdea(size_t i, std::string idea)
{
    this->brain->setIdea(i, idea);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;;
    delete brain;
}
