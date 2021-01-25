/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:26 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:33:08 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHit = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1.0;
	std::cout << "CL4P-TP " << name << " came to life." << std::endl;
	this->name = name;
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
        this->hitPoints = clap.hitPoints;
        this->maxHit = clap.maxHit;
        this->energyPoints = clap.energyPoints;
        this->maxEnergyPoints = clap.maxEnergyPoints;
        this->level = clap.level;
        this->name = clap.name;
        this->meleeAttackDamage = clap.meleeAttackDamage;
        this->rangedAttackDamage = clap.rangedAttackDamage;
        this->armorDamageReduction = clap.armorDamageReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << this->name << " killed." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int damage)
{
	damage -= this->armorDamageReduction;
	damage = (damage < 0 ? 0 : damage);
	this->hitPoints -= damage;
	this->hitPoints = (this->hitPoints < 0 ? 0 : this->hitPoints);
	std::cout << this->name << " took " << damage << " damages.";
	std::cout << " He has now " << this->hitPoints << " hit points." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " has gained " << amount << " energy points." << std::endl;
	this->hitPoints += amount;
	this->hitPoints = (this->hitPoints > this->maxHit ? this->maxHit : this->hitPoints);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " uses a ranged attack against" << target << "." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " uses a melee attack against" << target << "." << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return this->name;
}