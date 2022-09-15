#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
	std::cout << "Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type_(type)
{
	std::cout << "WrongAnimal String constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
	std::cout << "WrongAnimall Copy constructor called." << std::endl;
	this->type_ = wronganimal.type_;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy assign operator called." << std::endl;
	this->type_ = other.type_;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return this->type_;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal squealed." << std::endl;
}