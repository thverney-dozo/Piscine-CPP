/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:15 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/18 18:25:16 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

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