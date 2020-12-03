/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:29:08 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/03 18:29:45 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    private:
        int             _hp;
        std::string     _type;

    protected:

        void    setType(const std::string &type);
        void    setHP(int hp);
        Enemy();

    public:
        Enemy(int hp, std::string const &type);
        Enemy(const Enemy &cpy);
        Enemy   &operator=(const Enemy &affect);
        virtual ~Enemy();
        
        std::string getType() const;
        int getHP() const;

        virtual void takeDamage(int damage);
};

#endif