#include "Cure.hpp"

Cure::Cure()
{
    std::cout<<"Cure Default constructor called\n";
    this->type = "cure";
}

Cure::Cure(const Cure &Materia)
{
    std::cout<<"Cure Copy constructor called\n";
    *this = Materia;
}

Cure::~Cure()
{
    std::cout<<"Cure Destructor called\n";
}

Cure& Cure::operator=(const Cure &Materia)
{
    std::cout<<"Cure Copy assignment operator called\n";
    this->type = Materia.getType();
    return(*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}