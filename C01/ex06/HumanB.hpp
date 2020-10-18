/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:00:01 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 12:00:02 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
            HumanB(std::string name);
            ~HumanB();

            void    setWeapon(Weapon &weapon);
            void    attack();
};

#endif