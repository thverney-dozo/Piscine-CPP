/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:41 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/01 17:16:04 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_Hpp
#define FragTrap_Hpp

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
					FragTrap(std::string name);
					~FragTrap(void);
					FragTrap(FragTrap const &other);
		void		vaulthunter_dot_exe(std::string const &target);
		void		meleeAttack(std::string const &arget);
		void		rangedAttack(std::string const &target);
};

#endif