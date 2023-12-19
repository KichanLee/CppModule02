/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:57 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/20 03:51:23 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::~Point() {}
Point::Point(float xValue, float yValue) : x(xValue), y(yValue) {}
Point::Point(const Point &rhs) : x(rhs.x), y(rhs.y) {}
Point &Point::operator=(const Point &rhs) {
  (void)rhs;
  return (*this);
}
Fixed Point::getFixedValueX(void) const { return (x); }
Fixed Point::getFixedValueY(void) const { return (y); }

float area(Point a, Point b, Point c) {
  return abs((a.getFixedValueX().toFloat() * (b.getFixedValueY().toFloat() -
                                              c.getFixedValueY().toFloat()) +
              b.getFixedValueX().toFloat() * (c.getFixedValueY().toFloat() -
                                              a.getFixedValueY().toFloat()) +
              c.getFixedValueX().toFloat() * (a.getFixedValueY().toFloat() -
                                              b.getFixedValueY().toFloat())) /
             2.0);
}

float crossProduct(Point a, Point b) {
  return (a.getFixedValueX().toFloat() * b.getFixedValueY().toFloat()) -
         (a.getFixedValueY().toFloat() * b.getFixedValueX().toFloat());
}

bool isOnLine(Point a, Point b, Point p) {
  Point ab(Fixed(b.getFixedValueX() - a.getFixedValueX()).toFloat(),
           Fixed(b.getFixedValueY() - a.getFixedValueY()).toFloat());
  Point ap(Fixed(p.getFixedValueX() - a.getFixedValueX()).toFloat(),
           Fixed(p.getFixedValueY() - a.getFixedValueY()).toFloat());
  return crossProduct(ab, ap) == 0;
}

bool isOnTriangleEdge(Point a, Point b, Point c, Point p) {
  return isOnLine(a, b, p) || isOnLine(b, c, p) || isOnLine(c, a, p);
}
