#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string	type_;
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& wronganimal);
	WrongAnimal&	operator=(const WrongAnimal& other);
	virtual	~WrongAnimal();

	const std::string	getType() const;
	void				makeSound() const;
};

#endif // !WRONGANIMAL_H