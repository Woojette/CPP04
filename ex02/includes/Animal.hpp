#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();
		Animal&	operator=(const Animal& other);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif
