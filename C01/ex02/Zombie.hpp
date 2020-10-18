/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:11:00 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/06 12:11:02 by aeoithd          ###   ########.fr       */
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
            Zombie(std::string _name,std::string _type);
            ~Zombie(void);

            std::string getName();
            std::string getType();
            void	    randomChump(void);
            void        announce(void);
            void        advert();

    private:
            std::string _name;
            std::string _type;
};

#endif