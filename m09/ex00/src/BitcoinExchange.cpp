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

// ------ CANNON FORM ------

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

// ----- MEMBER FUNCTIONS -----

void	BitcoinExchange::exchange(const std::string& filename) {
	if (int copy = storeDB() == false)
		throw std::runtime_error("DB copy failed");
	checkInput(file);

	
}

void	BitcoinExchange::checkInput(const std::string& filename) {
	std::string	line;
	while (std::getline(filename, line)) {
		if (line.find("date", "value"))
			;
		else {
			int	pos = line.find("|");
			if (pos == line.npos())
				std::cerr << RED << line << " : wrong input format" NC << std::endl;
			else {
				std::string date = line.substr(0, pos);
				std::string rawAmount = line.substr(pos + 1; line.size());
				if (isDateGood(date) && isValueGood(rawAmount)) {
					long	value;
					long	rate;
					long	amount;
					amount = std::stol(rawAmount);
					rate = findRate(date);
					value = rate * amount;
					std::cout << "The exchange value of " << amount << "BTC on " << date << " is " GRN << value << NC << std::endl;
				}
			}

		}
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
		std::string date = line.substr(0, pos);
		std::string rawRate = line.substr(pos + 1; line.size());
		if (isDateGood(date) && isValueGood(rawRate)) {
			long								rate = std::stol(rawRate);
			std::pair <std::string, double>		data;
			if (_btcDB.find("date", "exchange_rate"))
				;
			else {
				int	pos = line.find(",");
				if (pos == line.npos()) {
					throw std::runtime_error("wrong DB format");
				} else {
					data = std::make_pair(line.substr(0, pos), line.substr(pos + 1, line.size()));
					_btcDB[date] = rawRate;
				}
			}
		} else 
			throw std::runtime_error("wrong DB format");
	}

	return true;
}

long	BitcoinExchange::findRate(const std::string& date) {

}

// ----- OTHER FUNCTIONS ------

bool	isDateGood(const std::string& date) {
	std::tm	time = {};
	std::istringstream ss(date);
	ss >> std::get_time(&time, "%Y-%m-%d");
	if (ss.fail()) {
		return false;
	} else {
		if (time.tm_mon < 0 || time.tm_mon > 11) {
			return false;
		}
		if (time.tm_mday < 1 || time.tm_mday > 31) {
			return false;
		}
		if (time.tm_mon == 1) {
			if (isLeap(1900 + time.tm_year)) {
				if (time.tm_mday > 29)
					return false;
			} else {
				if (time.tm_mday > 28) {
					return false;
				}
			}
		}
		if (time.tm_mon == 3 || time.tm_mon == 5 || time.tm_mon == 8 || time.tm_mon == 10) {
			if (time.tm_mon > 30) {
				return false;
			}
		}
	}
	return true;
}


bool	isLeap(int year) {
	if (year % 4 == 0 && year % 100 != 0)
		return true;
	else if (year % 400 == 0)
		return true;
	return false;
}