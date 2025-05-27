/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:29:48 by mgering           #+#    #+#             */
/*   Updated: 2024/12/05 12:29:48 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	trim(const std::string &str) {
	size_t	first = str.find_first_not_of(" \t\n\r");
	if (first == std::string::npos) 
		return "";
	size_t	last = str.find_last_not_of(" \t\n\r");
	return (str.substr(first, last - first + 1));
}

std::string normalizeSpaces(const std::string &str) {
	std::string result;
	bool inSpace = false;
	for (char c : str) {
		if (std::isspace(static_cast<unsigned char>(c))) {
			if (!inSpace) {
				result += ' ';
				inSpace = true;
			}
		}
		else {
			result += c;
			inSpace = false;
		}
	}
	return (result);
}

bool	isDigits(const std::string &str) {
	for (char c : str) {
		if (!std::isdigit(static_cast<unsigned char>(c))) {
			return (false);
		}
	}
	return (true);
}

bool	isAlpha(const std::string &str) {
	for (char c : str) {
		if (!std::isalpha(static_cast<unsigned char>(c)) && !std::isspace(static_cast<unsigned char>(c))) {
			return (false);
		}
	}
	return (true);
}

void	Contact::inputContact(){

	typedef void (Contact::*Setter)(const std::string&);
	std::pair<const char*, Setter> fields[] = {
		{"First Name", &Contact::setFirstName},
		{"Last Name", &Contact::setLastName},
		{"Nickname", &Contact::setNickname},
		{"Phone Number", &Contact::setPhoneNumber},
		{"Darkset Secret", &Contact::setDarkestSecret}
	};

	std::string	input;
	for (const auto& [fieldName, setter] : fields) {
		while (true) {
			std::cout << "Enter " << fieldName << ": ";
			std::getline(std::cin, input);
			input = trim(input);
			input = normalizeSpaces(input);
			if (std::cin.eof()) {
				std::cout << "EOF. Exiting phonebook." << std::endl;
				std::exit(0);
			}
			if (input.empty()) {
				std::cout << fieldName << " cannot be empty. Please try agian." << std::endl;
			}
			else {
				if (fieldName == std::string("Phone Number") && !isDigits(input)) 
					std::cout << fieldName << " must contain only digits. Please try agian." << std::endl;
				else if ((fieldName == std::string("First Name") || fieldName == std::string("Last Name")) && !isAlpha(input))
					std::cout << fieldName << " must contain a character. Please try agian" << std::endl;
				else {
					(this->*setter)(input);
					break;
				}
			}
		}
	}
}

void	Contact::setFirstName(const std::string &_firstName) {
	this->_firstName = _firstName;
}

void	Contact::setLastName(const std::string &_lastName) {
	this->_lastName = _lastName;
}

void	Contact::setNickname(const std::string &_nickname) {
	this->_nickname = _nickname;
}

void	Contact::setPhoneNumber(const std::string &_phoneNumber) {
	this->_phoneNumber = _phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &_darkestSecret) {
	this->_darkestSecret = _darkestSecret;
}

std::string	Contact::getFirstName() const {
	return (this->_firstName);
}

std::string	Contact::getLastName() const {
	return (this->_lastName);
}

std::string Contact::getNickname() const {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber() const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret() const {
	return (this->_darkestSecret);
}
