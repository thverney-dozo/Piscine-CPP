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

Fixed::Fixed(const int value)
{
    this->_fixedPoint = value << _nbBits;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float value)
{
    this->_fixedPoint = roundf(value * (1 << _nbBits));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(const Fixed &ob)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &ob)
        this->setRawBits(ob.getRawBits());
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

float Fixed::toFloat(void) const
{
    return ((float)(this->_fixedPoint) / (1 << _nbBits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->_fixedPoint >> _nbBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}