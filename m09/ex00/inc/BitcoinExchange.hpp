/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/05 12:21:24 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <ctime>
# include <map>


class BitcoinExchange {
	public:
		BitcoinExchange (void);
		BitcoinExchange (const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange (void);

		void	exchange(const std::string& filename);
		void	storeDB(void);
		void	checkInput(const std::string& filename);
		double	findRate(const std::string& date);

	private:
		std::map<std::string, double>	_btcDB;
};

bool		isValueGood(const std::string& rawValue);
bool		isDateGood(const std::string& date);
bool		isLeap(int year);
bool		isBeforeFirst(const std::string& date, const std::map<std::string, double>& _btcDB);
std::string	substractDay(const std::string& date);


#endif