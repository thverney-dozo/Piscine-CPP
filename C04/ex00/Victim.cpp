/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:48:45 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 20:53:10 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(): _name("Dorian")
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &cpy): _name(cpy._name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &s)
{
    std::cout << "Victim " << _name << " died for no apparent reason!" << std::endl;
    _name = s._name;
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
    return *this;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
    return _name;
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &val)
{
    out << "I'm " << val.getName() << " and I like otters!" << std::endl;
    return (out);   
}