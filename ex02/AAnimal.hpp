#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &Animal);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal &Animal);

        std::string getType(void) const;
        void setType(std::string);

        virtual void makeSound(void) const = 0;
};

#endif