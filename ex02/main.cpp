#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const AAnimal* meta = new AAnimal();
    const AAnimal* i = new Dog();
    const AAnimal* j = new Cat();

    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    std::cout << std::endl;
    i->makeSound();
    j->makeSound();

    std::cout << std::endl;
    delete i;
    delete j;

    return (0);
}