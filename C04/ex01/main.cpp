/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:56:00 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/26 01:53:40 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <iostream>
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "ElectroRifle.hpp"
#include "MagmaSpider.hpp"

int main()
{
    {
        Character* moi = new Character("moi");
        std::cout << *moi;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();

        moi->equip(pr);
        std::cout << *moi;
        moi->equip(pf);
        moi->attack(b);
        std::cout << *moi;
        moi->equip(pr);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
    }
    for(int i=0; i<4; i++){std::cout << std::endl;}
    {
        Character* snoop= new Character("Snoop");
        std::cout << *snoop;
        Enemy* rad = new RadScorpion();
        Enemy* mut = new SuperMutant();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();

        snoop->equip(pf);
        std::cout << "Scorpion has " << rad->getHP() << " HP " << std::endl;
        snoop->attack(rad);
        std::cout << *snoop;
        std::cout << "Scorpion has " << rad->getHP() << " HP " << std::endl;
        snoop->attack(rad);
        std::cout << *snoop;
        std::cout << "Scorpion has " << rad->getHP() << " HP " << std::endl;
    
        snoop->equip(pr);
        std::cout << *snoop;
        std::cout << "Super Mutant has " << mut->getHP() << " HP " << std::endl;
        snoop->attack(mut);
        std::cout << *snoop;
        std::cout << "Super Mutant has " << mut->getHP() << " HP " << std::endl;
        snoop->attack(mut);
        std::cout << *snoop;
        snoop->recoverAP();
        std::cout << "Super Mutant has " << mut->getHP() << " HP " << std::endl;
        snoop->attack(mut);
        std::cout << *snoop;
        std::cout << "Super Mutant has " << mut->getHP() << " HP " << std::endl;
        std::cout << "Super Mutant attacks snoop! ...and hit really hard" << std::endl;
        std::cout << "Our hero died against the Super Mutant :(" << std::endl;
        delete snoop;

        Character* jay= new Character("Jay");
        Enemy* spid = new MagmaSpider();
        AWeapon* er = new ElectroRifle();

        jay->equip(er);
        std::cout << "Spider has " << spid->getHP() << " HP " << std::endl;
        jay->attack(spid);
        std::cout << *jay;
        std::cout << "Spider has " << spid->getHP() << " HP " << std::endl;
        jay->attack(spid);
        std::cout << *jay;
        std::cout << "Spider has " << spid->getHP() << " HP " << std::endl;
    
        delete jay;
        return (0);
    }
}