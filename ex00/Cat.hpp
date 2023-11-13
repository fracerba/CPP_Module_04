#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &Cat);
        ~Cat();
        Cat& operator=(const Cat &Cat);

        std::string getType(void) const;
        void setType(std::string);

        void makeSound(void) const;
};

#endif