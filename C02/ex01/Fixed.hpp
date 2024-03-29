/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:27 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/18 18:25:28 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>


class Fixed
{
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed       &operator=(const Fixed &ob);
    int         getRawBits(void) const;
    void        setRawBits(int const);
    float       toFloat(void) const;
    int         toInt(void) const;

private:
    int                 _fixedPoint;
    static const int    _nbBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif