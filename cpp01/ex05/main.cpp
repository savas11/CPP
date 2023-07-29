#include "Harl.hpp"

int main(int ac,char** av)
{
    if(ac == 2)
    {
        Harl harl;
        std::string arg(av[1]);
        harl.complain(arg);
    }
    return(0);
}