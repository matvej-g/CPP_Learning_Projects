/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:23:48 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:23:50 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(const std::string &name);
	void	setWeapon(Weapon &weapon);
	void	attack() const;
};

#endif