#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "########## create animal class ##########" << std::endl << std::endl;
    const Animal*   meta = new Animal();
    std::cout << "type: " << meta->getType() << " ( will output the animal sound! )" << std::endl;
    std::cout << "sound: ";
    meta->makeSound();

    std::cout << std::endl << "########## create animal [dog] class ##########" << std::endl << std::endl;
    const Animal*   j = new Dog();
    std::cout << "type: " << j->getType() << " ( will output the dog sound! )" << std::endl;
    std::cout << "sound: ";
    j->makeSound(); //will output the dog sound!

    std::cout << std::endl << "########## create animal [cat] class ##########" << std::endl << std::endl;
    const Animal*   i = new Cat();
    std::cout << "type: " << i->getType() << " ( will output the cat sound! )" << std::endl;
    std::cout << "sound: ";
    i->makeSound(); //will output the cat sound!

    std::cout << std::endl << "########## Wrong Animal ##########" << std::endl << std::endl;
    const WrongAnimal* a = new WrongCat();
    a->makeSound();

    std::cout << std::endl << "########## destructor ##########" << std::endl;
    std::cout << std::endl << "========== destructor [animal] =========="<< std::endl;
    delete meta;
    std::cout << std::endl << "========== destructor [dog] =========="<< std::endl;
    delete j;
    std::cout << std::endl << "========== destructor [cat] =========="<< std::endl;
    delete i;
    std::cout << std::endl << "========== destructor [wrong animal] =========="<< std::endl;
    delete a;
    std::cout << std::endl;

    return (0);
}
