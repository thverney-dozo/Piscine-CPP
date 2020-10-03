#include "contact.hpp"

int     main()
{
    contact     C;
    int         nb_of_contact;
    int         index;
    std::string str;

    
    nb_of_contact = 0;
    while (42)
    {
        std::cout << "Please enter your command: \n"; 
        std::getline(std::cin, str);
        if (str == "ADD")
        {
            if (nb_of_contact < 8)
            {
                C.tab[nb_of_contact].fill(nb_of_contact);
                nb_of_contact++;
            }
            else
                std::cout << "Too many contacts" << std::endl;

        }
        else if (str == "SEARCH")
        {
            if (nb_of_contact == 0)
                std::cout << "No contacts were found" << std::endl;
            else
            {
                index = 0;
                while(index < nb_of_contact)
                {
                    C.tab[index].disp_contact();
                    index++;
                }
                std::cout << "Enter an index's contact:  ";
                std::cin >> index;
                std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
                std::cout << std::endl;
                if (std::cin.good() && index < 9 && index > 0)
                    C.tab[index - 1].disp_infos();
                else
                    std::cout << "No index found" << std::endl;
            }
        }
        else if (str == "EXIT")
        {
            std::cout << "Exiting PhoneBook" << std::endl;
            exit(0);
        }
    }
}
