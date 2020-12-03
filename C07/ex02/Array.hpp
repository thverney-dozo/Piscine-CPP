/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:40:14 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/03 04:58:48 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class	Array
{
        public:
            Array();
            Array(unsigned int n);
            Array(Array const &src);
            Array &operator=(Array const &src);
            T &operator[](unsigned int n) const;
            virtual ~Array();
            unsigned int	getSize() const;
        private:
            T				*_tab;
            unsigned int	_n;
};

#endif