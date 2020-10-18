#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>


class Fixed
{
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed       &operator=(const Fixed &ob);
    Fixed       operator+(const Fixed &ob);
    Fixed       operator-(const Fixed &ob);
    Fixed       operator*(const Fixed &ob);
    Fixed       operator/(const Fixed &ob);
    Fixed       &operator++();
    Fixed       operator++(int dum);
    Fixed       &operator--();
    Fixed       operator--(int dum);
    bool        operator>(const Fixed &ob);
    bool        operator<(const Fixed &ob);
    bool        operator>=(const Fixed &ob);
    bool        operator<=(const Fixed &ob);
    bool        operator==(const Fixed &ob);
    bool        operator!=(const Fixed &ob);
    int         getRawBits(void) const;
    void        setRawBits(int const);
    float       toFloat(void) const;
    int         toInt(void) const;

    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);

private:
    int                 _fixedPoint;
    static const int    _nbBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif