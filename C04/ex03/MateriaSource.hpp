/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:19:48 by aeoithd           #+#    #+#             */
/*   Updated: 2020/11/12 18:25:56 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int				_current;
	AMateria		*_sources[4];
public:
					MateriaSource();
					MateriaSource(const MateriaSource &cpy);
	virtual			~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &affect);
	void			learnMateria(AMateria *m);
	AMateria		*createMateria(const std::string &type);
};

#endif