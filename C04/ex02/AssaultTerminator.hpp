/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:10:22 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/04 17:24:22 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
								AssaultTerminator();
								AssaultTerminator(const AssaultTerminator &other);
								~AssaultTerminator();
		AssaultTerminator		&operator=(const AssaultTerminator &other);
		virtual void			battleCry() const;
		virtual void			meleeAttack() const;
		virtual void			rangedAttack() const;
		virtual ISpaceMarine	*clone() const;
};

#endif