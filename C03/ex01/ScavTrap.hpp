/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 18:19:22 by aeoithd          ###   ########.fr       */
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
    std::string     _challenge;
};


#endif