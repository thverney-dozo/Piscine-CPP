#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony pony1;

    pony1.run();
    pony1.sleep();
}

void    ponyOnTheHeap()
{
    Pony* pony2 = new Pony();
    pony2->run();
    pony2->sleep();
    delete pony2;
}

int     main()
{
    std::cout << "Pony on the Stack" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl;
    std::cout << "Pony on the Heap" << std::endl;
    ponyOnTheHeap();
    return (0);
}