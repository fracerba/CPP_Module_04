#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat Default constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &Clap)
{
    std::cout<<"WrongCat Copy constructor called\n";
    *this = Clap;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat Destructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &Clap)
{
    std::cout<<"WrongCat Copy assignment operator called\n";
    this->type = Clap.getType();
    return(*this);
}

std::string WrongCat::getType(void) const
{
    return(this->type);
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

void WrongCat::makeSound(void) const
{
    std::cout<<"WOEM!\n";
}