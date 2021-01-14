/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:21:59 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/14 19:50:15 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>(){};
		MutantStack(MutantStack const  & cpy): std::stack<T>(cpy){};
		virtual ~MutantStack(){};

		MutantStack &operator=(MutantStack const &affect) 
        {
			return (std::stack<T>::operator=(affect));
		};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
        {
            return std::stack<T>::c.begin();
        };
		iterator end()
        {
            return std::stack<T>::c.end();
        };
		
};

#endif