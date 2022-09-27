#include "Animal.h"
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"

int	main()
{
//	Animal	animal;
//	animal.makeSound();
	{
		Dog	basic;
		{
			Dog	tmp = basic;
		}
	}
	{
		Dog	basic;
		Dog	tmp1;
		Dog	tmp2;

		basic = tmp1;
		basic = tmp2;
	}
	{
		Cat	basic;
		Cat	tmp1;
		Cat	tmp2;

		basic = tmp1;
		basic = tmp2;
	}
	{
		std::cout << "\x1b[31m***constructor***\x1b[39m" << std::endl;
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << "\x1b[31m***method***\x1b[39m" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();

		std::cout << "\x1b[31m***destructor***\x1b[39m" << std::endl;
		delete j;
		delete i;
	}
	{
		std::cout << "\x1b[34m======================================\x1b[39m" << std::endl;
		std::cout << "\x1b[31m***constructor***\x1b[39m" << std::endl;
		int		AnimalSize = 6;
		Animal*	animals[AnimalSize];
		for (int i = 0; i < AnimalSize; i++) {
			if (i < AnimalSize / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		std::cout << "\x1b[31m***method***\x1b[39m" << std::endl;
		for (int i = 0; i < AnimalSize; i++) {
			std::cout << animals[i]->getType() << " " << std::endl;
			animals[i]->makeSound();
			
			animals[i]->getBrain()->setIdea(0, "hoge");
			animals[i]->getBrain()->setIdea(2, "fuga");
			animals[i]->getBrain()->setIdea(4, "piyo");
			std::cout << animals[i]->getType() << "'s idea is " << animals[i]->getBrain()->getIdea(0) << std::endl;
			std::cout << animals[i]->getType() << "'s idea is " << animals[i]->getBrain()->getIdea(2) << std::endl;
			std::cout << animals[i]->getType() << "'s idea is " << animals[i]->getBrain()->getIdea(4) << std::endl;
		}
		std::cout << "\x1b[31m***destructor***\x1b[39m" << std::endl;
		for (int i = 0; i < AnimalSize; i++)
			delete animals[i];
	}
	return 0;
}