/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:26 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:16:24 by aeoithd          ###   ########.fr       */
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

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "CL4P-TP " << name << " came to life." << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
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