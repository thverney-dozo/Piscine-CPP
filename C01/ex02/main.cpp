#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieEvent event;

    event.setZombieType("Crowling zombie");
    Zombie *zombie1 = event.newZombie("Lil Z");
	Zombie *zombie2 = event.newZombie("OhHiMark");

	event.setZombieType("chump");
	event.randomChump();

	delete zombie1;
	delete zombie2;

}