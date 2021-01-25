/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:35:14 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_Hpp
#define ScavTrap_Hpp

# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name = "Unknown");
    	ScavTrap(ScavTrap const &copy);
    	ScavTrap &operator=(ScavTrap const &scav);
		~ScavTrap(void);
		void		challengeNewcomer(void);
};

#endif
