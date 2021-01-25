/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:08:32 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H_
# define SCAVTRAP_H_

# include <string>
# include <iostream>

class ScavTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    unsigned int    _meleeAttackDamagePoints;
    unsigned int    _rangedAttackDamagePoints;
    unsigned int    _armourDamageReductionPoints;
    std::string     _challenge;

public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    // Attack methods
    void            meleeAttack(std::string const &target);
    void            rangedAttack(std::string const &target);

    std::string     getName(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamage(void);
    unsigned int    getArmourDamageReduction(void);
    std::string     getChallenge(void);
    void            challengeNewcomer(const std::string &target);
};


#endif