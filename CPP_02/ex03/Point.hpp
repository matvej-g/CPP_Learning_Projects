/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:34:43 by mgering           #+#    #+#             */
/*   Updated: 2024/12/09 14:34:44 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();


	const Fixed &getX() const;
	const Fixed &getY() const;
};

#endif