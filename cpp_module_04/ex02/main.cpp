#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	std::cout << "-----Array Test-----" << std::endl;
	{
		int n = 10;
		const AAnimal *lotsOfAnimals[n];

		for (int i = 0; i < n; i++)
		{
			if (i < n / 2)
				lotsOfAnimals[i] = new Dog();
			else
				lotsOfAnimals[i] = new Cat();
		}
		for(int i = 0; i < n; i++)
		{
			lotsOfAnimals[i]->makeSound();
		}
		for (int i = 0; i < n; i++)
		{
			if (i < n / 2)
				delete lotsOfAnimals[i];
			else
				delete lotsOfAnimals[i];
		}
	}
	std::cout << "-----Deep Copy Test-----" << std::endl;
	{
		Dog *dog = new Dog();
		dog->getBrain()->setIdea("Dog Idea 1",0);
		dog->getBrain()->setIdea("Dog Idea 2",1);
		Dog *dog2 = new Dog(*dog);
		dog2->getBrain()->setIdea("Dog 2 Idea 1",0);
		std::cout << dog->getBrain()->getIdea(0) << std::endl;
		std::cout << dog->getBrain()->getIdea(1) << std::endl;
		std::cout << dog2->getBrain()->getIdea(0) << std::endl;
		std::cout << dog->getBrain()->getIdea(0) << std::endl;
		delete dog;
		delete dog2;
	}
}