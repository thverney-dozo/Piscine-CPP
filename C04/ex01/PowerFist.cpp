/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:19:25 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 23:00:08 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist &PowerFist::operator=(const PowerFist &affect)
{
    setName(affect.getName());
	setAPcost(affect.getAPCost());
	setDamage(affect.getDamage());
    return(*this);
}

PowerFist::PowerFist(const PowerFist &cpy):
    AWeapon(cpy.getName(), cpy.getAPCost(), cpy.getDamage())
{}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}