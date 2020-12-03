/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:19:19 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 18:57:22 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
    private:
        std::string _name;
        int         _apcost;
        int         _damage;

    protected:
        void    setName(std::string name);
        void    setDamage(int damage);
        void    setAPcost(int apcost);
        AWeapon();
    
    public:
        AWeapon (const AWeapon& cpy);
        AWeapon &operator=(const AWeapon& affect);
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon();
    
        int getAPCost() const;
        int getDamage() const;
        const std::string getName() const;
    
        virtual void attack() const = 0;
};

#endif