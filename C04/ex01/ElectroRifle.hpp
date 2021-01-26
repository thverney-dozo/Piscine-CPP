/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ElectroRifle.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:41:19 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:41:45 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELECTRORIFLE_HPP
# define ELECTRORIFLE_HPP

# include "AWeapon.hpp"

class ElectroRifle: public AWeapon
{
    public:
		ElectroRifle();
		ElectroRifle(const ElectroRifle &cpy);
		ElectroRifle	&operator=(const ElectroRifle &affect);
		virtual     ~ElectroRifle();
		void        attack(void) const;
};

#endif