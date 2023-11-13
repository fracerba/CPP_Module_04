#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta[8];

    for (size_t i = 0; i < 4; i++)
    {
        if (i < 2)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }

    std::cout << std::endl;
    for (size_t i = 0; i < 4; i++)
        std::cout << meta[i]->getType() << std::endl;

    std::cout << std::endl;
    for (size_t i = 0; i < 4; i++)
        meta[i]->makeSound();

    std::cout << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete meta[i];
    return (0);
}