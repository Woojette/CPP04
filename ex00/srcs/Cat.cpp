#include "Cat.hpp"

Cat::Cat() : Animal()
{
  std::cout << "Cat default constructor called" << std::endl;
  this->_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
  this->_type = other._type;
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "Cat copy assignment operator called" << std::endl;
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

void  Cat::makeSound(void) const
{
  std::cout << "meow meow" << std::endl;
}
