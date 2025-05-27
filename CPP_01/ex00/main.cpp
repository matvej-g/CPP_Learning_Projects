/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:44:57 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 12:44:57 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	test(Zombie* heapZ) {
	heapZ->announce();
}

int	main() {
	Zombie* heapZombie = newZombie("HeapZombie");
	//heapZombie->announce();

	randomChump("StackZombie");
	test(heapZombie);

	delete heapZombie;

	return(0);
}
