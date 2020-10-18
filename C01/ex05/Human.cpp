/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:59:30 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 11:59:31 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void){}

Human::~Human(void){}

const Brain& Human::getBrain(void)
{
	return this->_cortex;
}

std::string Human::identify(void)
{
	return this->_cortex.identify();
}