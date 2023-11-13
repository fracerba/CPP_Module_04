#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &Dog);
        ~Dog();
        Dog& operator=(const Dog &Dog);

        std::string getType(void) const;
        void setType(std::string);

        void makeSound(void) const;
};

#endif