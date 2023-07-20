/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/20 15:49:35 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"

/* 
Get an RPN expression as input from the user.
Split the input by space and iterate through each element.
If the element is a number, we push it onto the stack.
If it's an operator, we pop two numbers from the stack, perform the operation, and push the result back onto the stack.
In the end, we should be left with one number on the stack, which is the result.
*/

RPN::RPN(std::string args) {
	std::cout << GRN ">>> RPN calculator active <<<" NC << std::endl;
	std::string delimiter = " ";
	long	idx = 0;
	
	while (args.size() > 0) {
		long	position = args.find(delimiter);
		std::string arg = args.substr(idx, position);
		
		if (isArgNumber(arg) == false && arg.find_first_not_of("+-*/") != std::string::npos)
			throw std::runtime_error("Invalid value");
		else if (isArgNumber(arg) == true) {
			double arg1 = std::stod(arg);
			m_pile.push(arg1);
		} else if (arg.find_first_of("+-*/") != std::string::npos || args.size() == 1) {
			double arg2 = m_pile.top();
			m_pile.pop();
			double arg1 = m_pile.top();
			m_pile.pop();
			m_pile.push(calculation(arg1, arg2, arg));
		}
		if (args.size() == 1)
			break;
		args = args.substr(position + 1, args.size());
	}
	
	int	first = 1;

	while (!m_pile.empty()) {
		if (first != 1) 
			std::cout << ", ";
		first = 0;
		std::cout << GRN << m_pile.top();
		m_pile.pop();
	}
	std::cout << NC << std::endl;
}

RPN::RPN(const RPN& other) {
	*this = other;
}

RPN& RPN::operator=(const RPN& rhs) {
	if (this == &rhs)
		return *this;
	m_pile = rhs.m_pile;
	return *this;
}

RPN::~RPN() {
	std::cout << RED ">>> RPN calculator disable <<<" NC << std::endl;
}

double RPN::calculation(double arg1, double arg2, std::string sign) {
	if (sign == "+")
		return (arg1 + arg2);
	else if (sign == "-")
		return (arg1 - arg2);
	else if (sign == "*")
		return (arg1 * arg2);
	else if (sign == "/") {
		if (arg2 == 0)
			throw std::runtime_error("division by 0");
		return (arg1 / arg2);
	}
	return -42;
}

bool	isArgNumber(const std::string& arg) {
	std::istringstream ss(arg);
	double arg1;
	ss >> arg1;
	if (ss.fail() || !ss.eof() || arg1 < 0 || arg1 > 9)
		return false;
	return true;
}