/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:12 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/11 11:44:28 by thverney         ###   ########.fr       */
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
# include <exception>

class Span
{
	private:
		unsigned int 		_Nmax;
		std::vector<int>  	_list;

	public:
		Span();
		Span(const Span &cpy);
		Span(unsigned int n);
		Span	&operator=(const Span &affect);
		virtual	~Span();
		class SpanNoNumException: public std::exception
		{
			public:
				char const *what() const throw();
		}
		class SpanNoNumException: public std::exception
		{
			public:
				char const *what() const throw();
		}
		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif