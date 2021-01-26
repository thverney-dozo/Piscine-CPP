/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:48:45 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:22:26 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &cpy): _name(cpy._name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &s)
{
    _name = s._name;
    return *this;
}

Victim::~Victim()
{
    std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

const std::string &Victim::getName() const
{
    return _name;
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been polymorphed in a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &val)
{
    out << "I'm " << val.getName() << " and I like otters!" << std::endl;
    return (out);   
}