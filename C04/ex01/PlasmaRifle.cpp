/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:57:02 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 23:01:36 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpy) : AWeapon(cpy.getName(), cpy.getAPCost(), cpy.getDamage())
{}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &affect)
{
	setName(affect.getName());
	setAPcost(affect.getAPCost());
	setDamage(affect.getDamage());
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}