#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int	main()
{
	{
		std::cout << "\x1b[31m***constructor***\x1b[39m" << std::endl;
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << "\x1b[31m***method***\x1b[39m" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		std::cout << "\x1b[31m***destructor***\x1b[39m" << std::endl;
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "\x1b[31m-----------------------------------------\x1b[39m" << std::endl;
		std::cout << "\x1b[31m***constructor***\x1b[39m" << std::endl;
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();

		std::cout << "\x1b[31m***method***\x1b[39m" << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();

		std::cout << "\x1b[31m***destructor***\x1b[39m" << std::endl;
		delete meta;
		delete i;
	}
	return 0;
}