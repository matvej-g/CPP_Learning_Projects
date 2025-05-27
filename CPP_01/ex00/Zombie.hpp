/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:46:09 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 12:46:09 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif