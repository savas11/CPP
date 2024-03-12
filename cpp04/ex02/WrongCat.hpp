#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat: public WrongAnimal {
    private:
        Brain* _brain;
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat &operator=(const WrongCat&);

        void makeSound(void)const;

        void getIdeas(void)const;

        void setIdea(size_t, std::string);
};