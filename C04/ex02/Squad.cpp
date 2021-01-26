/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:55:55 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 02:07:13 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    _units = new ISpaceMarine*[0];
    _index = 0;
}

Squad::Squad(const Squad& cpy) : _index(cpy._index)
{
	_units = new ISpaceMarine* [cpy._index];
	for (int i = 0; i < cpy._index; i++)
		_units[i] = cpy._units[i]->clone();
}

Squad::~Squad()
{
    for(int i = 0; i < _index; i++)
        delete _units[i];
    delete[] _units;
    _units = 0;
}

Squad &Squad::operator=(const Squad &affect)
{
	for (int i = 0; i < _index; i++)
		delete _units[i];
	delete []_units;
	_units = 0;
	_index = 0;
	for (int i = 0; i < affect.getCount(); i++)
		this->push(affect.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount() const
{
	return (_index);
}

ISpaceMarine *Squad::getUnit(int n) const
{
    if (n < 0 || n > _index)
        return (NULL);
	return (_units[n]);
}

int Squad::push(ISpaceMarine *unit)
{
    if (unit == 0)
        return (_index);
    for (int i = 0; i < _index; i++)
		if (_units[i] == unit)
			return (_index);
    ISpaceMarine **tmp = new ISpaceMarine*[_index + 1];
	for (int i = 0; i < _index; i++)
		tmp[i] = _units[i];
	tmp[_index++] = unit;
	if (_units != 0)
		delete[] _units;
	_units = tmp;
	return (_index);
}

