/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:33 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 17:01:25 by kichlee          ###   ########.fr       */
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
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;
    Fixed& operator++(void);      
    const Fixed operator++(int);    
    Fixed& operator--(void);         
    const Fixed operator--(int);
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;
    static Fixed min(Fixed& lhs,Fixed& rhs){
        return (lhs.fixedPointVaule > rhs.fixedPointVaule ? rhs : lhs);
    }
    static Fixed max(Fixed& lhs,Fixed& rhs){
        return (lhs.fixedPointVaule < rhs.fixedPointVaule ? rhs : lhs);
    }
    static Fixed min(const Fixed& lhs, const Fixed& rhs){
        return (lhs.fixedPointVaule > rhs.fixedPointVaule ? rhs : lhs);
    }
    static Fixed max(const Fixed& lhs, const Fixed& rhs){
        return (lhs.fixedPointVaule < rhs.fixedPointVaule ? rhs : lhs);
    }
    int     getRawBits(void) const;
    void    setRawBits(int const raw); 
    int     toInt(void)     const;
    float   toFloat(void)   const;
};


std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

#endif
