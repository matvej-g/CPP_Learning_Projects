/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:25:17 by mgering           #+#    #+#             */
/*   Updated: 2024/12/05 12:25:17 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	//for std::cout and std::endl, std::toupper
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string arg = argv[i];
			for (char& c : arg)
				c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
			std::cout << arg;
		}
		std::cout << std::endl;
	}
	return (0);
}