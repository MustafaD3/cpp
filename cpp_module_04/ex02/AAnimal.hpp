#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class AAnimal{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};
#endif