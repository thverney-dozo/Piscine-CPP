/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 07:36:25 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/04 08:07:14 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int ac, char **av)
{
    int args;
    std::string::size_type i;
    std::locale loc;

    (void)av;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    if (ac > 1)
    {
        args= 1;
        while (args < ac)
        {
            i = 0;
            std::string str = av[args];
            while (i < str.length())
            {
                std::cout << std::toupper(str[i], loc);
                i++;
            }
            args++;
        }
            std::cout << std::endl;
    }
}