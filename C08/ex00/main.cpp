/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:19:30 by aeoithd           #+#    #+#             */
/*   Updated: 2020/12/09 16:52:33 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> tab;

    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(5);
    std::cout << "1st test: search 3 and 10 in tab" << std::endl 
        << "2nd test: search 3 and 10 in tab2" << std::endl << std::endl;

    try
        {std::cout << easyfind(tab, 3) << " is in tab" << std::endl;}

	catch (std::exception &e)
	    {std::cout << "Error: Cannot find 3 in tab" << std::endl;}
	
    try
        {std::cout << easyfind(tab, 10) << std::endl;}
	
    catch (std::exception &e)
	    {std::cout << "Error: Cannot find 10 in tab" << std::endl;}
    
    std::deque<int> tab2(1,2);
    
    tab2.push_front(1);
    tab2.push_back(3);

    try
        {std::cout << easyfind(tab2, 3) << " is in tab2" <<std::endl;}
	
    catch (std::exception &e)
	    {std::cout << "Error: Cannot find 3 in tab2" << std::endl;}
    try
        {std::cout << easyfind(tab2, 10) << std::endl;}
	
    catch (std::exception &e)
	    {std::cout << "Error: Cannot find 10 in tab2" << std::endl;}
    
    return 0;
}
