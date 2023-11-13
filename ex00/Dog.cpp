#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default constructor called\n";
    this->type = "Dog";
}

Dog::Dog(const Dog &Clap)
{
    std::cout<<"Dog Copy constructor called\n";
    *this = Clap;
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor called\n";
}

Dog& Dog::operator=(const Dog &Clap)
{
    std::cout<<"Dog Copy assignment operator called\n";
    this->type = Clap.getType();
    return(*this);
}

std::string Dog::getType(void) const
{
    return(this->type);
}

void Dog::setType(std::string type)
{
    this->type = type;
}

void Dog::makeSound(void) const
{
    std::cout<<"WOOF!\n";
}