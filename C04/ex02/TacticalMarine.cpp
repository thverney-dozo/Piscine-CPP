/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:11:32 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/04 18:16:25 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &c)
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
    *this = c;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &c)
{
    (void)c;
    std::cout << "Aaargh ..." << std::endl;
    std::cout << "Tactical Marine ready for action !" << std::endl;
    return *this;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}