#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.h"

class Animal {
protected:
	std::string	type_;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& animal);
	Animal&	operator=(const Animal& other);
	virtual	~Animal();

	const std::string	getType() const;
	virtual void		makeSound() const;
	virtual	Brain*		getBrain() const;
};

#endif // !ANIMAL_H