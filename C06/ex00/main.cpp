/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:02:00 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/25 00:29:22 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>
#include <climits>

void    ft_convert(char *arg)
{
	std::string str;
    int   		start;
    int   		len;
	double 		db;

    start = 0;
    len = 0;
    while (arg[start] && std::isspace(arg[start]))
        start++;
    while (arg[start + len] && !std::isspace(arg[start + len]))
        len++;
    str = std::string(arg, start, len);
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		db = str[0];
	else
	{
		try
		{
			db = std::stod(str);
		}
		catch (std::exception &e)
		{
			std::cout << "No conversion found!" << std::endl;
			std::cout << "char:   impossible" << std::endl;
			std::cout << "int:    impossible" << std::endl;
			std::cout << "float:  impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	std::cout << "char:   ";
	if (db < CHAR_MIN || db > CHAR_MAX || isnan(db))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(db))
		std::cout << static_cast<unsigned char>(db) << std::endl;
	else
		std::cout << "non displayable" << std::endl;
	std::cout << "int:    ";
	if (db >= INT_MIN && db <= INT_MAX && !isnan(db) && !isinf(db))
		std::cout << static_cast<int>(db) << std::endl;
	else
		std::cout << "impossible " << std::endl;
	std::cout << "float:  ";
	if (isnan(db))
		std::cout << "nan";
	else if (isinf(db))
		std::cout << (db < 0 ? "-" : "") << "inf";
	else
		std::cout << static_cast<float>(db);
	std::cout << "f" << std::endl;
	std::cout << "double: ";
	if (isnan(db))
		std::cout << "nan" << std::endl;
	else if (isinf(db))
		std::cout << (db < 0 ? "-" : "") << "inf" << std::endl;
	else
		std::cout << db << std::endl;
}

int     main(int ac, char **av)
{
    if (ac != 2)
    {
		    std::cout << "Usage : ./convert <number>" << std::endl;
		    return (1);
    }
    ft_convert(av[1]);
    return(0);
}