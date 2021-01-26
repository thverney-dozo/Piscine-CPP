/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:11:31 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 02:01:28 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &other);
		~TacticalMarine();
		TacticalMarine		&operator=(const TacticalMarine &other);
		virtual void			battleCry() const;
		virtual void			meleeAttack() const;
		virtual void			rangedAttack() const;
		virtual ISpaceMarine	*clone() const;
};

#endif