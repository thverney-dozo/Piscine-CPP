/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:38 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:34:56 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1;
	std::cout << "FR4G-TP " << this->name << ": I'm a fragger !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const &frag)
{
    if (this != &frag)
    {
        this->hitPoints = frag.hitPoints;
        this->maxHit = frag.maxHit;
        this->energyPoints = frag.energyPoints;
        this->maxEnergyPoints = frag.maxEnergyPoints;
        this->level = frag.level;
        this->name = frag.name;
        this->meleeAttackDamage = frag.meleeAttackDamage;
        this->rangedAttackDamage = frag.rangedAttackDamage;
        this->armorDamageReduction = frag.armorDamageReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << ": Oh no, I died :(" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int random;
	std::string	tool;

	if (this->energyPoints < 25)
	{
		std::cout << this->name << " doesn't have enough energy !" << std::endl;
		return ;
	}
    else
    {
        energyPoints -= 25;
        srand(time(NULL));
        random = rand() % 5;
        if (random == 0)
			tool = "a piano tile";
        else if (random == 1)
			tool = "super cool glasses";
        else if (random == 2)
			tool = "smile eyes closed";
        else if (random == 3)
			tool = "dancing music";
        else
			tool = "swag";
    }
	std::cout << this->name << " attacked " << target << " with " << tool << std::endl;
}

void		FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << this->name << " attacked " << target
	       	<< " with a sniper, causing " << this->rangedAttackDamage 
		<< " damages." << std::endl;
}
