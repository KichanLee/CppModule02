/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:52 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/17 20:15:53 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class Point
{
private:
   const Fixed x;
   const Fixed y;
    
public:
    Point();
    ~Point();
    Point(float xValue, float yValue);
    Point(const Point &rhs);
    Point& operator=(const Point &rhs);
};

#endif
