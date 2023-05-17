/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vault.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 11:39:36 by ewurstei         ###   ########.fr       */
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
	return (m_dblValue);
}

float Vault::getFloat(void) const {
	return (m_fltValue);
}

char Vault::getChar(void) const {
	return (m_chrValue);
}

void Vault::setChar(std::string value) {

	if (value.length() != 1 && value.find_first_not_of(".+0123456789") != std::string::npos) {
		std::cout << "chr: impossible" << std::endl;
		return ;
	}
	try {
		if (value.length() == 1 && value[0] >= 32 && (value[0] < 48 || value[0] > 57))
			m_chrValue = value[0];
		else
			m_chrValue = std::stoi(value);
		
		std::cout << RED << (int)m_chrValue << NC << std::endl;
		
		if (isprint(m_chrValue) == false || m_chrValue < 32) {
		std::cout << "chr: not displayable" << std::endl;
		return ;
	}
	std::cout << "chr: '" << m_chrValue << "'" << std::endl;
	}
	catch (std::invalid_argument& ia) {
		std::cerr << "chr: Invalid Argument" << std::endl;
	}
	catch (std::out_of_range& oor) {
		std::cerr << "chr: Out of Range" << std::endl;
	}
}

void Vault::setFloat (std::string value) {
	size_t		pos = value.find(".");
	u_int		prec = 1;

	if (pos != std::string::npos) {
		size_t	strLen = value.length();
		if (value.back() == 'f' || value.back() == 'F')
			strLen -= 1;
		prec = strLen - pos - 1;
	}
	
	try {
		if (value.length() == 1 && value[0] >= 32)
			m_fltValue = value[0];
		else
			m_fltValue = std::stof(value);
		std::cout << "flt: " << std::fixed << std::setprecision(prec) << m_fltValue << "f" << std::endl;
	}
	catch (std::invalid_argument& ia) {
		std::cerr << "flt: Invalid Argument" << std::endl;
	}
	catch (std::out_of_range& oor) {
		std::cerr << "flt: Out of Range" << std::endl;
	}
}

void Vault::setDouble(std::string value) {
	size_t		pos = value.find(".");
	u_int		prec = 1;

	if (pos != std::string::npos) {
		size_t	strLen = value.length();
		if (value.back() == 'f' || value.back() == 'F')
			strLen -= 1;
		prec = strLen - pos - 1;
	}
	
	try {
		if (value.length() == 1 && value[0] >= 32)
			m_dblValue = value[0];
		else
			m_dblValue = std::stod(value);
		std::cout << "dbl: " << std::fixed << std::setprecision(prec) << m_dblValue << std::endl;
	}
	catch (std::invalid_argument& ia) {
		std::cerr << "dbl: Invalid Argument" << std::endl;
	}
	catch (std::out_of_range& oor) {
		std::cerr << "dbl: Out of Range" << std::endl;
	}
}

void Vault::setInt(std::string value) {
	try {
		std::string keywords[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

		for (int i = 0; i < 6; i++) {
			if (!value.compare(keywords[i])) {
				std::cout << "int: impossible" << std::endl;
				return ;
			}
		}
		
		if (value.length() == 1 && value[0] >= 32)
			m_intValue = value[0];
		else
			m_intValue = std::stoi(value);
		std::cout << "int: " << m_intValue << std::endl;
	}
	catch (std::invalid_argument& ia) {
		std::cerr << "int: Invalid Argument" << std::endl;
	}
	catch (std::out_of_range& oor) {
		std::cerr << "int: Out of Range" << std::endl;
	}
}
