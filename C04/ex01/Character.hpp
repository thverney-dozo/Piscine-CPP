/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:07:26 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 18:00:00 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        int         _ap;
        AWeapon     *_weapon;

    protected:
        void        setName(std::string name);
        void        setAP(int ap);
        Character();

    public:
        Character(std::string const &name);
		Character(const Character &cpy);
		Character   &operator=(const Character &affect);
		virtual		~Character();

        void        recoverAP();
        void        equip(AWeapon *weapon);
        void        attack(Enemy *enemy);
        std::string getName() const;
        AWeapon     *getWeapon() const;
        int         getAP() const;

};

std::ostream    &operator<<(std::ostream &out, Character const &val);

#endif