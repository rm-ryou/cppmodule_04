#include "Dog.h"

Dog::Dog() : Animal("Dog"), brain_(new Brain())
{
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog Copy constructor called." << std::endl;
	*this = dog;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy assignment operator called." << std::endl;
	this->type_ = other.getType();
	this->brain_ = new Brain(*other.brain_);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
	delete this->brain_;
}

void	Dog::makeSound() const
{
	std::cout << "Dog squealed." << std::endl;
}

Brain*	Dog::getBrain() const
{
	return this->brain_;
}
