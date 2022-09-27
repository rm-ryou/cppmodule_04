#include "Cat.h"

Cat::Cat() : Animal("Cat"), brain_(new Brain())
{
	std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat), brain_(new Brain())
{
	std::cout << "Cat Copy constructor called." << std::endl;
	*this = cat;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->type_ = other.getType();
		delete	this->brain_;
		this->brain_ = new Brain(*other.brain_);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
	delete this->brain_;
}

void	Cat::makeSound() const
{
	std::cout << "Cat squealed." << std::endl;
}

Brain*	Cat::getBrain() const
{
	return this->brain_;
}