#ifndef Character_HPP
#define Character_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* slots[4];
        AMateria* drops;
    public:
        Character();
        Character(const Character &Character);
        ~Character();
        Character& operator=(const Character &Character);

        Character(std::string const & name);

        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif