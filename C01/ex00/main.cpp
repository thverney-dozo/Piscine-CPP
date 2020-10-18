/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:11:17 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/05 12:15:25 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony pony1;

    pony1.run();
    pony1.sleep();
}

void    ponyOnTheHeap()
{
    Pony* pony2 = new Pony();
    pony2->run();
    pony2->sleep();
    delete pony2;
}

int     main()
{
    std::cout << "Pony on the Stack" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl;
    std::cout << "Pony on the Heap" << std::endl;
    ponyOnTheHeap();
    return (0);
}