/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:17 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:36:34 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->level = 1;
	std::cout << "5C4V-TP " << this->name << ": I'm a nasty scavenger." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &scav)
{
    if (this != &scav)
    {
        this->hitPoints = scav.hitPoints;
        this->maxHit = scav.maxHit;
        this->energyPoints = scav.energyPoints;
        this->maxEnergyPoints = scav.maxEnergyPoints;
        this->level = scav.level;
        this->name = scav.name;
        this->meleeAttackDamage = scav.meleeAttackDamage;
        this->rangedAttackDamage = scav.rangedAttackDamage;
        this->armorDamageReduction = scav.armorDamageReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP " << this->name << ": Bye..." << std::endl;
}

static const std::string CHALLENGES[] = {
    "Can you get a higher note than Matt Bellamy?",
    "Who said 'il a pas dit bonjour...'",
    "I knew Tupac, who did you know?",
    "What goes next : 'Et si t'as la bouche pleine de...' de Booba",
    "Quote at least 4 dead rappers",
};

void		ScavTrap::challengeNewcomer(void)
{
	int         random;

    srand(time(NULL));
    random = rand() % 5;
	std::string challenge = CHALLENGES[random];
    std::cout << challenge << " " 
	<<  " If you don't answer, you humiliate yourself" << std::endl;
    return ;
}