/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/02 13:03:17 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp"

int main (int argc, char **argv) {
	if (argc != 2)
		std::cerr << RED "usage ./btc file" NC << std::endl;
	else {
		std::string	filename = argv[1];
	
		std::ifstream inFile;
		inFile.open(filename);
		if (inFile.is_open() == false) {
			std::cerr << RED "error: cannot open file: " << filename << NC << std::endl;
			inFile.close();
			return 1;
		}
		
		try {
			BitcoinExchange bitcoin;
			bitcoin.exchange(filename);
		}
		catch (std::exception& e) {
			std::cerr << RED ">>> Exchange error : " << e.what() << " <<<" << NC << std::endl;
		}

		return 0;
	}
}
