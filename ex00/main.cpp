#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();

    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;

    std::cout << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    k->makeSound();
    l->makeSound();

    std::cout << std::endl;
    delete meta;
    delete i;
    delete j;
    delete k;
    delete l;

    return (0);
}