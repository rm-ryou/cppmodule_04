#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat Copy constructor called." << std::endl;
	*this = wrongcat;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	this->type_ = other.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat squealed." << std::endl;
}