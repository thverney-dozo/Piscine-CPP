/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagmaSpider.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:47:07 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:48:53 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MagmaSpider.hpp"


MagmaSpider::MagmaSpider(): Enemy(80, "MagmaSpider")
{
    std::cout << "* plplplplplplpl *" << std::endl;
}

MagmaSpider::~MagmaSpider()
{
    std::cout << "* Srrrrrrrrrffff *" << std::endl;
}

MagmaSpider::MagmaSpider(const MagmaSpider &cpy): Enemy(cpy.getHP(), cpy.getType())
{
    std::cout << "* plplplplplplpl *" << std::endl;
}

MagmaSpider &MagmaSpider::operator=(const MagmaSpider &affect)
{
    setType(affect.getType());
    setHP(affect.getHP());
    return (*this);
}
