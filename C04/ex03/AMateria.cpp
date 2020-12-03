/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:02:04 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:28 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type):
	_type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}

AMateria &AMateria::operator=(const AMateria &affect)
{
	this->_xp = affect.getXP();
	this->_type = affect.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}