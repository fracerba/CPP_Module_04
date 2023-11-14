#ifndef AMateria_HPP
#define AMateria_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const AMateria &AMateria);
        virtual ~AMateria();
        AMateria& operator=(const AMateria &AMateria);

        AMateria(std::string const & type);

        std::string const& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif