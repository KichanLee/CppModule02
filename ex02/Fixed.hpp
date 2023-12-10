/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:33 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/10 18:33:20 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    static const int bit = 8;
    int fixedPointVaule;

public:
    Fixed();
    ~Fixed(); 
    Fixed(const int num);
    Fixed(float num);
    Fixed(const Fixed &rhs);
    Fixed& operator=(const Fixed& rhs);
    bool operator>(const Fixed& rhs);
    bool operator<(const Fixed& rhs);
    bool operator>=(const Fixed& rhs);
    bool operator<=(const Fixed& rhs);
    bool operator==(const Fixed& rhs);
    bool operator!=(const Fixed& rhs);
    Fixed operator+(const Fixed& rhs);
    Fixed operator-(const Fixed& rhs);
    Fixed operator*(const Fixed& rhs);
    Fixed operator/(const Fixed& rhs);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    Fixed& max(const Fixed&lhs, const Fixed&rhs);
    Fixed& min(const Fixed&lhs, const Fixed&rhs);

    int     getRawBits(void) const;
    void    setRawBits(int const raw); 
    int     toInt(void)     const;
    float   toFloat(void)   const;
};


std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

#endif
