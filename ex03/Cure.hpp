#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &Cure);
        ~Cure();
        Cure& operator=(const Cure &Cure);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif