/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/30 13:15:33 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp"

int main (int argc, char **argv) {
	if (argc != 2)
		std::cerr << RED "usage ./btc file" NC << std::endl;
	else {
		std::string	filename1 = argv[1];
	
		std::ifstream inFile;
		inFile.open(filename1);
		if (inFile.is_open() == false) {
			std::cerr << RED "error: cannot open file: " << filename1 << NC << std::endl;
			inFile.close();
			return ;
		}
		
		std::ifstream database;
		database.open("data.csv");
		if (database.is_open() == false) {
			std::cerr << RED "error: cannot open file: " << database << NC << std::endl;
		}
		
		BitcoinExchange bitcoin;
		bitcoin.exchange();

		return 0;
	}
}
