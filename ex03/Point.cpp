/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:57 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/19 15:51:43 by kichan           ###   ########.fr       */
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
  float value =
      abs(((a.getFixedValueX() * (b.getFixedValueY() - c.getFixedValueY()) +
            b.getFixedValueX() * (c.getFixedValueY() - a.getFixedValueY()) +
            c.getFixedValueX() * (a.getFixedValueY() - b.getFixedValueY()))
               .toFloat()) /
          2.0);
  return (value);
}

float crossProduct(Point a, Point b) {
  return (a.getFixedValueX() * b.getFixedValueY() -
          a.getFixedValueY() * b.getFixedValueX())
      .toFloat();
}

bool isOnLine(Point a, Point b, Point p) {
  Point ab = (b.getFixedValueX() - a.getFixedValueX(),
              b.getFixedValueY() - a.getFixedValueY())
                 .toFloat();
  Point ap = (p.getFixedValueX() - a.getFixedValueX(),
              p.getFixedValueY() - a.getFixedValueY())
                 .toFloat();
  return crossProduct(ab, ap) == 0;
}
bool isOnTriangleEdge(Point a, Point b, Point c, Point p) {
  return isOnLine(a, b, p) || isOnLine(b, c, p) || isOnLine(c, a, p);
}
