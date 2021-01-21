/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:15 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/21 14:40:01 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed               &operator=(const Fixed &rhs);
    int                 getRawBits(void) const;
    void                setRawBits(int const);

private:
    int                 _fixedPoint;
    static const int    _nbBits;
};

#endif