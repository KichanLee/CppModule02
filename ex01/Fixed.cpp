/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:36 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 16:49:56 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVaule(0){
    std::cout << "Default constructor called" << "\n";
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(const int num){             
    std::cout << "Int constructor called" << "\n";
    this->fixedPointVaule = num << bit;   
}

Fixed::Fixed(float num){  
    std::cout << "Float constructor called" << "\n";
    
    (this->fixedPointVaule) = roundf(num * 256) ;   
}

Fixed::Fixed(const Fixed &rhs):fixedPointVaule(rhs.fixedPointVaule){
    std::cout << "Copy constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed &rhs){
    std::cout << "Copy assignment operator called" << "\n";
    if(this != &rhs)
        this->fixedPointVaule  = rhs.fixedPointVaule;
    return (*this);
}

int Fixed::getRawBits(void) const{
       return this->fixedPointVaule;
}
void   Fixed::setRawBits(int const raw){
   
    this->fixedPointVaule = raw;
}

int     Fixed::toInt(void)     const
{
    return (this->fixedPointVaule >> bit);
}

float Fixed::toFloat(void) const {
    return (float)this->fixedPointVaule / (1 << bit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs) {
    
    os << rhs.toFloat();

    return os;
}

           