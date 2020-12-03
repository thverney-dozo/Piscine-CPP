/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:29:43 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/02 21:14:01 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main()
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    for(int i=0; i<4; i++){std::cout << std::endl;}
    {
        Sorcerer steve("Steve", "the Pyromaniac");
        std::cout << steve << std::endl;
        Victim jack("Jack");
        Victim tmp = jack;
        Peon peter("Peter");
        Peon peterCopy = peter;
        Victim jackCopy(jack);
        steve.polymorph(jack);
        steve.polymorph(peter);
        steve.polymorph(peterCopy);
        std::cout << jack << std::endl;
    }
}