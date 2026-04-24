#ifndef CAT_HPP
# define    CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain*  _brain;
  public:
    Cat();
    Cat(const Cat& other);
    ~Cat();
    Cat&  operator=(const Cat& other);

    virtual void  makeSound(void) const;

    //test
    void  setIdea(unsigned int i, const std::string& idea);
    std::string getIdea(unsigned int i) const;
};

#endif
