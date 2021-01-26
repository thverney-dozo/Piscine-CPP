/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:29:42 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:23:19 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
    _name(name), _apcost(apcost), _damage(damage)
{}

AWeapon::AWeapon(const AWeapon &w):
    _name(w._name), _apcost(w._apcost), _damage(w._damage)
{}

AWeapon::~AWeapon()
{}

AWeapon &AWeapon::operator=(const AWeapon &affect)
{
    _name = affect._name;
    _apcost = affect._apcost;
    _damage = affect._damage;
    return *this;
}

void AWeapon::setName(std::string name)
{
    _name = name;
}

void AWeapon::setDamage(int damage)
{
    _damage = damage;
}

void AWeapon::setAPcost(int apcost)
{
    _apcost = apcost;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _damage;
}

const std::string AWeapon::getName() const
{
    return _name;
}