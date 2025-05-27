/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:33:25 by mgering           #+#    #+#             */
/*   Updated: 2024/12/09 17:20:24 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a + a << std::endl;
	// std::cout << a - a << std::endl;
	// std::cout << a * 10 << std::endl;
	// std::cout << a / a << std::endl;
	// std::cout << Fixed::min(a,b) << std::endl;
	return (0);
}