#ifndef BRAIN_HPP
# define  BRAIN_HPP

# include "Animal.hpp"

class Brain
{
  private:
    std::string ideas[100];
  public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain& operator=(const Brain& other);

    //test
    void  setIdea(unsigned int i, const std::string& idea);
    std::string getIdea(unsigned int i) const;
};

#endif
