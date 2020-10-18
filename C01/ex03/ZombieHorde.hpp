/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:45 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:45 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include <iostream>
# include <string>
# include <locale>
# include <cstdlib>
# include <iomanip>
# include "Zombie.hpp"

class   ZombieHorde
{
    public:
            ZombieHorde(int n);
            ~ZombieHorde(void);

            void        announce();

    private: 
        int _count;
        Zombie *Horde;
		static std::string _names[10];
		static std::string _types[3];
};

#endif