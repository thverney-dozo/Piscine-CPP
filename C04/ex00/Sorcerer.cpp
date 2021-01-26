/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:44 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:12:20 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy): _name(cpy._name), _title(cpy._title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &s)
{
    _name = s._name;
    _title = s._title;
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
    return _name;
}

const std::string &Sorcerer::getTitle() const
{
    return _title;
}

void Sorcerer::polymorph(Victim const &vicos) const
{
    vicos.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &val)
{
    out << "I am " << val.getName() << ", " << val.getTitle() << ", and I like ponies!" << std::endl;
    return (out);   
}