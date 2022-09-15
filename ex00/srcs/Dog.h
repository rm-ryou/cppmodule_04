#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& dog);
	Dog&	operator=(const Dog& other);
	~Dog();

	void	makeSound() const;
};

#endif // !DOG_H