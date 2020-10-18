/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:59:54 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 11:59:55 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;

    public:
            HumanA(std::string name, Weapon &weapon);
            ~HumanA();

            void    attack();
};

#endif