#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout<<"AAnimal Default constructor called\n";
    this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &Clap)
{
    std::cout<<"AAnimal Copy constructor called\n";
    *this = Clap;
}

AAnimal::~AAnimal()
{
    std::cout<<"AAnimal Destructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal &Clap)
{
    std::cout<<"AAnimal Copy assignment operator called\n";
    this->type = Clap.getType();
    return(*this);
}

std::string AAnimal::getType(void) const
{
    return(this->type);
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

void AAnimal::makeSound(void) const
{
    std::cout<<"SIUM!\n";
}
