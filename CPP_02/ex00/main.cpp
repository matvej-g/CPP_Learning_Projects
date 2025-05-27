/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:29:28 by mgering           #+#    #+#             */
/*   Updated: 2024/12/09 15:14:52 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// a.setRawBits(5);
	// std::cout << a.getRawBits() << std::endl;
	// c = a;
	// std::cout << c.getRawBits() << std::endl;
	// Fixed d(a);
	// std::cout << d.getRawBits() << std::endl;
	return (0);
}