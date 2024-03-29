/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:10:50 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:10:51 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieEvent event;

    event.setZombieType("Crowling zombie");
    Zombie *zombie1 = event.newZombie("Lil Z");
	Zombie *zombie2 = event.newZombie("OhHiMark");

	event.setZombieType("chump");
	event.randomChump();

	delete zombie1;
	delete zombie2;

}