/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:57:01 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 22:28:20 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &cpy);
		PlasmaRifle	&operator=(const PlasmaRifle &affect);
		virtual     ~PlasmaRifle();
		void        attack(void) const;
};

#endif