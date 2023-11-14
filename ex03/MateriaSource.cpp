#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource Default constructor called\n";
    for(int i = 0; i< 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &Char)
{
    std::cout<<"MateriaSource Copy constructor called\n";
    for(int i = 0; i < 4; i++)
        this->materias[i] = Char.materias[i];
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->materias[i])
            delete this->materias[i];
    }
    std::cout<<"MateriaSource Destructor called\n";
}

MateriaSource& MateriaSource::operator=(const MateriaSource &Char)
{
    std::cout<<"MateriaSource Copy assignment operator called\n";
    for(int i = 0; i < 4; i++)
        this->materias[i] = Char.materias[i];
    return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (this->materias[i] && i < 4)
        i++;
    if (i == 4)
    {
        std::cout<<"Materia Source slots full!\n";
        return ;
    }
    this->materias[i] = m;
}
 
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->materias[i]->getType() == type)
            return(this->materias[i]->clone());
    }
    std::cout<<"Unknown Materia!\n";
    return (NULL);
}

