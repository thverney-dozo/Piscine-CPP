/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:32:06 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:16:16 by aeoithd          ###   ########.fr       */
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
		float			level;
		std::string		name;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;
	public:
						ClapTrap(std::string name);
						ClapTrap(ClapTrap const &other);
		virtual			~ClapTrap(void);
		virtual	void	rangedAttack(std::string const &target);
		virtual void	meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
};

#endif