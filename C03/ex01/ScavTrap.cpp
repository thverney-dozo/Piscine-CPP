/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 18:18:32 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "I'm " << name << ", my music is better !" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamagePoints = 30;
    this->_rangedAttackDamagePoints = 20;
    this->_armourDamageReductionPoints = 5;
}

ScavTrap::~ScavTrap() {}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target
    << " with melee, causing " << this->_meleeAttackDamagePoints
    << " damage" << std::endl;
    return ;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target
    << " at range, causing " << this->_rangedAttackDamagePoints
    << " damage" << std::endl;
    return ;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount - this->_armourDamageReductionPoints;
    if (damage > this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << this->_name << ": I'm dying...But not my music" << std::endl;
    }
    else
    {
        this->_hitPoints -= damage;
        std::cout << this->_name << ": I'm alive, and in great shape" << std::endl;
        std::cout << "Armour reduction: " << this->_armourDamageReductionPoints
        << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->_hitPoints << " / "
        << this->_maxHitPoints << std::endl;
    }
    return ;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount)
    {
        std::cout << this->_name << ": I don't have enough energy... :(" << std::endl;
    }
    else
    {
        this->_energyPoints -= amount;
        this->_hitPoints = amount + this->_hitPoints;
        std::cout << this->_name << ": My music is healing myself... ;)" << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->_energyPoints << std::endl;
    return ;
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
	this->_challenge = CHALLENGES[random];
    std::cout << this->_name << " " << this->_challenge << " " << target
    <<  " If you don't answer, you humiliate yourself" << std::endl;
    return ;
}

std::string ScavTrap::getName(void)
{
    return (this->_name);
}

unsigned int ScavTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeAttackDamagePoints);
}

unsigned int ScavTrap::getRangedAttackDamage(void)
{
    return (this->_rangedAttackDamagePoints);
}

unsigned int ScavTrap::getArmourDamageReduction(void)
{
    return (this->_armourDamageReductionPoints);
}

std::string ScavTrap::getChallenge(void)
{
    return (this->_challenge);
}