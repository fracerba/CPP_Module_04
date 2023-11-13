#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &WrongCat);
        ~WrongCat();
        WrongCat& operator=(const WrongCat &WrongCat);

        std::string getType(void) const;
        void setType(std::string);

        void makeSound(void) const;
};

#endif