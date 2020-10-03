#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>
# include <locale>
# include <cstdlib>
# include <iomanip>

class   Zombie
{
    public:
            Zombie(std::string _name,std::string _type);
            ~Zombie(void);

            std::string getName();
            std::string getType();
            void	    randomChump(void);
            void        announce(void);
            void        advert();

    private:
            std::string _name;
            std::string _type;
};

#endif