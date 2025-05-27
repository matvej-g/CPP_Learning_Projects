/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:06:21 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:06:21 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main() {
	int N = 50;
	Zombie* horde = zombieHorde(N, "HordeZombie");

	if (horde) {
		for (int i = 0; i < N; ++i) {
			std::cout << "[" << i << "]: ";
			horde[i].announce();
		}
		delete[] horde;
	}
	else {
		std::cerr << "Failed to create horde of zombies.\n";
	}
	return (0);
}
