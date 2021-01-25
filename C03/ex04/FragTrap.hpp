/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:25:41 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/25 13:49:59 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_Hpp
#define FragTrap_Hpp

# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name = "Unknown");
		FragTrap(FragTrap const &copy);
    	FragTrap &operator=(FragTrap const &frag);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif
