#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *_weapon;
        std::string _name;
    public:
            HumanB(std::string name);
            ~HumanB();

            void    setWeapon(Weapon &weapon);
            void    attack();
};

#endif