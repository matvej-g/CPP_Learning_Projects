#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal &operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif