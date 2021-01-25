/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:26 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:43:13 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints,
                    int energyPoints, int maxEnergyPoints, int level,
                    int meleeAttackDamage, int rangedAttackDamage,
                    int armorAttackReduction):
    _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
    _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints),
    _level(level), _meleeAttackDamage(meleeAttackDamage),
    _rangedAttackDamage(rangedAttackDamage), _armorAttackReduction(armorAttackReduction)
{
    std::cout << "CL4P-TP " << _name << " is a new part of the crew" << std::endl;
}


ClapTrap::ClapTrap():
    _name("Unknown"), _hitPoints(100), _maxHitPoints(100),
    _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDamage(30),
    _rangedAttackDamage(20), _armorAttackReduction(5)
{
	std::cout << "ClapTrap created without name" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &clap)
{
    if (this != &clap)
    {
        this->_hitPoints = clap._hitPoints;
        this->_maxHitPoints = clap._maxHitPoints;
        this->_energyPoints = clap._energyPoints;
        this->_maxEnergyPoints = clap._maxEnergyPoints;
        this->_level = clap._level;
        this->_name = clap._name;
        this->_meleeAttackDamage = clap._meleeAttackDamage;
        this->_rangedAttackDamage = clap._rangedAttackDamage;
        this->_armorAttackReduction = clap._armorAttackReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP " << _name << " leaves the crew and die" << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return _name;
}

const int &ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

const int &ClapTrap::getMaxHitPoints() const
{
    return _maxHitPoints;
}

const int &ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

const int &ClapTrap::getMaxEnergyPoints() const
{
    return _maxEnergyPoints;
}

const int &ClapTrap::getLevel() const
{
    return _level;
}

const int &ClapTrap::getMeleeAttackDamage() const
{
    return _meleeAttackDamage;
}

const int &ClapTrap::getRangedAttackDamage() const
{
    return _rangedAttackDamage;
}

const int &ClapTrap::getArmorAttackReduction() const
{
    return _armorAttackReduction;
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
    _energyPoints = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
    _hitPoints = hitPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount > (unsigned int)_armorAttackReduction ? amount - (unsigned int)_armorAttackReduction : 0;
    if (damage > (unsigned int)_hitPoints)
    {
        _hitPoints = 0;
        std::cout << _name << ": I'm dying...But not my music" << std::endl;
    }
    else
    {
        _hitPoints -= damage;
        std::cout << _name << ": I'm alive, and in great shape" << std::endl;
        std::cout << "Armour reduction: " << _armorAttackReduction
        << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << _hitPoints << " / "
        << _maxHitPoints << std::endl;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints = amount + (unsigned int)_hitPoints > (unsigned int)_maxHitPoints ? _maxHitPoints : _hitPoints + amount; 
    std::cout << this->_name << ": My music is healing myself... ;)" << std::endl;
    std::cout << "HP points: " << this->_hitPoints << std::endl;
    return ;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "CL4P-TP " << _name << " attacks " << target
    << " with melee, causing " << _meleeAttackDamage
    << " damage" << std::endl;
    return ;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "CL4P-TP " << _name << " attacks " << target
    << " at range, causing " << _rangedAttackDamage
    << " damage" << std::endl;
    return ;
}
