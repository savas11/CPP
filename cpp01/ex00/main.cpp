#include "Zombie.hpp"

int main()
{
    Zombie* a = newZombie("Foo");
    a->announce();
    randomChump("Cpp");
    delete a;
}
