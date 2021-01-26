/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   James.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:34:07 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:49:53 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "James.hpp"

James::James(std::string name): Victim(name)
{
    std::cout << "James james." << std::endl;
} 


James::James(const James& cpy) : Victim(cpy)
{}

James::~James()
{
	std::cout << "Nooooooooo...\n";
}

James &James::operator=(const James &affect)
{
	_name = affect._name;
    return *this;
}

void James::getPolymorphed() const
{
	std::cout << _name << " has been turned into a green Jammy!\n";
}