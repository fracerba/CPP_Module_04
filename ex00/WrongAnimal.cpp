#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal Default constructor called\n";
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Clap)
{
    std::cout<<"WrongAnimal Copy constructor called\n";
    *this = Clap;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal Destructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &Clap)
{
    std::cout<<"WrongAnimal Copy assignment operator called\n";
    this->type = Clap.getType();
    return(*this);
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}

void WrongAnimal::setType(std::string Type)
{
    this->type = Type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout<<"BRUH!\n";
}
