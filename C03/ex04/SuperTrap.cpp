/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:27:07 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:49:01 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->maxHit = FragTrap::maxHit;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	std::cout <<  "5UP3R-TP " << this->name << ": I'm a SuperTrap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

SuperTrap & SuperTrap::operator=(SuperTrap const &super)
{
    if (this != &super)
    {
        this->hitPoints = super.hitPoints;
        this->maxHit = super.maxHit;
        this->energyPoints = super.energyPoints;
        this->maxEnergyPoints = super.maxEnergyPoints;
        this->level = super.level;
        this->name = super.name;
        this->meleeAttackDamage = super.meleeAttackDamage;
        this->rangedAttackDamage = super.rangedAttackDamage;
        this->armorDamageReduction = super.armorDamageReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "5UP3R-TP " << this->name <<  ": I'm not that super..." << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}