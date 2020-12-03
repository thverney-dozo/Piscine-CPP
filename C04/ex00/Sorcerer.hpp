/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:40 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 22:07:07 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
        Sorcerer();
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer (const Sorcerer&);
        virtual ~Sorcerer();
        Sorcerer &operator=(const Sorcerer &c);

        const std::string &getName() const;
        const std::string &getTitle() const;

        void polymorph(Victim const &vicos) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &val);

#endif
