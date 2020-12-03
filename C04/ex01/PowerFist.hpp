/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:59:29 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 22:28:18 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_hpp
# define PowerFist_hpp

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &cpy);
		PowerFist	&operator=(const PowerFist &affect);
		virtual		~PowerFist();
		void		attack(void) const;
};

#endif