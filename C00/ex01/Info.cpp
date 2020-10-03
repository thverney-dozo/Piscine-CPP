#include "Info.hpp"

void    Info::fill(int nb_of_contact)
{
    std::cout << "Enter First Name : " << std::endl;
    getline(std::cin, Info::firstname);
    std::cout << "Enter Last Name : " << std::endl; 
    getline(std::cin, Info::lastname);
    std::cout << "Enter Nickname: " << std::endl;   
    getline(std::cin, Info::nickname);
    std::cout << "Enter Login : " << std::endl;     
    getline(std::cin, Info::login);
    std::cout << "Enter Postal Address : " << std::endl;
    getline(std::cin, Info::postaladdress);
    std::cout << "Enter Email Address : " << std::endl;
    getline(std::cin, Info::emailaddress);
    std::cout << "Enter Phone Number : " << std::endl;
    getline(std::cin, Info::phonenumber);
    std::cout << "Enter Birthday Date : " << std::endl;
    getline(std::cin, Info::birthdaydate);
    std::cout << "Enter Favorite Meal : " << std::endl;
    getline(std::cin, Info::favoritemeal);
    std::cout << "Enter Underwar Color : " << std::endl;
    getline(std::cin, Info::underwearcolor);
    std::cout << "Enter Darkest Secret : " << std::endl;
    getline(std::cin, Info::darkestsecret);
    this->index= nb_of_contact + 1;
}

void    Info::disp_contact()
{
    std::cout << '|';
    std::cout << std::setw(10) << Info::index;
    std::cout << '|';
    if (firstname.length() < 11)
        std::cout << std::setw(10) << Info::firstname;
    else
    {
        firstname.resize(9);
        std::cout << Info::firstname << ".";
    }
    std::cout << '|';
    if (lastname.length() < 11)
        std::cout << std::setw(10)<< Info::lastname;
    else
    {
        lastname.resize(9);
        std::cout << Info::lastname << ".";
    }
    std::cout << '|';
    if (nickname.length() < 11)
        std::cout << std::setw(10)<< Info::nickname;
    else
    {
        nickname.resize(9);
        std::cout << Info::nickname << ".";
    }
    std::cout << '|' << std::endl;
}

void    Info::disp_infos()
{
    std::cout << "Login             :";
    std::cout << Info::login << std::endl;
    std::cout << "Postal Address    :";
    std::cout << Info::postaladdress << std::endl;
    std::cout << "Email Address     :";
    std::cout << Info::emailaddress << std::endl;
    std::cout << "Phone Number      :";
    std::cout << Info::phonenumber << std::endl;
    std::cout << "Birthday          :";
    std::cout << Info::birthdaydate << std::endl;
    std::cout << "Favorite meal     :";
    std::cout << Info::favoritemeal << std::endl;
    std::cout << "Underwear color   :";
    std::cout << Info::underwearcolor << std::endl;
    std::cout << "Darkest secret    :";
    std::cout << Info::darkestsecret << std::endl << std::endl;
}