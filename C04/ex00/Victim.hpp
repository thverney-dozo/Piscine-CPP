/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:48:52 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 22:09:13 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
    protected:
        std::string _name;
        Victim();
    public:
        Victim(std::string name);
        Victim (const Victim&);
        virtual ~Victim();
        Victim &operator=(const Victim &c);
        const std::string &getName() const;

        virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &val);

#endif