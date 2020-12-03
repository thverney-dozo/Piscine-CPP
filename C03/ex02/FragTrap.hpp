/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:41 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/26 19:08:02 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
private:
    unsigned int  _vaulhunterDamagePoints;
    unsigned int  _pianoAttackDamagePoints;
    unsigned int  _glassAttackDamagePoints;
    unsigned int  _danceAttackDamagePoints;
    unsigned int  _toneAttackDamagePoints;
    unsigned int  _classyAttackDamagePoints;

public:
    FragTrap(std::string name);
    ~FragTrap();
    // Attack methods
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void          vaulthunter_dot_exe(std::string const &target);
    void          pianoAttack(std::string const &target);
    void          glassAttack(std::string const &target);
    void          danceAttack(std::string const &target);
    void          toneAttack(std::string const &target);
    void          classyAttack(std::string const &target);

    unsigned int  getVaulHunter_dot_exeDamage(void);
    unsigned int  getPianoAttackDamage(void);
    unsigned int  getGlassAttackDamage(void);
    unsigned int  getDanceAttackDamage(void);
    unsigned int  getToneAttackDamage(void);
    unsigned int  getClassyAttackDamage(void);
};

#endif