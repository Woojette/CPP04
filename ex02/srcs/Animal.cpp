#include "Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal default constructor called" << std::endl;
  this->_type = "Animal";
}

Animal::Animal(const Animal& other)
{
  std::cout << "Animal copy constructor called" << std::endl;
  this->_type = other._type;
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
  std::cout << "Animal copy assignment operator called" << std::endl;
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

// void  Animal::makeSound(void) const
// {
//   std::cout << "Animal sound" << std::endl;
// }

//test
std::string Animal::getType(void) const
{
  return (this->_type);
}
