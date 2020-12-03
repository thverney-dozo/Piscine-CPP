/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:41 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 18:19:05 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>

class FragTrap
{
private:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _maxHitPoints;
    unsigned int  _energyPoints;
    unsigned int  _maxEnergyPoints;
    unsigned int  _level;
    unsigned int  _meleeAttackDamagePoints;
    unsigned int  _rangedAttackDamagePoints;
    unsigned int  _armourDamageReductionPoints;

    unsigned int  _vaulhunterDamagePoints;
    unsigned int  _pianoAttackDamagePoints;
    unsigned int  _glassAttackDamagePoints;
    unsigned int  _danceAttackDamagePoints;
    unsigned int  _toneAttackDamagePoints;
    unsigned int  _classyAttackDamagePoints;

public:
    FragTrap(std::string name);
    void          takeDamage(unsigned int amount);
    void          beRepaired(unsigned int amount);
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void          vaulthunter_dot_exe(std::string const &target);
    void          pianoAttack(std::string const &target);
    void          glassAttack(std::string const &target);
    void          danceAttack(std::string const &target);
    void          toneAttack(std::string const &target);
    void          classyAttack(std::string const &target);
    ~FragTrap();

    std::string   getName(void);
    unsigned int  getMeleeAttackDamage(void);
    unsigned int  getRangedAttackDamage(void);
    unsigned int  getArmourDamageReduction(void);
    unsigned int  getVaulHunter_dot_exeDamage(void);
    unsigned int  getPianoAttackDamage(void);
    unsigned int  getGlassAttackDamage(void);
    unsigned int  getDanceAttackDamage(void);
    unsigned int  getToneAttackDamage(void);
    unsigned int  getClassyAttackDamage(void);
};

#endif