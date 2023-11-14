#include "Character.hpp"

Character::Character()
{
    std::cout<<"Character Default constructor called\n";
    this->name = "Null";
    for(int i = 0; i< 4; i++)
        this->slots[i] = NULL;
    this->drops = NULL;
}

Character::Character(const Character &Char)
{
    std::cout<<"Character Copy constructor called\n";
    this->name = Char.getName();
    for(int i = 0; i < 4; i++)
    {
        if(this->slots[i])
            delete this->slots[i];
        if(Char.slots[i])
            this->slots[i] = Char.slots[i]->clone();
    }
    if(this->drops)
            delete this->drops;
    this->drops = Char.drops->clone();
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->slots[i])
            delete this->slots[i];
    }
    if(this->drops)
            delete this->drops;
    std::cout<<"Character Destructor called\n";
}

Character& Character::operator=(const Character &Char)
{
    std::cout<<"Character Copy assignment operator called\n";
    this->name = Char.getName();
    for(int i = 0; i < 4; i++)
    {
        if(this->slots[i])
            delete this->slots[i];
        if(Char.slots[i])
            this->slots[i] = Char.slots[i]->clone();
    }
    if(this->drops)
            delete this->drops;
    this->drops = Char.drops->clone();
    return(*this);
}

Character::Character(std::string const& name)
{
    std::cout<<"Character String constructor called\n";
    this->name = name;
    for(int i = 0; i< 4; i++)
        this->slots[i] = NULL;
    this->drops = NULL;
}

std::string const& Character::getName() const
{
    return(this->name);
}

void Character::equip(AMateria* m)
{
    int i = 0;
    while (this->slots[i] && i < 4)
        i++;
    if (i == 4)
    {
        std::cout<<"Inventory full, unequip some Materia!\n";
        return ;
    }
    this->slots[i] = m;
}

void Character::unequip(int idx)
{
    if(idx < 0 || idx > 3)
        std::cout<<"Invalid index, Inventory has 4 slots!\n";
    else if (!this->slots[idx])
        std::cout<<"The Inventory slot is empty!\n";
    else
    {
        if(this->drops)
            delete this->drops;
        this->drops = this->slots[idx];
        this->slots[idx] = NULL;
    }
}
    
void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx > 3)
        std::cout<<"Invalid index, Inventory has 4 slots!\n";
    else if (!this->slots[idx])
        std::cout<<"The Inventory slot is empty!\n";
    else
        this->slots[idx]->use(target);
}