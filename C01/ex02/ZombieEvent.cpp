/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:07 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:08 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {};
ZombieEvent::~ZombieEvent(void) {};

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
    srand(time(0));
	int i = rand();
	std::string name;

	if (i % 10 == 0)
		name = "Rick the dead";
	else if (i % 10 == 1)
		name = "Unknown Zombie";
	else if (i % 10 == 2)
		name = "T-Bag";
	else if (i % 10 == 3)
		name = "Totorina";
	else if (i % 10 == 4)
		name = "Michael J";
	else if (i % 10 == 5)
		name = "Handsome Zombie";
	else if (i % 10 == 6)
		name = "Claris";
	else if (i % 10 == 7)
		name = "Nice Dude";
	else if (i % 10 == 8)
		name = "John Mc John";
	else if (i % 10 == 9)
		name = "Steve-Bie";
	Zombie z = Zombie(name, this->_type);
}