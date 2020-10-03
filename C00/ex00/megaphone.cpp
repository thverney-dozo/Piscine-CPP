#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>

int     main(int ac, char **av)
{
    int args;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else if (ac > 1)
    {
        args = 1;
        while (args < ac)
        {
            std::locale loc;
            std::string str= av[args];
            for (std::string::size_type i=0; i<str.length(); ++i)
                std::cout << std::toupper(str[i],loc);
            args++;
        }
    }
    return (0);
}
