#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default constructor called\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &Clap)
{
    std::cout<<"Dog Copy constructor called\n";
    this->brain = new Brain();
    *this = Clap;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout<<"Dog Destructor called\n";
}

Dog& Dog::operator=(const Dog &Clap)
{
    std::cout<<"Dog Copy assignment operator called\n";
    this->type = Clap.getType();
    this->brain = Clap.brain;
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