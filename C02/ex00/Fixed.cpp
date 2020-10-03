#include "Fixed.hpp"

const int	_nbBits = 8;

Fixed::Fixed(void)
{
    this->_fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed
&Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_fixedPoint = rhs.getRawBits();
    }
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

int
Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void
Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
    std::cout << "setRawBits member function called" << std::endl;
    return ;
}

