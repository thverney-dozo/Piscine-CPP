/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:30:45 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:58:18 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "ice(2)'s XP=" << tmp->getXP() << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);
	std::cout << "ice(2)'s XP=" << tmp->getXP() << std::endl;
	moi->use(2, *bob);
	std::cout << "ice(2)'s XP=" << tmp->getXP() << std::endl;
	moi->use(3, *bob);
	moi->use(-1, *bob);
	std::cout << "Unequip ice(2)'s" << std::endl;
	moi->unequip(2);
	moi->use(2, *bob);
	std::cout << "ice(2)'s XP=" << tmp->getXP() << std::endl;
	std::cout << "Requip ice(2)'s" << std::endl;
	moi->equip(tmp);
	moi->use(2, *bob);
	std::cout << "ice(2)'s XP=" << tmp->getXP() << std::endl;
	delete bob;
	delete moi;
	delete src;
	return (0);
}