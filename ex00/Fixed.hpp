/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:33 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/06 14:33:48 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixedPointVaule;
    static const int bit = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &rhs);
    
    Fixed& operator=(const Fixed& rhs);


    int     getRawBits(void) const;;
    void    setRawBits(int const raw); 
};



#endif
