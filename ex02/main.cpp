/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:30 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 16:54:28 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{ Fixed a;
  Fixed c(5.05f);
  Fixed d(2);
  Fixed e = c * d;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  // std::cout << a++ << std::endl;
  // std::cout << a << std::endl;
  // std::cout << a++ << std::endl;
  // std::cout << a << std::endl;
  std::cout << e << std::endl;
  std::cout << b << std::endl;
  // std::cout << Fixed::max( a, b ) << std::endl;
  // std::cout << b << std::endl;
  // std::cout << Fixed::max( a, b ) << std::endl;

return 0; }
