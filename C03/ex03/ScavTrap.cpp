/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:17 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:30:22 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "I'm a SC4V-TP" << name << ", my music is better !" << std::endl;
    _name = name;
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorAttackReduction = 5;
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
        this->_hitPoints = scav._hitPoints;
        this->_maxHitPoints = scav._maxHitPoints;
        this->_energyPoints = scav._energyPoints;
        this->_maxEnergyPoints = scav._maxEnergyPoints;
        this->_level = scav._level;
        this->_name = scav._name;
        this->_meleeAttackDamage = scav._meleeAttackDamage;
        this->_rangedAttackDamage = scav._rangedAttackDamage;
        this->_armorAttackReduction = scav._armorAttackReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP : I... my music... X_X" << std::endl;
}

static const std::string CHALLENGES[] = {
    "Can you get a higher note than Matt Bellamy?",
    "Who said 'il a pas dit bonjour...'",
    "I knew Tupac, who did you know?",
    "What goes next : 'Et si t'as la bouche pleine de...' de Booba",
    "Quote at least 4 dead rappers",
};

void ScavTrap::challengeNewcomer(std::string const &target)
{
	int         random;

    srand(time(NULL));
    random = rand() % 5;
	_challenge = CHALLENGES[random];
    std::cout << _name << " " << _challenge << " " << target
    <<  " If you don't answer, you humiliate yourself" << std::endl;
    return ;
}

std::string ScavTrap::getChallenge(void)
{
    return (_challenge);
}