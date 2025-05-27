/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:36:41 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:36:44 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I really do!\n";
}

void	Harl::info(void) {
	std::cout << "[INFO]\n";
	std::cout << "I cannot belive adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! If you did, "
				 "I wouldn't be asking for more!\n";
}

void	Harl::warning(void) {
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working "
				 "here since last month.\n";
}

void	Harl::error(void) {
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level) {
	void (Harl::*funcPtrArr[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if(levels[i] == level) {
			(this->*funcPtrArr[i])();
			return;
		}
	}
	std::cout << "[Probalby complaining about insignificant problems]\n";
}