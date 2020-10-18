/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:11 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:12 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_H_
# define _ZOMBIEEVENT_H_

# include "Zombie.hpp"
# include <cstdlib>
# include <iostream>
# include <ctime>

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);

		void randomChump(void);

	private:
		std::string _type;
		const static std::string _names[];
};

#endif