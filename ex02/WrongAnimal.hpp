#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &WrongAnimal);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &WrongAnimal);

        std::string getType(void) const;
        void setType(std::string);

        void makeSound(void) const;
};

#endif