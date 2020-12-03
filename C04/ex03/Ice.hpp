/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:28:43 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:45 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
				Ice();
				Ice(const Ice &cpy);
	virtual		~Ice();
	Ice			&operator=(const Ice &affect);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif