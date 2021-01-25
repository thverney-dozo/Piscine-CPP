/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:14:23 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:11:53 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class NinjaTrap: public ClapTrap
{
    public:
        NinjaTrap(std::string name = "Unknown");
        NinjaTrap(NinjaTrap const &copy);
        NinjaTrap &operator=(NinjaTrap const &ninja);
        ~NinjaTrap();
        // Attack methods
        void          meleeAttack(std::string const &target);
        void          rangedAttack(std::string const &target);

        void ninjaShoebox(const FragTrap &target);
        void ninjaShoebox(const ScavTrap &target);
        void ninjaShoebox(const NinjaTrap &target);
};

#endif