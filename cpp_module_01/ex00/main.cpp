#include "src/Zombie.hpp"
int main(){
	Zombie* heapZombie = newZombie("Ahmet");
	heapZombie->announce();
	delete heapZombie;
	randomChump("Mehmet");
	return 0;
}