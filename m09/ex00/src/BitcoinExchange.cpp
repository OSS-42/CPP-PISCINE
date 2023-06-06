/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:01:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/06 11:44:08 by ewurstei         ###   ########.fr       */
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
	storeDB();
	// checkInput(filename);
}

void	BitcoinExchange::checkInput(const std::string& filename) {

	std::ifstream sourceFile;
	sourceFile.open(filename);
	if (sourceFile.is_open() == false)
		throw std::runtime_error("cannot open source file");

	std::string	line;
	while (std::getline(sourceFile, line)) {
		if (line.find("date") != std::string::npos || line.find("value") != std::string::npos) {
			std::cout << CYN "continue #1" NC << std::endl;
			continue;
		}
		else {
			size_t	pos = line.find("|");
			if (pos == std::string::npos)
				std::cerr << RED << line << "wrong input format" NC << std::endl;
			else {
				std::string date = line.substr(0, pos);
				std::cout << CYN << date << NC << std::endl;
				std::string rawAmount = line.substr(pos + 1, line.size());
				std::cout << CYN << rawAmount << NC << std::endl;
				if (isDateGood(date) && isValueGood(rawAmount)) {
					double	value;
					double	rate;
					double	amount;
					
					amount = std::stod(rawAmount);
					if (isBeforeFirst(date, _btcDB) || isAfterToday(date)) {
						std::cerr << date << " : " << RED << "date before DB first date or after today, no exchange rate." NC << std::endl;
					} else {
						rate = findRate(date);
						if (rate == -1)
							std::cout << date << " : " << RED "No exchange rate found, date invalid" NC << std::endl;
						else {
							value = rate * amount;
							std::cout << rate << std::endl;
							std::cout << "The exchange value of " << amount << "BTC on " << date << " is " GRN << value << NC << std::endl;
						}
					}
				}
			}
		}
	}
}

void	BitcoinExchange::storeDB(void) {

	std::ifstream database;
	database.open("src/data.csv");
	if (database.is_open() == false)
		throw std::runtime_error("cannot open DB file");
	
	std::string	line;
	while (std::getline(database, line)) {
		size_t pos = line.find(",");
		if (pos == std::string::npos)
				throw std::runtime_error("wrong DB format. Usage 'date,rate'");
		if (line.find("date") != std::string::npos || line.find("exchange_rate") != std::string::npos) {
			std::cout << CYN "continue #2" NC << std::endl;
			continue ;
		}
		std::string date = line.substr(0, pos);
		std::string rawRate = line.substr(pos + 1, line.size());
		if (isDateGood(date) && isValueGood(rawRate)) {
			double	rate = std::stod(rawRate);
			_btcDB.insert(std::make_pair(date, rate));
		} else 
			throw std::runtime_error("wrong DB date or value formatting");
	}
	std::cout << CYN "DB Check" NC << std::endl;
	std::cout << _btcDB.find("2021-04-15")->second << " vs (62969.12)" << std::endl;
	std::cout << _btcDB.find("2010-08-20")->second << " vs (0,07)" << std::endl;
	std::cout << _btcDB.find("2022-03-29")->second << " vs (47115.93)" << std::endl;
	std::cout << GRN ">>> DB Stored, Exchange ready. <<<" NC << std::endl;
}

double	BitcoinExchange::findRate(const std::string& date) {
	
	if (_btcDB.find(date) == _btcDB.end()) {
		std::cout << "coucou" << std::endl;
		// findRate(substractDay(date));
	}
	return (_btcDB.find(date)->second);
}

// ----- OTHER FUNCTIONS ------

bool	isDateGood(const std::string& date) {
	std::tm	time = {};
	std::istringstream ss(date);
	ss >> std::get_time(&time, "%Y-%m-%d");
	if (ss.fail()) {
		std::cout << RED "date KO #0" NC << std::endl;
		return false;
	} else {
		if (time.tm_mon < 0 || time.tm_mon > 11) {
			std::cout << RED "date KO #1" NC << std::endl;
			return false;
		}
		if (time.tm_mday < 1 || time.tm_mday > 31) {
			std::cout << RED "date KO #2" NC << std::endl;
			return false;
		}
		if (time.tm_mon == 1) {
			if (isLeap(1900 + time.tm_year)) {
				if (time.tm_mday > 29) {
					std::cout << RED "date KO #3" NC << std::endl;
					return false;
				}
			} else {
				if (time.tm_mday > 28) {
					std::cout << RED "date KO #4" NC << std::endl;
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
	std::cout << GRN "date OK" NC << std::endl;
	return true;
}


bool	isLeap(int year) {
	if (year % 4 == 0 && year % 100 != 0)
		return true;
	else if (year % 400 == 0)
		return true;
	return false;
}

bool	isValueGood(const std::string& rawValue) {
	std::istringstream ss(rawValue);
	double value;
	ss >> value;
	if (ss.fail() || !ss.eof())
		return false;
	std::cout << GRN "value OK" NC << std::endl;
	return true;
}

bool	isBeforeFirst(const std::string& date, const std::map<std::string, double>& btcDB) {
	// if (btcDB.empty())
	// 	throw std::runtime_error("DB is empty");

	std::string firstDate = btcDB.begin()->first;
	std::cout << date << " vs " << firstDate << std::endl;
	if (date < firstDate)
		return true;
	else
		return false;
}

bool isAfterToday(const std::string& date) {
	std::time_t now = std::time(0);
	std::tm* now_tm = std::localtime(&now);

    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", now_tm);

    std::string currentDate(buffer);

    if (date > currentDate)
		return true;
	else
		return false;
}

std::string	substractDay(const std::string& date) {
	std::tm time = {};
	std::istringstream ss(date);
	ss >> std::get_time(&time, "%Y-%m-%d");
	
	time.tm_mday--;
	std::mktime(&time);

	char buffer[10];
	std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &time);

	return std::string (buffer);
}