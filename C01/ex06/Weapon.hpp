/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:00:13 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 12:00:14 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
# define _WEAPON_H_

#include "Weapon.hpp"
#include <string>

class Weapon
{
    private:
            std::string _type;

    public:
            Weapon(std::string type);
            ~Weapon(void);
            const std::string &getType();
            void setType(const std::string type);
};

#endif