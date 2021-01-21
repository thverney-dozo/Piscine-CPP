/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:00:19 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/21 13:56:06 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	read_file(std::ifstream *input, std::string name, std::string s1, std::string s2)
{
	char			c;
	unsigned long	i;
	std::string		s;
	std::string		save;
	std::ofstream	output;

    name = name + ".replace";
    output.open(name.c_str());
	while (input->get(c))
	{
		i = 0;
		if (c == s1[i])
		{
			while (c == s1[i])
			{
				save += c;
				input->get(c);
                i++;
			}
			if (i == s1.length())
				s += s2;
			else
				s += save;
			save = "";
		}
			s += c;
	}
	std::cout << "Output : " << s;
	output << s;
	input->close();
	output.close();
}

int     usage(int err)
{
    if (err == 1)
        std::cout << "Usage ->(./replace filename s1 s2)" << std::endl;
    if (err == 2)
       std::cout << "Neither s1 and s2 can't be empty" << std::endl;    
    if (err == 3)
		std::cout << "File open fail\n";
    return (1);
}

int main(int ac, char **av)
{
	std::string		name;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
		return (usage(1));
	if (av[2][0] == '\0' || av[3][0] == '\0')
		return (usage(2));
	name = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream	input;

    input.open(name.c_str());
	if (input)
		read_file(&input, name, s1, s2);
	else
		return (usage(3));
	return (0);
}
