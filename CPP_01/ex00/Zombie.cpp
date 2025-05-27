/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:45:54 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 12:45:54 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
	std::cout << name << ": Ahrrrggghh...\n";
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
