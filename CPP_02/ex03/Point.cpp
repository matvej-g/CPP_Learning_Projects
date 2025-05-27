/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:34:37 by mgering           #+#    #+#             */
/*   Updated: 2024/12/09 17:33:16 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point::~Point() {}

Point &Point::operator=(const Point& other) {
	//only const members, cannot assign new values
	(void)other;
	return (*this);
}

const Fixed &Point::getX() const {
	return (this->_x);
}

const Fixed &Point::getY() const {
	return (this->_y);
}