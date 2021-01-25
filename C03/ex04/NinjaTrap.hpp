/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:14:23 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:15:09 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NinjaTrap_Hpp
#define NinjaTrap_Hpp

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name = "Unknown");
        NinjaTrap(NinjaTrap const &copy);
        NinjaTrap &operator=(NinjaTrap const &ninja);
		~NinjaTrap(void);
		void		ninjaShoebox(ClapTrap &target);
		void		ninjaShoebox(NinjaTrap &target);
		void		ninjaShoebox(ScavTrap &target);
		void		ninjaShoebox(FragTrap &target);
		void		meleeAttack(std::string const &target) const;
};

#endif
