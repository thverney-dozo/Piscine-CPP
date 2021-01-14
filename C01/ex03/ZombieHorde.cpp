/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:41 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:42 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _count(n)
{
    srand(time(0));
    int i;

    i = 0;
    this->Horde = new Zombie[n];
    while (i < n)
    {
	    int random = rand();
        if (random % 10 == 0)
            Horde[i].setName(ZombieHorde::_names[0]);   
        else if (random % 10 == 1)
            Horde[i].setName(ZombieHorde::_names[1]);   
        else if (random % 10 == 2)
            Horde[i].setName(ZombieHorde::_names[2]);   
        else if (random % 10 == 3)
            Horde[i].setName(ZombieHorde::_names[3]);   
        else if (random % 10 == 4)
            Horde[i].setName(ZombieHorde::_names[4]);   
        else if (random % 10 == 5)
            Horde[i].setName(ZombieHorde::_names[5]);   
        else if (random % 10 == 6)
            Horde[i].setName(ZombieHorde::_names[6]);   
        else if (random % 10 == 7)
            Horde[i].setName(ZombieHorde::_names[7]);   
        else if (random % 10 == 8)
            Horde[i].setName(ZombieHorde::_names[8]);   
        else if (random % 10 == 9)
            Horde[i].setName(ZombieHorde::_names[9]);   
        if (random % 3 == 0)
            Horde[i].setType(ZombieHorde::_types[0]);   
        else if (random % 3 == 1)
            Horde[i].setType(ZombieHorde::_types[1]);   
        else if (random % 3 == 2)
            Horde[i].setType(ZombieHorde::_types[2]);
        i++;
    }
}

ZombieHorde::~ZombieHorde(void)
{
	delete []this->Horde;
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
