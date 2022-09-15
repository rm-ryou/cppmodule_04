#include "Animal.h"

Animal::Animal() : type_("Animal")
{
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type_(type)
{
	std::cout << "Animal String constructor called." << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal Copy constructor called." << std::endl;
	this->type_ = animal.type_;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy assignment operator called." << std::endl;
	this->type_ = other.type_;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}

const std::string	Animal::getType() const
{
	return this->type_;
}

void	Animal::makeSound() const
{
	std::cout << "Animal squealed." << std::endl;
}