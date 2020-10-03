#ifndef _PONY_HPP_
#define _PONY_HPP_

# include <iostream>
# include <stdio.h>
# include <string>
# include <locale>
# include <iomanip>

class Pony
{
    public:
        int _head;
        int _tail;
        int _body;
        int _legs;
        Pony();
        ~Pony();
        void    run();
        void    sleep();
};

#endif