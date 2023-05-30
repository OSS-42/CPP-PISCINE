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

void	BitcoinExchange::exchange(std::string filename) {
	if (int copy = storeDB() == false)
		throw std::runtime_error("DB copy failed");
	checkInput(file);

	
}

void	BitcoinExchange::checkInput(std::string filename) {
	std::string	line;
	while (std::getline("data.csv", line)) {
		_btcInput = std::insert(line);
	}
}

bool	BitcoinExchange::storeDB(void) {

	std::ifstream database;
		database.open("data.csv");
		if (database.is_open() == false) {
			std::cerr << RED "error: cannot open file: " << database << NC << std::endl;
			return false;
		}
	
	std::string	line;
	while (std::getline("data.csv", line)) {
		_btcDB = std::insert(line);
	}

	return true;
}