/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:07:06 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:07:06 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::~Zombie() {
	std::cout << name << ": Ahrrrggghh...\n";
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
