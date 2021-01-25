/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:27:02 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:37:52 by thverney         ###   ########.fr       */
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
		SuperTrap(std::string name = "Unknown");
    	SuperTrap(SuperTrap const &copy);
    	SuperTrap &operator=(SuperTrap const &Super);
		~SuperTrap(void);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);

		using NinjaTrap::meleeAttack;
		using FragTrap::rangedAttack;
};

#endif
