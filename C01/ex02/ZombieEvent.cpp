#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {};
ZombieEvent::~ZombieEvent(void) {};

std::string ZombieEvent::_names[10] =
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

void    ZombieEvent::setZombieType(std::string _type)
{
    this->_type = _type;
}

Zombie  *ZombieEvent::newZombie(std::string _name)
{
    return new Zombie(_name, this->_type);
}

void	ZombieEvent::randomChump(void)
{
	Zombie z = Zombie(ZombieEvent::_names[std::rand() % 10], this->_type);
}