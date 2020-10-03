#ifndef _WEAPON_H_
# define _WEAPON_H_

#include "Weapon.hpp"
#include <string>

class Weapon
{
    private:
            std::string _type;

    public:
            Weapon(std::string type);
            ~Weapon(void);
            const std::string &getType();
            void setType(const std::string type);
};

#endif