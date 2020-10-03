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

    public:
    int         index;
    std::string login;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    void        fill(int nb_of_contact);
    void        disp_contact();
    void        disp_infos();
    void        resize();
}; 

#endif