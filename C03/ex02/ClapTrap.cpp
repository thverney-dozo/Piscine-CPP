/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:26 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 19:02:28 by aeoithd          ###   ########.fr       */
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

    damage = amount - _armorAttackReduction;
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
    if ((unsigned int)_energyPoints < amount)
    {
        std::cout << _name << ": I don't have enough energy... :(" << std::endl;
    }
    else
    {
        _energyPoints -= amount;
        _hitPoints = amount + _hitPoints;
        std::cout << _name << ": My music is healing myself... ;)" << std::endl;
        std::cout << "HP points: " << _hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << _energyPoints << std::endl;
    return ;
}