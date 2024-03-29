/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:53:13 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:24:25 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
    private:
        Peon();

    public:
        Peon(std::string name);
        Peon (const Peon& cpy);
        Peon &operator=(const Peon& affect);
        virtual ~Peon();

        virtual void getPolymorphed() const;
};


#endif