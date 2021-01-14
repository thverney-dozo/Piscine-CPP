/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 08:13:56 by aeoithd           #+#    #+#             */
/*   Updated: 2021/01/14 19:52:24 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INFOS_HPP_
#define _INFOS_HPP_

# include <iostream>
# include <stdio.h>
# include <string>
# include <locale>
# include <iomanip>

class Info
{
    private:
        std::string postaladdress;
        std::string emailaddress;
        std::string phonenumber;
        std::string birthdaydate;
        std::string favoritemeal;
        std::string underwearcolor;
        std::string darkestsecret;
        std::string login;
        std::string firstname;
        std::string lastname;
        std::string nickname;

    public:
        int         index;
        void        fill(int nb_of_contact);
        void        disp_contact();
        void        disp_infos();
        void        resize();
}; 

#endif