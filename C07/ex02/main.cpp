/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:40:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/03 06:21:34 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int			main(void)
{
	unsigned int	i;
	Array<int>		tab(5);

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	
	std::cout << "Test with int array" << std::endl << "#####################################################" << std::endl;
	std::cout << "## size of array = " << tab.getSize() << "                               ##"<< std::endl;
	std::cout << "## array = {";
	for (i = 0; i < tab.getSize(); i++)
	{
		if (i >= 0 && i < (tab.getSize()))
			std::cout << tab[i] << ", ";
		else
			std::cout << tab[i] << "}";
	}
	std::cout << "                        ##" << std::endl;
	try
	{
		std::cout << "## Trying tab[4] = " << tab[4] << "                               ##" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range" << std::endl;
	}
	try
	{
		std::cout << "## Trying tab[5] = " << tab[5] << "           ##" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range ##" << std::endl;
	}
	std::cout << "#####################################################" << std::endl << std::endl;

	Array<char>		tab_char(5);

	tab_char[0] = 's';
	tab_char[1] = 'a';
	tab_char[2] = 'l';
	tab_char[3] = 'u';
	tab_char[4] = 't';
	std::cout << std::endl << std::endl;
	std::cout << "Test with char array" << std::endl << "##########################################################" << std::endl;
	std::cout << "## size = " << tab_char.getSize() << "                                             ##" << std::endl;
	std::cout << "## value = {";
	for (i = 0; i < tab_char.getSize(); i++)
	{
		if (i >= 0 && i < (tab_char.getSize() - 1))
			std::cout << tab_char[i] << ", ";
		else
			std::cout << tab_char[i] << "}";
	}
	std::cout << "                              ##" << std::endl;
	try
	{
		std::cout << "## Trying tab_char[4] = "<< tab_char[4] << "                               ##" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "## Error: array index out of range" << std::endl;
	}
	try
	{
		std::cout << "## Trying tab_char[5] = "<< tab_char[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range ##" << std::endl;
	}
	std::cout << "##########################################################" << std::endl << std::endl;

	Array<float>	tab_float(3);

	tab_float[0] = 11.11;
	tab_float[1] = 22.22;
	tab_float[2] = 33.33;

	std::cout << std::endl << std::endl;
	std::cout << "Test with float" << std::endl << "###########################################################" << std::endl;
	std::cout << "## value = {";
	for (i = 0; i < tab_float.getSize(); i++)
	{
		if (i >= 0 && i < (tab_float.getSize() - 1))
			std::cout << tab_float[i] << ", ";
		else
			std::cout << tab_float[i] << "}";
	}
	std::cout << "                         ##" << std::endl;
	try
	{
		std::cout << "## Trying tab_float[2] = "<< tab_float[2] << "                           ##" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range ##" << std::endl;
	}
	try
	{
		std::cout << "## Trying tab_float[3] = "<< tab_float[3] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range ##" << std::endl;
	}
	std::cout << "###########################################################" << std::endl << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "Test assignation tab_char2 = tab_char" << std::endl << "#############################" << std::endl;
	
	Array<char>		tab_char2(3);

	tab_char2 = tab_char;
	std::cout << "## value = {";
	for (i = 0; i < tab_char2.getSize(); i++)
	{
		if (i >= 0 && i < (tab_char2.getSize() - 1))
			std::cout << tab_char2[i] << ", ";
		else
			std::cout << tab_char2[i] << "}";
	}
	std::cout << " ##" << std::endl;
	std::cout << "#############################" << std::endl << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "Test constructor copy tab_char3(tab_char2)" << std::endl << "#############################" << std::endl;
	Array<char>		tab_char3(tab_char2);    
	std::cout << "## value = {";
	for (i = 0; i < tab_char3.getSize(); i++)
	{ 
		if (i >= 0 && i < (tab_char3.getSize() - 1))
			std::cout << tab_char3[i] << ", ";
		else
			std::cout << tab_char3[i] << "} ##" << std::endl;
	}
	std::cout << "#############################" << std::endl;
	return 0;
}