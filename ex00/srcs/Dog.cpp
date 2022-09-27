#include "Dog.h"

Dog::Dog() : Animal("Dog")
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
	if (this != &other) {
		this->type_ = other.getType();
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog squealed." << std::endl;
}
