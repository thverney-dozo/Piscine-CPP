/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thverney <thverney@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:11:31 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/15 12:14:27 by thverney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
#define _PONY_HPP_

# include <iostream>
# include <stdio.h>
# include <string>
# include <locale>
# include <iomanip>

class Pony
{
    private:
        int _head;
        int _tail;
        int _body;
        int _legs;
    public:
        Pony();
        ~Pony();
        void    run();
        void    sleep();
};

#endif