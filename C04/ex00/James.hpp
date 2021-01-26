/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   James.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:31:15 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 23:45:30 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JAMES_HPP
#define JAMES_HPP

#include <iostream>
#include <string>

#include "Victim.hpp"

class James : public Victim
{
	private:
        James();
    public:
        James(std::string name);
        James (const James& cpy);
        James &operator=(const James& affect);
        virtual ~James();

        virtual void getPolymorphed() const;
};
#endif