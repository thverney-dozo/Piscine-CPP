/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:29:09 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 18:13:18 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type)
{}

Enemy::Enemy(const Enemy &cpy)
{
	*this = cpy;
}
void    Enemy::setType(std::string const &type)
{
    _type = type;
}

void    Enemy::setHP(int hp)
{
    _hp = hp;
}

Enemy   &Enemy::operator=(const Enemy &affect)
{
    _hp = affect._hp;
    _type = affect._type;
    return(*this);
}

Enemy::~Enemy()
{}

std::string Enemy::getType() const
{
    return(_type);
}

int     Enemy::getHP() const
{
    return(_hp);
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    _hp = _hp - damage;
    if (_hp < 0)
        _hp = 0;
}
