#ifndef Cat_HPP
#define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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

        void makeSound(void) const;
};

#endif