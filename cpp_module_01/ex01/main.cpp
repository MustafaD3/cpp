#include "src/Zombie.hpp"
int main(){
	int number = 5;
	Zombie* horde = zombieHorde(number,"Zombie");
	if(!horde)
		return(EXIT_FAILURE);
	for(int i = 0;i<number;i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}