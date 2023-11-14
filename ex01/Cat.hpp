#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &Cat);
        ~Cat();
        Cat& operator=(const Cat &Cat);

        std::string getType(void) const;
        void setType(std::string);

        virtual void makeSound(void) const;
};

#endif