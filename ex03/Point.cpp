/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:57 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 20:48:22 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::~Point(){}
Point::Point(float xValue, float yValue) : x(xValue), y(yValue){}
Point::Point(const Point &rhs): x(rhs.x), y(rhs.y){}
Point& Point::operator=(const Point &rhs){

    // const_cast<Fixed &>(x) = rhs.x;
    // const_cast<Fixed &>(y) = rhs.y;
…
    return (*this);
}
