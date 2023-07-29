#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *a = zombieHorde(N , "ZombieFamily");
    delete[] a;
}
