#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        Dog *a = new Dog();
        // Cat *a = new Cat();

        a->setIdea(0, "I have to sniff it");
        a->setIdea(1, "I have to pee on it");
        a->setIdea(101, "some shit");

        std::cout << "The " << a->getType() << " a has the following ideas: \n";
        a->getIdeas();
        std::cout << std::endl;
        delete(a);

//        const Animal* j = new Dog();
//        j->setIdea(1, "AMAN Aman nerelere geldik");
//        //const Animal* i = new Cat();
//        std::cout << j->getIdeas();
//
//        delete j;
//        //delete i;
    }
    return 0;
}
