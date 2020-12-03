/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:55:53 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/04 18:17:49 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        int             _index;
        ISpaceMarine	**_units;

	public:
		Squad();
		Squad(const Squad &cpy);
		Squad	        &operator=(const Squad &affect);
		virtual		    ~Squad();

        int             getCount() const;
        ISpaceMarine	*getUnit(int index) const;

        virtual int     push(ISpaceMarine *unit);
};


#endif