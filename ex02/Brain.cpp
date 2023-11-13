#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Default constructor called\n";
}

Brain::Brain(const Brain &Clap)
{
    std::cout<<"Brain Copy constructor called\n";
    *this = Clap;
}

Brain::~Brain()
{
    std::cout<<"Brain Destructor called\n";
}

Brain& Brain::operator=(const Brain &Clap)
{
    std::cout<<"Brain Copy assignment operator called\n";
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = Clap.ideas[i];
    return(*this);
}

std::string Brain::getIdea(int i) const
{
    return(this->ideas[i]);
}

void Brain::setIdea(std::string Idea, int i)
{
    this->ideas[i] = Idea;
}
