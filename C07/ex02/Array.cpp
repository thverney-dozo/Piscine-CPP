/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:40:12 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/03 04:58:45 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _tab(NULL), _n(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _tab(new T(n)), _n(n)
{}

template <typename T>
Array<T>::~Array()
{
	if (_tab)
		delete _tab;
}

template <typename T>
unsigned int    Array<T>::getSize() const
{
	return _n;
}

template <typename T>
Array<T>::Array(const Array &cpy) : _tab(NULL), _n(0)
{
	*this = cpy;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &affect)
{
	T   *tmp = new T(affect.getSize());

	for (unsigned int i = 0; i < affect.getSize(); i++)
	    tmp[i] = affect._tab[i];
	delete _tab;
	_tab = tmp;
	_n = affect.getSize();
	return *this;
}

template <typename T>
T  	&Array<T>::operator[](unsigned int i) const
{
	if (!_tab || i < 0 || (unsigned int)i >= _n)
		throw std::exception();
	return this->_tab[i];
}