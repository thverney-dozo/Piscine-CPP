/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:10:27 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/04 18:15:24 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &c)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = c;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &c)
{
    (void)c;
    std::cout << "I'll be back ..." << std::endl;
    std::cout << "* teleports from space *" << std::endl;
    return *this;
}

ISpaceMarine *AssaultTerminator::clone() const
{
	return (new AssaultTerminator());
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}