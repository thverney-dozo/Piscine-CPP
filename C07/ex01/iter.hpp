/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:15:04 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/01 10:31:13 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T *array, unsigned int length, void (*f)(T &e))
{
    for (unsigned int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void		uppercase(T &tab)
{
    tab = (tab >= 'a' && tab <= 'z') ? tab - 32 : tab;
}

template <typename T>
void		lowercase(T &tab)
{
    tab = (tab >= 'A' && tab <= 'Z') ? tab + 32 : tab;
}

template <typename T>
void		add(T &tab)
{
	tab += 1;
}

#endif