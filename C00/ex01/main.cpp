/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 08:14:00 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/05 11:56:48 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#include <stdio.h>
#include <cstdlib>


int     parse_index(std::string search_index, int nb_of_contact)
{
    if (search_index[1] != '\0')
	return (-1);
    int isdi = search_index[0];
    isdi = isdi - 48;
    if (isdi < 1 || isdi > nb_of_contact)
        return (-1);
    return(isdi);
}

int     main()
{
    contact     C;
    int         nb_of_contact;
    int         index;
    std::string str;

    nb_of_contact = 0;
    std::cout << " __    _   _     __    __  __  ____  ___     __      __     _   _" << std::endl;
    std::cout << "|   ) | | | |  /    \\ |  \\| | | __| |  _)  /    \\  /    \\  | | / /" << std::endl;
    std::cout << "| P   |  H  | |  O  | |  N  | | E_  | B_  |  O  | |  O  |  |  K \\" << std::endl;
    std::cout << "|_|   |_| |_|  \\____/ | | \\_| |___| |___)  \\____/  \\____/  |_| \\_\\" << std::endl;
    std::cout << "                       ADD, SEARCH && EXIT " << std::endl;
    while (42)
    {
        std::cout << "<_PhoneBook_> ";
        std::getline(std::cin, str, '\n');
        if (str == "ADD")
        {
            if (nb_of_contact < 8)
            {
                C.tab[nb_of_contact].fill(nb_of_contact);
                nb_of_contact++;
            }
            else
                std::cout << "Too many contacts" << std::endl;

        }
        else if (str == "SEARCH")
        {
            if (nb_of_contact == 0)
                std::cout << "No contacts were found" << std::endl;
            else
            {
                index = 0;
                while(index < nb_of_contact)
                {
                    C.tab[index].disp_contact();
                    index++;
                }
                std::cout << "Enter an index's contact:  ";
                std::string search_index;
                std::getline(std::cin, search_index, '\n');
                std::cout << std::endl;
                if ((index = parse_index(search_index, nb_of_contact)) > 0)
                    C.tab[index - 1].disp_infos();
                else if (index == -1)
                    std::cout << "Invalid index" << std::endl;
            }
        }
        else if (str == "EXIT")
        {
            std::cout << "Exiting PhoneBook" << std::endl;
            exit(0);
        }
        std::cin.clear();
    }
}
