#include "Cat.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Cat Copy constructor called." << std::endl;
	*this = cat;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator called." << std::endl;
	this->type_ = other.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat squealed." << std::endl;
}
