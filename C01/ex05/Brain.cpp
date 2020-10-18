/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:59:20 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 11:59:21 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _Feelings(8), _Logic(9){}

Brain::~Brain(void){}

std::string Brain::identify() const
{
    std::ostringstream adress;
	adress << this;
	return adress.str();
}
