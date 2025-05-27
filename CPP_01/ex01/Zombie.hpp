/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:07:33 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:07:33 by mgering          ###   ########.fr       */
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
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce(void);
};

#endif