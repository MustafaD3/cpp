#include "src/Cat.hpp"
#include "src/Dog.hpp"
int main()
{
	int n = 10;
	const Animal *lotsOfAnimals[n];
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
			lotsOfAnimals[i] = new Dog();
		else
			lotsOfAnimals[i] = new Cat();
	}
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
			delete lotsOfAnimals[i];
		else
			delete lotsOfAnimals[i];
	}
	
}