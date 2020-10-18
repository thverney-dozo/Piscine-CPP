/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:37 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:37 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>
# include <locale>
# include <cstdlib>
# include <iomanip>

class   Zombie
{
    public:
            Zombie(void);
            ~Zombie(void);

            std::string getName();
            std::string getType();
            void setName(std::string name);
            void setType(std::string type);
            void	    randomChump(void);
            void        announce(void);
            void        advert();
            std::string _name;
            std::string _type;
};

#endif