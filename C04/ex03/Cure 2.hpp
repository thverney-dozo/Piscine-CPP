/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:20:37 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:41 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
				Cure();
				Cure(const Cure &cpy);
	virtual		~Cure();
	Cure		&operator=(const Cure &affect);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif