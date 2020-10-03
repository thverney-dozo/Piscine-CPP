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