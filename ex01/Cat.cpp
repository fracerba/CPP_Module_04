#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default constructor called\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &Clap)
{
    std::cout<<"Cat Copy constructor called\n";
    this->type = Clap.getType();
    this->brain = new Brain();
    this->brain = Clap.brain;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout<<"Cat Destructor called\n";
}

Cat& Cat::operator=(const Cat &Clap)
{
    std::cout<<"Cat Copy assignment operator called\n";
    this->type = Clap.getType();
    this->brain = new Brain();
    this->brain = Clap.brain;
    return(*this);
}

std::string Cat::getType(void) const
{
    return(this->type);
}

void Cat::setType(std::string type)
{
    this->type = type;
}

void Cat::makeSound(void) const
{
    std::cout<<"MEOW!\n";
}
