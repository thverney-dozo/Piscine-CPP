/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:15:07 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/01 10:37:47 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int			main(void)
{
	int		i;
	int		num_tab[5] = {0, 1, 2, 3, 4};
	char	alpha_tab[18] = {"CHILL, CALM DOWN!"};
	char	alpha_tab2[16] = {"mmmmh, cookies!"};


	for (i = 0; i < 5; i++)
		std::cout << num_tab[i];
	std::cout << " Becomes : ";
	iter<int>(num_tab, 5, &add);
	for (i = 0; i < 5; i++)
		std::cout << num_tab[i];
	std::cout << std::endl;
    
	iter<char>(alpha_tab, 18, &lowercase);
	for (i = 0; i < 18; i++)
		std::cout << alpha_tab[i];
	std::cout << std::endl;

	iter<char>(alpha_tab2, 16, &uppercase);
	for (i = 0; i < 16; i++)
		std::cout << alpha_tab2[i];
	std::cout << std::endl;
    
	return 0;
}