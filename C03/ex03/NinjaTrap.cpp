/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:14:19 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:13:46 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "I'm a NINJ4-TP" << name << ", my music is better !" << std::endl;
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
        this->_hitPoints = ninja._hitPoints;
        this->_maxHitPoints = ninja._maxHitPoints;
        this->_energyPoints = ninja._energyPoints;
        this->_maxEnergyPoints = ninja._maxEnergyPoints;
        this->_level = ninja._level;
        this->_name = ninja._name;
        this->_meleeAttackDamage = ninja._meleeAttackDamage;
        this->_rangedAttackDamage = ninja._rangedAttackDamage;
        this->_armorAttackReduction = ninja._armorAttackReduction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJ4-TP : I... my music... X_X" << std::endl;

}

void NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "NINJ4-TP " << _name << " attacks " << target
    << " with melee with nu, causing " << _meleeAttackDamage
    << " damage" << std::endl;
    return ;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "NINJ4-TP " << _name << " attacks " << target
    << " at range, causing " << _rangedAttackDamage
    << " damage" << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
        << " cannot ninja shoebox " << target.getName()
        << " because it is out of energy!" << std::endl;
        return;
    }
    else
    {
        setEnergyPoints(getEnergyPoints() - 30);
        std::cout << "NINJ4-TP " << getName()
        << " throw a shuriken " << target.getName()
        << ": fffzziouu!" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
        << " cannot ninja shoebox " << target.getName()
        << " because it is out of energy!" << std::endl;
        return;
    }
    else
    {
        setEnergyPoints(getEnergyPoints() - 30);
        std::cout << "NINJ4-TP " << getName()
        << " shutdown all the light and kick" << target.getName()
        << "in the balls !" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
        << " cannot ninja shoebox " << target.getName()
        << " because it is out of energy!" << std::endl;
        return;
    }
    else
    {
        setEnergyPoints(getEnergyPoints() - 30);
        std::cout << "NINJ4-TP " << getName()
        << " make a frontflip kick on" << target.getName()
        << ": right in the nose !" << std::endl;
    }
}