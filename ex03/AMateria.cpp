#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout<<"AMateria Default constructor called\n";
    this->type = "Void";
}

AMateria::AMateria(const AMateria &Materia)
{
    std::cout<<"AMateria Copy constructor called\n";
    *this = Materia;
}

AMateria::~AMateria()
{
    std::cout<<"AMateria Destructor called\n";
}

AMateria& AMateria::operator=(const AMateria &Materia)
{
    std::cout<<"AMateria Copy assignment operator called\n";
    this->type = Materia.getType();
    return(*this);
}

AMateria::AMateria(std::string const& type)
{
    std::cout<<"AMateria String constructor called\n";
    this->type = type;
}

std::string const& AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"* "<<this->type<<"was used on"<<target.getName()<<" *"<<std::endl;
}