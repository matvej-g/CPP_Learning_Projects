/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:01:06 by mgering           #+#    #+#             */
/*   Updated: 2024/12/11 11:51:09 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
	ClapTrap clap("Clappy");

	clap.attack("Target A");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "--- Create ScavTrap ---\n" << std::endl;

	ScavTrap scav("Scavvy");

	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	scav.guardGate();

	std::cout << "--- Create ScavTrap2 ---\n" << std::endl;

	ScavTrap scav2("Bobby");

	for (int i = 0; i < 10; i++) {
		scav.attack(scav2.getName());
		scav2.takeDamage(scav.getAttackDamage());
		scav2.beRepaired(10);
	}

	std::cout << "--- Create ScavTrap3 ---\n" << std::endl;
	
	ScavTrap scav3;
	scav3 = scav;

	std::cout << "--- Create ScavTrap4 ---\n" << std::endl;
	
	ClapTrap *ptr = new ScavTrap("Tommy");

	ptr->attack("Dummy");

	return (0);
} 