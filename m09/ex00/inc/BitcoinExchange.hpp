/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/30 15:27:46 by ewurstei         ###   ########.fr       */
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
# include <map>


class BitcoinExchange {
	public:
		BitcoinExchange (void);
		BitcoinExchange (const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange (void);

		void			exchange(std::string filename) ;
		bool			storeDB(void);
		void			checkInput(std::string filename);
		unsigned int 	get_btcValue(std::string date);

	private:
		std::map<std::string, unsigned int>	_btcDB;
		std::map<std::string, unsigned int> _btcInput;
};

#endif