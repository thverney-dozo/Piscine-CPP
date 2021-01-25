/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:14:19 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:37:37 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHit = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->level = 1;
	std::cout << "N1NJ4-TP " << this->name << " I'm a ninja !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &ninja)
{
    if (this != &ninja)
    {
        this->hitPoints = ninja.hitPoints;
        this->maxHit = ninja.maxHit;
        this->energyPoints = ninja.energyPoints;
        this->maxEnergyPoints = ninja.maxEnergyPoints;
        this->level = ninja.level;
        this->name = ninja.name;
        this->meleeAttackDamage = ninja.meleeAttackDamage;
        this->rangedAttackDamage = ninja.rangedAttackDamage;
        this->armorDamageReduction = ninja.armorDamageReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "N1NJ4-TP " << this->name << ": I must rest in darkness..." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << this->name << " used his special ninja ability on claptrap " << target.getName() << " !" <<std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << this->name << " used his special ninja ability on scavtrap " << target.getName() << " !" <<std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << this->name << " used his special ninja ability on fragtrap " << target.getName() << " !" <<std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << this->name << " used his special ninja ability on ninjatrap" << target.getName() << " !" <<std::endl;
}

void		NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a shuriken, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an katana, causing " << this->meleeAttackDamage << " damages." << std::endl;
}