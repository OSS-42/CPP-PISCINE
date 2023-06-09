/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/09 11:47:09 by ewurstei         ###   ########.fr       */
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

