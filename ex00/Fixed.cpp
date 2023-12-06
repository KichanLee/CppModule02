/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:36 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/06 16:43:22 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVaule(0){
    std::cout << "Default constructor called" << "\n";
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(const Fixed &rhs):fixedPointVaule(rhs.fixedPointVaule){
    std::cout << "Copy constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    if(this != &rhs)
        this->fixedPointVaule  = rhs.fixedPointVaule;
    std::cout << "Copy assignment operator called " << "\n";
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << "\n";

    return this->fixedPointVaule;
    
}
void   Fixed::setRawBits(int const raw)
{
    this->fixedPointVaule = raw;
}