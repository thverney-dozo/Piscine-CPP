/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:29:43 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:17:25 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main()
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        James greg("greg");
        std::cout << robert << jim << joe << greg;
        robert.polymorph(jim);
        robert.polymorph(joe);
        robert.polymorph(greg);
    }
    for(int i=0; i<4; i++){std::cout << std::endl;}
    {
        Sorcerer steve("Steve", "the Pyromaniac");
        std::cout << steve << std::endl;
        Victim jack("Jack");
        Victim tmp = jack;
        Peon peter("Peter");
        Peon peterCopy = peter;
        James al("Al");
        James alCopy = al;
        Victim jackCopy(jack);
        steve.polymorph(jack);
        steve.polymorph(peter);
        steve.polymorph(peterCopy);
        steve.polymorph(al);
        std::cout << jack << std::endl;
    }
}