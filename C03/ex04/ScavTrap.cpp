/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:15:46 by aeoithd          ###   ########.fr       */
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
	this->level = 1.0;
	std::cout << "5C4V-TP " << this->name << ": I'm a nasty scavenger." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	(void)other;
	std::cout << "5C4V-TP " << this->name << ": I'm a nasty scavenger." << std::endl;
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


void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a bow, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an axe, causing " << this->meleeAttackDamage << " damages." << std::endl;
}