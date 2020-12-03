/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:27:02 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:15:30 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperTrap_Hpp
#define SuperTrap_Hpp

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
					SuperTrap(std::string name);
					~SuperTrap(void);
					SuperTrap(SuperTrap const &other);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
};

#endif