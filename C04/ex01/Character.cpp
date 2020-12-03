/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:07:27 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 18:42:34 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name): _name(name)
{
    _ap = 40;
    _weapon = NULL;
}

Character::Character(const Character &cpy):
    _name(cpy._name), _ap(cpy._ap), _weapon(cpy._weapon)
{}

void    Character::setName(std::string name)
{
    _name = name;
}

void    Character::setAP(int ap)
{
    _ap = ap;
}

Character &Character::operator=(const Character &affect)
{
    _name = affect._name;
    _ap = affect._ap;
    _weapon = affect._weapon;
    return (*this);
}

Character::~Character()
{}

void    Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

std::string Character::getName() const
{
    return _name;
}

int Character::getAP() const
{
	return _ap;
}

AWeapon *Character::getWeapon() const
{
    return _weapon;
}

void    Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::attack(Enemy *enemy)
{
    if (_weapon == NULL)
        return ;
    if (_ap < _weapon->getAPCost())
        return ;
    _ap = _ap - _weapon->getAPCost();
    if (_ap < 0)
        _ap = 0;
    std::cout << _name << " attaque " << enemy->getType() << " with a "
        << _weapon->getName() << std::endl;
    _weapon->attack();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy && enemy->getHP() <= 0)
        delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character const &val)
{
    out << "I am " << val.getName() << " has "  << val.getAP() << " AP";
    if (val.getWeapon() == NULL)
        out << " and is unarmed" << std::endl;
    else
        out << " and carries a " << val.getWeapon()->getName() << std::endl;
    return (out);   
}
