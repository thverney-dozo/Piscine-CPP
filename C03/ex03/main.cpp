/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:24:55 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 20:11:16 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    {
        FragTrap    Gilbert_Montagne_exe("Gilbert_Montagne_exe");
        FragTrap    Ray_Charles_exe("Ray_Charles_exe");

        // Gilbert_Montagne_exe vs Ray_Charles_exe
        std::cout << std::endl << "ROUND 1" << std::endl;
        Gilbert_Montagne_exe.meleeAttack(Ray_Charles_exe.getName());
        Ray_Charles_exe.takeDamage(Gilbert_Montagne_exe.getMeleeAttackDamage());

        // Ray_Charles_exe vs Gilbert_Montagne_exe
        std::cout << std::endl << "ROUND 2" << std::endl;
        Ray_Charles_exe.rangedAttack(Gilbert_Montagne_exe.getName());
        Gilbert_Montagne_exe.takeDamage(Ray_Charles_exe.getRangedAttackDamage());

        // Random Attack
        std::cout << std::endl << "ROUND 3" << std::endl;
        Gilbert_Montagne_exe.vaulthunter_dot_exe(Ray_Charles_exe.getName());
        Ray_Charles_exe.takeDamage(Gilbert_Montagne_exe.getVaulHunter_dot_exeDamage());
	}
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "NOW SCAVENGERS!!!" << std::endl; 
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
    {
        ScavTrap    Gilbert_Montagne_exe("Gilbert_Montagne_exe");
        ScavTrap    Ray_Charles_exe("Ray_Charles_exe");

        // Gilbert_Montagne_exe vs Ray_Charles_exe
        std::cout << std::endl << "ROUND 1" << std::endl;
        Gilbert_Montagne_exe.meleeAttack(Ray_Charles_exe.getName());
        Ray_Charles_exe.takeDamage(Gilbert_Montagne_exe.getMeleeAttackDamage());

        // Ray_Charles_exe vs Gilbert_Montagne_exe
        std::cout << std::endl << "ROUND 2" << std::endl;
        Ray_Charles_exe.rangedAttack(Gilbert_Montagne_exe.getName());
        Gilbert_Montagne_exe.takeDamage(Ray_Charles_exe.getRangedAttackDamage());

        // Random Attack
        std::cout << std::endl << "ROUND 3" << std::endl;
        Gilbert_Montagne_exe.challengeNewcomer(Ray_Charles_exe.getName());
    }       
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "NOW NINJAS!!!" << std::endl; 
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
        std::cout << "$" << std::endl;
    {
        ScavTrap    Gilbert_Montagne_exe("Gilbert_Montagne_exe");
        FragTrap    Ray_Charles_exe("Ray_Charles_exe");
        NinjaTrap   Ninja_Ckson_exe("Ninja_Ckson_exe");
        NinjaTrap   Ninja_Kichan_exe("Ninja_Kichan_exe");

        std::cout << std::endl;
        std::cout << "FINAL ROUND" << std::endl;
        std::cout << std::endl;
        
        Ninja_Ckson_exe.ninjaShoebox(Ray_Charles_exe);
        Ninja_Ckson_exe.ninjaShoebox(Gilbert_Montagne_exe);
        Ninja_Ckson_exe.ninjaShoebox(Ninja_Kichan_exe);
        Ninja_Ckson_exe.ninjaShoebox(Ray_Charles_exe);
        Ninja_Ckson_exe.ninjaShoebox(Gilbert_Montagne_exe);
        Ninja_Ckson_exe.ninjaShoebox(Ninja_Kichan_exe);
        std::cout << std::endl;
    }
    return (0);
}