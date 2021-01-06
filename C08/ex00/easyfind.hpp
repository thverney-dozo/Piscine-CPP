/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:19:26 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/09 16:40:28 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <exception>

template<typename T> int easyfind(T f, int n)
{
    typename T::iterator where;

    where = std::find(f.begin(), f.end(), n);
    if (where == f.end())
	    throw std::exception();
	return (*where);
}

#endif