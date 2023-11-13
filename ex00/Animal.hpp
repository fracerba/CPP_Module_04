#ifndef Animal_HPP
#define Animal_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &Animal);
        virtual ~Animal();
        Animal& operator=(const Animal &Animal);

        std::string getType(void) const;
        void setType(std::string);

        virtual void makeSound(void) const;
};

#endif