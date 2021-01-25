/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:38 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:00:54 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "I'm a FR4G-TP" << name << ", my music is better !" << std::endl;
    _vaulhunterDamagePoints = 0;
    _pianoAttackDamagePoints = 200;
    _glassAttackDamagePoints = 40;
    _danceAttackDamagePoints = 70;
    _toneAttackDamagePoints = 50;
    _classyAttackDamagePoints = 99;
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
        this->_meleeAttackDamage = frag._meleeAttackDamage;
        this->_rangedAttackDamage = frag._rangedAttackDamage;
        this->_armorAttackReduction = frag._armorAttackReduction;
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
    std::cout << "FR4G-TP " << _name << " attacks " << target
    << " with melee, causing " << _meleeAttackDamage
    << " damage" << std::endl;
    return ;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target
    << " at range, causing " << _rangedAttackDamage
    << " damage" << std::endl;
    return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
  int   random;

  if (_energyPoints < 25)
  {
        std::cout << _name << ": I need more energy... >.<" << std::endl;
        std::cout << "Energy points needed: " << 25 - _energyPoints \
                  << std::endl;
  }
  else
  {
        _energyPoints -= 25;
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
    _vaulhunterDamagePoints = _pianoAttackDamagePoints;
    std::cout << "FR4G-TP " << _name << " attacks " << target
    << " with piano tiles, causing " << _pianoAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::glassAttack(std::string const &target)
{
    _vaulhunterDamagePoints = _glassAttackDamagePoints;
    std::cout << "FR4G-TP " << _name << " attacks " << target
    << " with better glasses, causing " << _glassAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::danceAttack(std::string const &target)
{
    _vaulhunterDamagePoints = _danceAttackDamagePoints;
    std::cout << "FR4G-TP " << _name << " dances in front of " << target
    << " causing " << _danceAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::toneAttack(std::string const &target)
{
    _vaulhunterDamagePoints = _toneAttackDamagePoints;
    std::cout << "FR4G-TP " << _name << " attacks " << target
    << " with his voice, causing " << _toneAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

void FragTrap::classyAttack(std::string const &target)
{
    _vaulhunterDamagePoints = _classyAttackDamagePoints;
    std::cout << "FR4G-TP " << _name << " show off " << target
    << " with his clothes and his smile, causing " << _classyAttackDamagePoints
    << " damage !" << std::endl;
    return ;
}

unsigned int FragTrap::getVaulHunter_dot_exeDamage(void)
{
    return (_vaulhunterDamagePoints);
}

unsigned int FragTrap::getPianoAttackDamage(void)
{
    return (_pianoAttackDamagePoints);
}

unsigned int FragTrap::getGlassAttackDamage(void)
{
    return (_glassAttackDamagePoints);
}

unsigned int FragTrap::getDanceAttackDamage(void)
{
    return (_danceAttackDamagePoints);
}

unsigned int FragTrap::getToneAttackDamage(void)
{
    return (_toneAttackDamagePoints);
}

unsigned int FragTrap::getClassyAttackDamage(void)
{
    return (_classyAttackDamagePoints);
}