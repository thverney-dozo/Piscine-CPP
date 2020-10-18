#include "Fixed.hpp"

const int	Fixed::_nbBits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->setRawBits(rhs.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
    return ;
}

