#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
private:
	Brain*	brain_;
public:
	Cat();
	Cat(const Cat& cat);
	Cat&	operator=(const Cat& other);
	~Cat();

	void	makeSound() const;
	Brain*	getBrain() const;
};


#endif // !CAT_H