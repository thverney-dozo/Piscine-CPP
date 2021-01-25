/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:30:47 by thverney         ###   ########.fr       */
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
    protected:
        std::string     _challenge;
    public:
        ScavTrap(std::string name = "Unknown");
        ScavTrap(ScavTrap const &copy);
        ScavTrap &operator=(ScavTrap const &scav);
        ~ScavTrap();

        std::string     getChallenge(void);
        void            challengeNewcomer(const std::string &target);
};


#endif
