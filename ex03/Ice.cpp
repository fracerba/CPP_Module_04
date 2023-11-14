#include "Ice.hpp"

Ice::Ice()
{
    std::cout<<"Ice Default constructor called\n";
    this->type = "ice";
}

Ice::Ice(const Ice &Materia)
{
    std::cout<<"Ice Copy constructor called\n";
    *this = Materia;
}

Ice::~Ice()
{
    std::cout<<"Ice Destructor called\n";
}

Ice& Ice::operator=(const Ice &Materia)
{
    std::cout<<"Ice Copy assignment operator called\n";
    this->type = Materia.getType();
    return(*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}
