/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:19:32 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:54 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	_current(0)
{
	for (int i = 0; i < 4; i++)
		this->_sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &cpy):
	_current(0)
{
	for (int i = 0; i < cpy._current; i++)
		this->learnMateria(cpy._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_sources[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_current; i++)
		delete this->_sources[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &affect)
{
	for (int i = 0; i < this->_current; i++)
		delete this->_sources[i];
	this->_current = 0;
	for (int i = 0; i < affect._current; i++)
		this->learnMateria(affect._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_sources[i] = 0;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_current  == 4 || m == 0)
		return ;
	for (int i = 0; i < this->_current; i++)
	{
		if (this->_sources[i] == m)
			return ;
	}
	this->_sources[this->_current++] = m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_current; i++)
	{
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	return (0);
}