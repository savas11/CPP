#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
        const Animal* a = new Dog();
        std::cout << a->getType();
        a->makeSound();
        delete a;
}