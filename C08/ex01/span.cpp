/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:09 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/11 11:44:47 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

char const *Span::SpanFullException::what() const throw()
{
	return "Error: N limited capacity is full";
}

char const *Span::SpanNoNumException::what() const throw()
{
	return "Error: N must be > 1";
}

Span::Span() : _Nmax(2147483647)
{}

Span::Span(unsigned n) : _Nmax(n)
{}

Span::Span(const Span &cpy)
{
	this->_Nmax = cpy._Nmax;
}

Span &Span::operator=(const Span &affect)
{
	this->_Nmax = affect._Nmax;
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_list.size() >= max)
		throw SpanFullException();
	this->_list.push_back(n);
}

int	Span::longestSpan()
{
	int		i;
	int		tmp;
	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	if (this->_list.size() <= 1)
		throw SpanNoNumException();
	i = 0;
	it1 = this->_list.begin();
	while (it1 != this->_list.end())
	{
		it2 = this->_list.begin();
		while (it2 != this->_list.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp > i)
					i = tmp;
			}
			it2++;
		}	
		it1++;
	}
	return (i);
}

int Span::shortestSpan()
{
	int		i;
	int		tmp;
	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	if (this->_list.size() <= 1)
		throw SpanNoNumException();
	i = 0;
	it1 = this->_list.begin();
	while (it1 != this->_list.end())
	{
		it2 = this->_list.begin();
		while (it2 != this->_list.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp < i)
					i = tmp;
				if (i == 0)
					return (0);
			}
			it2++;
		}	
		it1++;
	}
	return (i);
}