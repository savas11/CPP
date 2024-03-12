#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
     std::cout << std::endl;
     Animal* animals[6];
     for (int i = 0; i < 3; ++i) 
     {
          animals[i] = new Dog();
     }
     std::cout << std::endl;
     for (int i = 3; i < 6; ++i) 
     {
     animals[i] = new Cat();
     }
     std::cout << std::endl;
     for (int i = 0; i < 6; ++i) 
     {
          delete animals[i];
     }
     std::cout << std::endl;
     std::cout << std::endl;
     std::cout << std::endl;
     std::cout << std::endl;
     Dog *a = new Dog();

     a->setIdea(0, "I have to sniff it");
     a->setIdea(1, "I'll bring your slippers. Maybe she'll give me food :D");
     a->setIdea(101, "It's the biggest fun to scare the people who pass by the house.");
     a->setIdea(77, "I love my master");
     std::cout << "The " << a->getType() << " a has the following ideas: \n";
     a->getIdeas();

     delete(a);
     //system("leaks brain");
     return(0);
 
}