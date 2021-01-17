/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:00:19 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 12:00:20 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int     main(int ac, char **av)
{
    std::string         buffer;

    if (ac != 4)
    {
        std::cout << "Usage ->(./replace filename s1 s2)" << std::endl;
        return(0);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string output_str = filename + ".replace";
    if (s1.empty())
        std::cout << "s1 is empty" << std::endl;
    if (s2.empty())
        std::cout << "s2 " << (s1.empty()?"also ":"") << "is empty" << std::endl;
    if (s1.empty() || s2.empty())
        return (1);
    std::fstream input;
    std::fstream output;
    input.open(filename.c_str(), std::fstream::in);
    if (!input)
    {
        std::cout << "Error opening file" << std::endl;
        return(1);
    }
    output.open(output_str.c_str(), std::fstream::out);
    if (!output)
    {
	input.close();
        std::cout << "Error creating file" << std::endl;
        return (1);
    }
    if (s1 == " ")
	return (0);
    while (std::getline(input, buffer))
    {
        while (buffer.find(s1) != std::string::npos)
        {
            buffer.replace(buffer.find(s1), s1.length(), s2);
        }
        output << buffer;
    }
    if (buffer == "")
        output << std::endl;
    input.close();
    output.close();
    return (0);
}
