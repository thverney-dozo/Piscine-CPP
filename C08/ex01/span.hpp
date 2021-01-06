/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:12 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/06 15:15:49 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
# include <climits>
# include <functional>

class Span
{
	private:
		unsigned int 		_max;
		std::vector<int>  	_list;

	public:
		Span();
		Span(const Span &cpy);
		Span(unsigned int n);
		Span	&operator=(const Span &affect);
		virtual	~Span();
		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif