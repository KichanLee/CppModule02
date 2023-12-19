/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:31:06 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/20 03:53:35 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
  Point a(2, 2);
  Point b(3, 3);
  Point c(4, 4);
  Point pt(2.5, 2.5);

  std::cout << a.getFixedValueX() << std::endl;
  std::cout << a.getFixedValueY() << std::endl;
  std::cout << pt.getFixedValueX() << std::endl;
  std::cout << pt.getFixedValueY() << std::endl;
  std::cout << "This point pointed in triangle ? : " << bsp(a, b, c, pt)
            << std::endl;
}