/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:02:05 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 00:03:03 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &cpy): Enemy(cpy.getHP(), cpy.getType())
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &affect)
{
    std::cout << "Aaargh ..." << std::endl;
    setType(affect.getType());
    setHP(affect.getHP());
    std::cout << "Gaaah. Break everything !" << std::endl;
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    if (damage < 3)
        damage = 3;
    Enemy::takeDamage(damage - 3);
}