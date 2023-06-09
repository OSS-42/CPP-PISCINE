/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/09 13:41:04 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"

RPN::RPN() {
	std::cout << GRN "RPN calculator active" NC << std::endl;
}

RPN::RPN(const RPN& other) {
	*this = other;
}

RPN& RPN::operator=(const RPN& rhs) {
	m_pile = rhs.m_pile;
	return *this;
}

RPN::~RPN() {
	std::cout << RED "RPN calculator disable" NC << std::endl;
}

RPN::argCheck(std::string args) {
	if (args.find_first_not_of("+-*/0123456789") != std::string::npos) {
		throw std::runtime_error("Invalid input value");
	} else {
		
	}
}