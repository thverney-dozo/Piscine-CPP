#include "Pony.hpp"

void    Pony::run()
{
    std::cout << "Pony has two legs therfore he can run";
    std::cout << std::endl;
    std::cout << "Indeed, HE'S RUNNING !!";
    std::cout << std::endl;
    std::cout << "Now he is exhausted";
    this->_legs = 0;
}

void    Pony::sleep()
{
    std::cout << "Pony is alive but he wants to sleep";
    std::cout << std::endl;
    std::cout << "ZZZzzzZZZ" << std::endl;
    std::cout << "A tail trapper approches !" << std::endl;
    this->_tail = 0;
}

Pony::Pony()
{
    this->_head = 1;
    this->_tail = 1;
    this->_body = 1;
    this->_legs = 1;
}

Pony::~Pony()
{
    std::cout << "Destructing of Pony Object" << std::endl;
}