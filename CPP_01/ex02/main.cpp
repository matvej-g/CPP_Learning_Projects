/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:19:02 by mgering           #+#    #+#             */
/*   Updated: 2024/12/08 13:19:32 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string		text = "HI THIS IS BRAIN";
	std::string		*stringPTR = &text;
	std::string		&stringREF = text;

	std::cout << "Memory adress of the string variable:	" << &text << "\n";
	std::cout << "Memory adress held by stringPTR:	" << stringPTR << "\n";
	std::cout << "Memory adress held by stringREF:	" << &stringREF << "\n";

	std::cout << "Value of the string variable:		" << text << "\n";
	std::cout << "Value pointed to by stringPTR:		" << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF:		" << stringREF << "\n";

	return (0);
}