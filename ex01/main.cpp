/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:51:30 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/06 15:06:36 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
  Fixed a; // 디폴트 생성자 
  Fixed const b( 10 ); // 생성자 호출
  Fixed const c( 42.42f ); // 
  Fixed const d( b );

  a = Fixed( 1234.4321f ); // 복사대입연산자 /

  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  //  a is 1234.43
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  //  b is 10 
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  //  c is 42.4219
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  // d is 10

  // int constructor 정수 생성자
  // Float constructor 실수 생성자 
  return 0;
}
/**
 *  $> ./a.out
  Default constructor called

  Int constructor called
  Float constructor called
  Copy constructor called
  Assignation operator called
  Float constructor called
  Assignation operator called
  Destructor called

**/