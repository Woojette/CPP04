#ifndef DOG_HPP
# define    DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain*  _brain;
  public:
    Dog();
    Dog(const Dog& other);
    ~Dog();
    Dog&  operator=(const Dog& other);

    virtual void  makeSound(void) const;

    //test
    void  setIdea(unsigned int i, const std::string& idea);
    std::string getIdea(unsigned int i) const;
};

#endif
