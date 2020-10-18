/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:59:25 by aeoithd           #+#    #+#             */
/*   Updated: 2020/10/14 11:59:26 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H_
# define _BRAIN_H_

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    public:
            int _Feelings;
            int _Logic;
            Brain(void);
            ~Brain(void);

            std::string identify() const;
};

#endif
