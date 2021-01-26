/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ElectroRifle.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:41:52 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:54:25 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ElectroRifle.hpp"

ElectroRifle::ElectroRifle() : AWeapon("ElectroRifle", 4, 15)
{}

ElectroRifle::ElectroRifle(const ElectroRifle &cpy) : AWeapon(cpy.getName(), cpy.getAPCost(), cpy.getDamage())
{}

ElectroRifle &ElectroRifle::operator=(const ElectroRifle &affect)
{
	setName(affect.getName());
	setAPcost(affect.getAPCost());
	setDamage(affect.getDamage());
	return (*this);
}

ElectroRifle::~ElectroRifle()
{}

void ElectroRifle::attack() const
{
	std::cout << "* bbzzzzrrrrr bbzzzrrrrr *" << std::endl;
}