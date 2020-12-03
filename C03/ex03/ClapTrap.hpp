/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:06 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 19:05:27 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap
{
    protected:
        void setEnergyPoints(const int &energyPoints);
        void setHitPoints(const int &hitPoints);

    public:
        std::string _name;
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorAttackReduction;
        ClapTrap(std::string name, int hitPoints, int maxHitPoints,
                int energyPoints, int maxEnergyPoints, int level,
                int meleeAttackDamage, int rangedAttackDamage,
                int armorAttackReduction);
        ~ClapTrap();

        const std::string &getName() const;
        const int &getHitPoints() const;
        const int &getMaxHitPoints() const;
        const int &getEnergyPoints() const;
        const int &getMaxEnergyPoints() const;
        const int &getLevel() const;
        const int &getMeleeAttackDamage() const;
        const int &getRangedAttackDamage() const;
        const int &getArmorAttackReduction() const;

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif