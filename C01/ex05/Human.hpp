#ifndef _HUMAN_H_
# define _HUMAN_H_

# include <string>
# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human
{
    public:
        Human(void);
        ~Human(void);
        const Brain &getBrain(void);
        std::string identify(void);
    private:
        const Brain _cortex;
};


#endif
