/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vault.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/16 15:57:26 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Vault.hpp"


Vault::Vault (void) {
	std::cout << GRN "Initialisation du Vault" NC << std::endl;
}

Vault::~Vault (void) {
	std::cout << RED "Destruction du Vault" NC << std::endl;
}

int	Vault::getInt (void) const {
	return (m_intValue);
}

double Vault::getDouble(void) const {
	return (m_dblvalue);
}

float Vault::getFloat(void) const {
	return (m_fltValue);
}

char Vault::getChar(void) const {
	return (m_chrValue);
}

void Vault::setChar(std::string value) {
	int	ch;
	ch = static_cast<unsigned char>(std::stoi(value));
	if (isprint(ch) == false)
		std::cout << "chr: not displayable" << std::endl;
	else
		m_chrValue = ch;
}

void Vault::setFloat (std::string value) {
	try {
		m_fltValue = std::stof(value);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}

void Vault::setDouble(std::string value) {
	try {
		m_dblvalue = std::stod(value);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}

void Vault::setInt(std::string value) {
	try {
		m_intValue = std::stoi(value);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Vault& value) {
	o << "chr: " << value.getChar() << "\n" \
		<< "int: " << value.getInt() << "\n" \
		<< "dbl: " << value.getDouble() << "\n" \
		<< "flt: " << value.getFloat() << "f" << std::endl;
		return o;
}