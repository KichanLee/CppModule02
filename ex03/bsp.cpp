/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:53:47 by kichan            #+#    #+#             */
/*   Updated: 2023/12/20 03:52:01 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  float totalarea = area(a, b, c);
  float abp = area(a, b, point);
  float acp = area(a, c, point);
  float bcp = area(b, c, point);

  // std::cout << "abp : " << abp << std::endl;
  // std::cout << "acp : " << acp << std::endl;
  // std::cout << "bcp : " << bcp << std::endl;
  // std::cout << "total : " << totalarea << std::endl;
  return (totalarea == abp + acp + bcp);
}