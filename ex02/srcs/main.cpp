#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "########## test: animal (dog) ##########" << std::endl;
    const Animal*   dog = new Dog();
    dog->makeSound();

    std::cout << std::endl << "########## test: animal (cat) ##########" << std::endl;
    const Animal*   cat = new Cat();
    cat->makeSound();

    std::cout << std::endl << "########## delete (dog) ##########" << std::endl;
    delete dog;

    std::cout << std::endl << "########## delete (cat) ##########" << std::endl;
    delete cat;

    // std::cout << std::endl << "########## create animal (compile error) ##########" << std::endl;
    // const Animal*   animal = new Animal();

    return (0);
}
