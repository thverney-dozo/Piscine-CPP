/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:02:05 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:32 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
    private:
                            AMateria();
    protected:
        std::string			_type;
        unsigned int		_xp;
    public:
                            AMateria(const std::string &type);
                            AMateria(const AMateria &cpy);
        AMateria			&operator=(const AMateria &affect);
        virtual				~AMateria();
        const std::string	&getType() const;
        unsigned int		getXP() const;
        virtual AMateria	*clone() const = 0;
        virtual void		use(ICharacter &target);
};

#endif