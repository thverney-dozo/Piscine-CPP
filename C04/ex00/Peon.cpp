/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:53:15 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:25:11 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
} 

Peon::Peon(const Peon &cpy): Victim(cpy)
{
    std::cout << "Some random Peon called " << _name << " just appeared!" << std::endl;
}

Peon &Peon::operator=(const Peon &affect)
{
    _name = affect._name;
    return *this;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
}
