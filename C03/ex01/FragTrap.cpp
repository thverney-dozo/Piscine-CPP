/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:38 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:02:21 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
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

    this->_vaulhunterDamagePoints = 0;
    this->_pianoAttackDamagePoints = 200;
    this->_glassAttackDamagePoints = 40;
    this->_danceAttackDamagePoints = 70;
    this->_toneAttackDamagePoints = 50;
    this->_classyAttackDamagePoints = 99;
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
        this->_hitPoints = frag._hitPoints;
        this->_maxHitPoints = frag._maxHitPoints;
        this->_energyPoints = frag._energyPoints;
        this->_maxEnergyPoints = frag._maxEnergyPoints;
        this->_level = frag._level;
        this->_name = frag._name;
        this->_meleeAttackDamagePoints = frag._meleeAttackDamagePoints;
        this->_rangedAttackDamagePoints = frag._rangedAttackDamagePoints;
        this->_armourDamageReductionPoints = frag._armourDamageReductionPoints;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP : I... my music... X_X" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " with melee, causing " << this->_meleeAttackDamagePoints
    << " damage" << std::endl;
    return ;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at range, causing " << this->_rangedAttackDamagePoints
    << " damage" << std::endl;
    return ;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints = amount + _hitPoints > _maxHitPoints ? _maxHitPoints : _hitPoints + amount; 
    std::cout << this->_name << ": My music is healing myself... ;)" << std::endl;
    std::cout << "HP points: " << this->_hitPoints << std::endl;
    return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
  int   random;

  if (this->_energyPoints < 25)
  {
        std::cout << this->_name << ": I need more energy... >.<" << std::endl;
        std::cout << "Energy points needed: " << 25 - this->_energyPoints \
                  << std::endl;
  }
  else
  {
        this->_energyPoints -= 25;
        srand(time(NULL));
        random = rand() % 5;
        if (random == 0)
            FragTrap::pianoAttack(target);
        else if (random == 1)
            FragTrap::glassAttack(target);
        else if (random == 2)
            FragTrap::danceAttack(target);
        else if (random == 3)
            FragTrap::toneAttack(target);
        else
            FragTrap::classyAttack(target);
  }
  return ;
}


void FragTrap::pianoAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_pianoAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " with piano tiles, causing " << this->_pianoAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::glassAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_glassAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " with better glasses, causing " << this->_glassAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::danceAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_danceAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " dances in front of " << target
    << " causing " << this->_danceAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::toneAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_toneAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " with his voice, causing " << this->_toneAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::classyAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_classyAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " show off " << target
    << " with his clothes and his smile, causing " << this->_classyAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

std::string FragTrap::getName(void)
{
    return (this->_name);
}

unsigned int FragTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeAttackDamagePoints);
}

unsigned int FragTrap::getRangedAttackDamage(void)
{
    return (this->_rangedAttackDamagePoints);
}

unsigned int FragTrap::getArmourDamageReduction(void)
{
    return (this->_armourDamageReductionPoints);
}

unsigned int FragTrap::getVaulHunter_dot_exeDamage(void)
{
    return (this->_vaulhunterDamagePoints);
}

unsigned int FragTrap::getPianoAttackDamage(void)
{
    return (this->_pianoAttackDamagePoints);
}

unsigned int FragTrap::getGlassAttackDamage(void)
{
    return (this->_glassAttackDamagePoints);
}

unsigned int FragTrap::getDanceAttackDamage(void)
{
    return (this->_danceAttackDamagePoints);
}

unsigned int FragTrap::getToneAttackDamage(void)
{
    return (this->_toneAttackDamagePoints);
}

unsigned int FragTrap::getClassyAttackDamage(void)
{
    return (this->_classyAttackDamagePoints);
}