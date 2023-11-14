#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &Dog);
        ~Dog();
        Dog& operator=(const Dog &Dog);

        std::string getType(void) const;
        void setType(std::string);

        virtual void makeSound(void) const;
};

#endif