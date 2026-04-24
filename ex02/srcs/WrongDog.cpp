#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
  std::cout << "WrongDog default constructor called" << std::endl;
  this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other)
{
  std::cout << "WrongDog copy constructor called" << std::endl;
  this->_type = other._type;
}

WrongDog::~WrongDog()
{
  std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
  std::cout << "WrongDog copy assignment operator called" << std::endl;
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

void  WrongDog::makeSound(void) const
{
  std::cout << "bark bark" << std::endl;
}

