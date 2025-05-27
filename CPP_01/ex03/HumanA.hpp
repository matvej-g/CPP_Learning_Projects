/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:23:27 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:23:29 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA {
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	void	attack() const;
};

#endif