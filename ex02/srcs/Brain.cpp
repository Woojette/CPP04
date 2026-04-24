#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
  std::cout << "Brain copy constructor called" << std::endl;
  *this = other;
}

Brain::~Brain()
{
  std::cout << "Brain destructor called" << std::endl;
}

Brain&  Brain::operator=(const Brain& other)
{
  std::cout << "Brain copy assignment operator called" << std::endl;
  if (this != &other)
  {
    for (unsigned int i = 0; i < 100; i++)
      this->ideas[i] = other.ideas[i];
  }
  return (*this);
}

//test
void  Brain::setIdea(unsigned int i, const std::string& idea)
{
  if (i > 100)
    return ;
  this->ideas[i] = idea;
}

std::string Brain::getIdea(unsigned int i) const
{
  if (i > 100)
    return ("");
  return (this->ideas[i]);
}
