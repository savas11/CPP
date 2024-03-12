#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
    Animal* animal1 = new Cat();
    WrongAnimal *animal2 = new WrongCat();
    std::cout << std::endl;

    animal1->makeSound();
    animal2->makeSound(); 

    std::cout << std::endl;
    delete animal1; 
    delete animal2;

    //system("leaks abstract");
}