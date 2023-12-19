/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:52 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/19 14:56:50 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <math.h>

#include "Fixed.hpp"

class Point {
 private:
  const Fixed x;
  const Fixed y;

 public:
  Point();
  ~Point();
  Point(float xValue, float yValue);
  Point(const Point &rhs);
  Point &operator=(const Point &rhs);
  Fixed getFixedValueX(void) const;
  Fixed getFixedValueY(void) const;
};
float area(Point a, Point b, Point c);

bool bsp(Point const a, Point const b, Point const c, Point const point);
bool isOnTriangleEdge(Point a, Point b, Point c, Point p);
bool isOnLine(Point a, Point b, Point p);
float crossProduct(Point a, Point b);
#endif
