/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:24:07 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:24:15 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(const std::string &type);
	const std::string	&getType() const;
	void	setType(const std::string &newType);
};

#endif