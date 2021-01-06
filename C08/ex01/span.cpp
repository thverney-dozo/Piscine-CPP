/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:09 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/06 15:15:55 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _max(2147483647)
{}

Span::Span(unsigned n) : _max(n)
{}

Span::Span(const Span &cpy)
{
	this->_max = cpy._max;
}

Span &Span::operator=(const Span &affect)
{
	this->_max = affect._max;
	return *this;
}

