# include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;
        Squad *vlc = new Squad;
        Squad copy;
        vlc->push(bob);
        copy = *vlc;
        vlc->push(jim);
        std::cout << "1st SQUAD" << std::endl;
        std::cout << "********Start !********" << std::endl;
        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        std::cout << "********End !********" << std::endl;
        std::cout << "2nd SQUAD" << std::endl;
        std::cout << "********Start !********" << std::endl;
        for (int i = 0; i < copy.getCount(); ++i)
        {
            ISpaceMarine* cur = copy.getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        std::cout << "********End !********" << std::endl;
        delete vlc;
        return (0);
}