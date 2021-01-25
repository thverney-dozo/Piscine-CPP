/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:06 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:32:15 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_Hpp
#define ClapTrap_Hpp

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		int				hitPoints;
		int				maxHit;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		std::string		name;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;

	public:
		ClapTrap(std::string name = "Unknown");
        ClapTrap(ClapTrap const &copy);
        ClapTrap &operator=(ClapTrap const &clap);
		virtual			~ClapTrap(void);
		virtual	void	rangedAttack(std::string const &target) const;
		virtual void	meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
};

#endif
