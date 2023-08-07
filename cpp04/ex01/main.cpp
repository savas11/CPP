#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        //const Animal* i = new Cat();
        std::cout << j->get-Type>getBrain()->getIdeas();

        delete j;
        //delete i;
    }
    system("leaks Brain");
    return 0;
}
