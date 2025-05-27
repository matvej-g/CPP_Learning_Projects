/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:34:31 by mgering           #+#    #+#             */
/*   Updated: 2024/12/09 17:27:11 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main(void) {
	Point A(0.0f, 0.0f);
	Point B(-10.0f, 0.0f);
	Point C(0.0f, 10.0f);

	Point inside(-1.0f, 3.0f);
	Point outside(10.0f, 10.0f);
	Point onEdge(0.0f, 5.0f); // On edge AC

	std::cout << "Point inside: " << (bsp(A, B, C, inside) ? "true" : "false") << std::endl;
	std::cout << "Point outside: " << (bsp(A, B, C, outside) ? "true" : "false") << std::endl;
	std::cout << "Point on edge: " << (bsp(A, B, C, onEdge) ? "true" : "false") << std::endl;

	return 0;
}