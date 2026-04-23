#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal default constructor called" << std::endl;
  this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  this->_type = other._type;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
  std::cout << "WrongAnimal copy assignment operator called" << std::endl;
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

void  WrongAnimal::makeSound(void) const
{
  std::cout << "WrongAnimal sound" << std::endl;
}

//test
std::string WrongAnimal::getType(void) const
{
  return (this->_type);
}
