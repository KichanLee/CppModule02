/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:36 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/06 15:02:57 by kichlee          ###   ########.fr       */
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

Fixed::Fixed(const int num)
{
    // 매개변수로 정수형 상수를 받아와
    // 이를 대응되는 고정(8) 소수점값으로 변환하는 생성자
    // 분수 비트 값은 ex00때와 같이 초기화됩니다.
    this->fixedPointVaule = num;
    
    
}

Fixed::Fixed() : fixedPointVaule(0){
    std::cout << "Default constructor called" << "\n";
}



Fixed::Fixed(const Fixed &rhs):fixedPointVaule(rhs.fixedPointVaule){

    std::cout << "Copy constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    if(this != &rhs)
        this->fixedPointVaule  = rhs.fixedPointVaule;
    std::cout << "Assignation operator called" << "\n";
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