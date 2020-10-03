#include "Zombie.hpp"
#include "ZombieEvent.hpp"
 
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << " (" << this->_type
		<< ")> DEAD Michone cut off my head :(" << std::endl;
}

void    Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type
	<< ")> Braiiiiiiinssss..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type
	<< ")> Braiiiiiiinssss..." << std::endl;
}

std::string Zombie::getName(void)
{
	return this->_name;
}

std::string Zombie::getType(void)
{
	return this->_type;
}

