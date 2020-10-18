/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:59:35 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 11:59:36 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_H_
# define _HUMAN_H_

# include <string>
# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human
{
    public:
        Human(void);
        ~Human(void);
        const Brain& getBrain(void);
        std::string identify(void);
    private:
        const Brain _cortex;
};


#endif
