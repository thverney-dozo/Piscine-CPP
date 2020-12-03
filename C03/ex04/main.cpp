/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:24:55 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/30 13:18:13 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap	Gilbert_Montagne_exe("Gilbert_Montagne_exe");
	ScavTrap	Ray_Charles_exe("Ray_Charles_exe");

	srand(time(0));
	Gilbert_Montagne_exe.meleeAttack("Ray_Charles_exe");
	Gilbert_Montagne_exe.rangedAttack("Ray_Charles_exe");
	Gilbert_Montagne_exe.vaulthunter_dot_exe("Ray_Charles_exe");
	Gilbert_Montagne_exe.ninjaShoebox(Ray_Charles_exe);
	return (0);
}