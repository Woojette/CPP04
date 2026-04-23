#include "Dog.hpp"

Dog::Dog() : Animal()
{
  std::cout << "Dog default constructor called" << std::endl;
  this->_type = "Dog";
  this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
  this->_brain = new Brain(*other._brain);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
  delete this->_brain;
}

Dog& Dog::operator=(const Dog& other)
{
  std::cout << "Dog copy assignment operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete  this->_brain;
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

void  Dog::makeSound(void) const
{
  std::cout << "bark bark" << std::endl;
}

//test
void  Dog::setIdea(unsigned int i, const std::string& idea)
{
  if (i > 100)
    return ;
  this->_brain->setIdea(i, idea);
}

std::string Dog::getIdea(unsigned int i) const
{
  if (i > 100)
    return ("");
  return (this->_brain->getIdea(i));
}
