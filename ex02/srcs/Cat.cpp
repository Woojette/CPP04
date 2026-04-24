#include "Cat.hpp"

Cat::Cat() : Animal()
{
  std::cout << "Cat default constructor called" << std::endl;
  this->_type = "Cat";
  this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
  this->_brain = new Brain(*other._brain);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
  delete this->_brain;
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "Cat copy assignment operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete  this->_brain;
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

void  Cat::makeSound(void) const
{
  std::cout << "meow meow" << std::endl;
}

//test
void  Cat::setIdea(unsigned int i, const std::string& idea)
{
  if (i > 100)
    return ;
  this->_brain->setIdea(i, idea);
}

std::string Cat::getIdea(unsigned int i) const
{
  if (i > 100)
    return ("");
  return (this->_brain->getIdea(i));
}
