/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:03:03 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/01 10:08:05 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap( T& first, T& second)
{
    T tmp;

    tmp = first;
    first = second;
    second = tmp;
}

template<typename T>
T min(T& first, T& second)
{
    return (first < second ? first : second);
}

template<typename T>
T max(T& first, T& second)
{
    return (first > second ? first : second);
}

#endif