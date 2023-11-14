#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &Ice);
        ~Ice();
        Ice& operator=(const Ice &Ice);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif