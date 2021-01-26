/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:01:38 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:37 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
						Character();
	std::string			_name;
	int					_equipped;
	AMateria			*_inventory[4];
public:
						Character(const std::string &name);
						Character(const Character &cpy);
	virtual				~Character();
	Character			&operator=(const Character &affect);
	const std::string	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif