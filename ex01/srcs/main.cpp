#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "########## test: animals[10] (dog 5, cat 5) ##########" << std::endl;
    const Animal*   animals[10];

    std::cout << std::endl << "=============== create 5 dogs ===============" << std::endl;
    for (unsigned int i = 0; i < 5; i++)
    {
        std::cout << "[index " << i << "]: ";
        animals[i] = new Dog();
    }
    std::cout << std::endl << "=============== create 5 cats ===============" << std::endl;
    for (unsigned int i = 5; i < 10; i++)
    {
        std::cout << "[index " << i << "]: ";
        animals[i] = new Cat();
    }

    std::cout << std::endl << "############### test: delete (all) ###############" << std::endl;
    for (unsigned int i = 0; i < 10; i++)
    {
        std::cout << "[index " << i << "]: ";
        delete  animals[i];
    }

    std::cout << std::endl << "############### test: polymorphism ###############" << std::endl;
    std::cout << std::endl << "=============== create dog ===============" << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl << "=============== create cat ===============" << std::endl;
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << "dog sound: ";
    j->makeSound();
    std::cout << "cat sound: ";
    i->makeSound();

    std::cout << std::endl << "=============== delete dog ===============" << std::endl;
    delete j;
    std::cout << std::endl << "=============== delete cat ===============" << std::endl;
    delete i;

    std::cout << std::endl << "############### test: copy (dog) ###############" << std::endl;
    std::cout << std::endl << "=============== create dog original ===============" << std::endl;
    Dog dogOriginal;
    dogOriginal.setIdea(0, "dog original");
    std::cout << std::endl << "=============== create dog copy ===============" << std::endl;
    Dog dogCopy = dogOriginal;
    std::cout << std::endl << "(change message of dog original)" << std::endl;
    dogOriginal.setIdea(0, "dog original change");
    std::cout << std::endl << "========== check dog original and copy ==========" << std::endl;
    std::cout << "dog original: " << dogOriginal.getIdea(0) << std::endl;
    std::cout << "dog copy: " << dogCopy.getIdea(0) << std::endl;

    std::cout << std::endl << "############### test: copy (cat) ###############" << std::endl;
    std::cout << std::endl << "=============== create cat original ===============" << std::endl;
    Cat catOriginal;
    catOriginal.setIdea(0, "cat original");
    std::cout << std::endl << "=============== create cat copy ===============" << std::endl;
    Cat catCopy = catOriginal;
    std::cout << std::endl << "(change message of cat original)" << std::endl;
    catOriginal.setIdea(0, "cat original change");
    std::cout << std::endl << "========== check cat original and copy ==========" << std::endl;
    std::cout << "cat original: " << catOriginal.getIdea(0) << std::endl;
    std::cout << "cat copy: " << catCopy.getIdea(0) << std::endl << std::endl;

    return (0);
}
