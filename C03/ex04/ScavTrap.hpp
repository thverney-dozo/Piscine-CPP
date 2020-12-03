/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:15:39 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_Hpp
#define ScavTrap_Hpp

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
					ScavTrap(std::string name);
					~ScavTrap(void);
					ScavTrap(ScavTrap const &other);
		void		challengeNewcomer(void);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
};

#endif