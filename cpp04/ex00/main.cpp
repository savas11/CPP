#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        j->makeSound(); 
        i->makeSound();
        meta->makeSound();
        
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "\n";
    std::cout << "\n";
    // WrongAnimal
    {
        const WrongAnimal* wmeta = new WrongAnimal();
        const WrongAnimal* wcat = new WrongCat();

        std::cout << wmeta->getType() << " " << std::endl;
        std::cout << wcat->getType() << " " << std::endl;
        wcat->makeSound();
        wmeta->makeSound();
        delete wmeta;
        delete wcat;            
    }
    return 0;
}