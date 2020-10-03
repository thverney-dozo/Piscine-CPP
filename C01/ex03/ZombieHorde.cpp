#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _count(n)
{
    int i = 0;

    this->Horde = new Zombie[n];
    while (i < n)
    {
		Horde[i].setName(ZombieHorde::_names[std::rand() % 10]);   
        Horde[i].setType(ZombieHorde::_types[std::rand() % 3]);
        i++;
    }
}

ZombieHorde::~ZombieHorde(void)
{
    std::cout << "Somebody set the horde in fire, they all died"
     << std::endl;
}


std::string ZombieHorde::_names[10] =
{
    "Rick the dead",
    "Unknown Zombie",
    "T-Bag",
    "Totorina",
    "Michael J",
    "Steve-Bie",
    "Handsome Zombie",
    "Nice Dude",
    "Claris",
    "John Mc John"
};

std::string ZombieHorde::_types[3] =
{
    "Romantic",
    "With no legs",
    "Student"
};

void ZombieHorde::announce()
{
    int i = 0;

    while (i < ZombieHorde::_count)
    {
	    std::cout << "<" << this->Horde[i]._name << " (" 
        << this->Horde[i]._type << ")> Braiiiiiiinssss..." << std::endl;
        i++;
    }
}