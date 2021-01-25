/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:07:41 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H_
# define SCAVTRAP_H_

# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		std::string _challenge;

	public:
    		ScavTrap(std::string name = "Unknown");
    		ScavTrap(ScavTrap const &copy);
    		ScavTrap &operator=(ScavTrap const &scav);
    		~ScavTrap();
    		// Attack methods
    		std::string     getChallenge();
    		void            challengeNewcomer(const std::string &target);
};


#endif
