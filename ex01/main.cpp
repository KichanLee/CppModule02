/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:30 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 14:34:59 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
  
  Fixed       a;
  Fixed const b(10);
  Fixed const c(42.42f);
  Fixed const d(b);


  a = Fixed( 1234.4321f );
  
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;


  std::cout << "a is " << a.toInt() << " as integer" << std::endl; 
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl; 
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;

  return 0;
}
