#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
private:
	static const int	ideaSize_ = 100;
	std::string			ideas_[ideaSize_];
public:
	Brain();
	Brain(const Brain& brain);
	Brain&	operator=(const Brain& other);
	~Brain();

	std::string&	getIdea(int i);
	void				setIdea(int i, std::string idea);
};

#endif // !BRAIN_H