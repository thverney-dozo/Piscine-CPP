/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:04:55 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:35 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name):
	_name(name), _equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(const Character &cpy):
	_name(cpy._name), _equipped(0)
{
	for (int i = 0; i < cpy._equipped; i++)
		this->equip(cpy._inventory[i]->clone());
	for (int i = this->_equipped; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < this->_equipped; i++)
	{
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
	}
}

Character &Character::operator=(const Character &affect)
{
	this->_name = affect._name;
	for (int i = 0; i < this->_equipped; i++)
		delete this->_inventory[i];
	this->_equipped = 0;
	for (int i = 0; i < affect._equipped; i++)
		this->equip(affect._inventory[i]->clone());
	for (int i = this->_equipped; i < 4; i++)
		this->_inventory[i] = 0;
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (m == 0)
		return ;
	if (this->_equipped == 4)
		return ;
	for (int i = 0; i < this->_equipped; i++)
	{
		if (this->_inventory[i] == m)
			return ;
	}
	this->_inventory[this->_equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_equipped || this->_inventory[idx] == 0)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = 0;
	}
	this->_equipped--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_equipped || this->_inventory[idx] == 0)
		return ;
	this->_inventory[idx]->use(target);
}