#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal Default constructor called\n";
    this->type = "Animal";
}

Animal::Animal(const Animal &Clap)
{
    std::cout<<"Animal Copy constructor called\n";
    *this = Clap;
}

Animal::~Animal()
{
    std::cout<<"Animal Destructor called\n";
}

Animal& Animal::operator=(const Animal &Clap)
{
    std::cout<<"Animal Copy assignment operator called\n";
    this->type = Clap.getType();
    return(*this);
}

std::string Animal::getType(void) const
{
    return(this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound(void) const
{
    std::cout<<"SIUM!\n";
}
