#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &MateriaSource);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource &MateriaSource);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif