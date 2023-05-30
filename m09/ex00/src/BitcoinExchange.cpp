/* ************************************************************************** */,
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:01:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/30 10:20:34 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
	std::cout << GRN "Exchange is now open" NC << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs) {
	if (this == &rhs)
		return *this;
	_btcDB = rhs._btcDB;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {
	std::cout << RED "Exchange is now closed" NC << std::endl;
}

void	BitcoinExchange::exchange(void) {
	
}