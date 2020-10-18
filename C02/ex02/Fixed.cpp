#include "Fixed.hpp"

const int	Fixed::_nbBits = 8;

/*
**************
Constructors
**************
*/

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
    return ;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

Fixed::Fixed(const int value)
{
    this->_fixedPoint = value << _nbBits;
    // std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float value)
{
    this->_fixedPoint = roundf(value * (1 << _nbBits));
    // std::cout << "Float constructor called" << std::endl;
    return ;
}

/*
****************
Public Operators
****************
*/

Fixed &Fixed::operator=(const Fixed &ob)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &ob)
        this->setRawBits(ob.getRawBits());
    return (*this);
}

bool Fixed::operator>(const Fixed &ob)
{
    return this->_fixedPoint > ob._fixedPoint;
}

bool Fixed::operator<(const Fixed &ob)
{
    return this->_fixedPoint < ob._fixedPoint;
}

bool Fixed::operator>=(const Fixed &ob)
{
    return this->_fixedPoint >= ob._fixedPoint;
}

bool Fixed::operator<=(const Fixed &ob)
{
    return this->_fixedPoint <= ob._fixedPoint;
}

bool Fixed::operator==(const Fixed &ob)
{
    return this->_fixedPoint == ob._fixedPoint;
}

bool Fixed::operator!=(const Fixed &ob)
{
    return this->_fixedPoint != ob._fixedPoint;
}

Fixed Fixed::operator+(const Fixed &ob)
{
    return this->_fixedPoint + ob._fixedPoint;
}

Fixed Fixed::operator-(const Fixed &ob)
{
    return this->_fixedPoint - ob._fixedPoint;
}

Fixed Fixed::operator*(const Fixed &ob)
{
    return (Fixed(this->toFloat() * ob.toFloat()));
}

Fixed Fixed::operator/(const Fixed &ob)
{
    return (Fixed(this->toFloat() / ob.toFloat()));
}

Fixed &Fixed::operator++()
{
    this->_fixedPoint++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++*this;
    return temp;
}

Fixed &Fixed::operator--()
{
    this->_fixedPoint--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --*this;
    return temp;
}
/*
****************
Member Fonctions
****************
*/

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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

/*
****************
None Member Operators
****************
*/

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a._fixedPoint < b._fixedPoint? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a._fixedPoint < b._fixedPoint? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a._fixedPoint > b._fixedPoint? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a._fixedPoint > b._fixedPoint? a : b;
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}