/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:59:47 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 19:08:18 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual                 ~ISquad(void) {};
		virtual int             getCount(void) const = 0;
		virtual ISpaceMarine    *getUnit(int) const = 0;
		virtual int	            push(ISpaceMarine*) = 0;
};

#endif