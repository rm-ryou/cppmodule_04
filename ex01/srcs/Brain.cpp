#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain Default constructor called." << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain Copy constructor called." << std::endl;
	*this = brain;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy assignment operator called." << std::endl;
	for (int i = 0; i < this->ideaSize_; i++)
		this->ideas_[i] = other.ideas_[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called." << std::endl;
}

const std::string&	Brain::getIdea(int i) const
{
	return this->ideas_[i];
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < this->ideaSize_)
		this->ideas_[i] = idea;
	else
		std::cout << "i is greater than or equal to 0 and less than or equal to " << this->ideaSize_ << std::endl;
}