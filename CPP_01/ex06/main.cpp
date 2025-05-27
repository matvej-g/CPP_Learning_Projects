/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:45:34 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:45:36 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./harlFilter <level>\n"
					 "levels available: \"DEBUG, INFO, WARNING, ERROR\"" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(argv[1]);

	return (0);
}