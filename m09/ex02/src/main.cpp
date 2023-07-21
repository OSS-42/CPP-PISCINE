/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/21 10:33:24 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << RED "Error: Usage: ./PmergeMe \"values\" (min 2)" NC << std::endl;
		return 0;
	} else {
		try {
			long idx = 1;
			std::list<double>	arglist;
			std::clock_t	start = 0;
			
			while (idx < argc) {
				std::string arg = argv[idx];
				if (arg.find_first_not_of("0123456789") != std::string::npos || arg.find("-") != std::string::npos || std::stod(arg) > INT_MAX)
					throw std::invalid_argument("Invalid input value");
				else {
					start = std::clock();
					arglist.push_back(std::stod(arg));
				}
				idx++;
			} 
			PmergeMe sort(arglist, start);
		} catch (std::exception& e) {
			std::cout << RED ">>> Error : " << e.what() << " <<<" NC << std::endl;
		}
	}
	return 0;
}
