/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:12:21 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 19:07:37 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H_
# define SCAVTRAP_H_

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:
    ScavTrap(std::string name);
    ~ScavTrap();
    // Attack methods
    void            meleeAttack(std::string const &target);
    void            rangedAttack(std::string const &target);

    std::string     getChallenge(void);
    void            challengeNewcomer(const std::string &target);
    std::string     _challenge;
};


#endif