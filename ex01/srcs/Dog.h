#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
private:
	Brain*	brain_;
public:
	Dog();
	Dog(const Dog& dog);
	Dog&	operator=(const Dog& other);
	~Dog();

	void	makeSound() const;
	Brain*	getBrain() const;
};

#endif // !DOG_H