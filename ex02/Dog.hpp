#ifndef Dog_HPP
#define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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

        virtual void makeSound(void) const;
};

#endif