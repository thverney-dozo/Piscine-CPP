/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:15:04 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/30 15:11:08 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *t, size_t len, void (&fn)(T const &))
{
    for (size_t i = 0; i < len; i++)
        fn(t[i]);
}

template <typename T>
void disp_T(T const &t)
{
    std::cout << t << std::endl;
}

#endif