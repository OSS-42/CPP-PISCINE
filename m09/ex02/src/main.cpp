/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/18 14:41:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc != 2 || !argv[1]) {
		std::cout << RED "Error. Usage: ./PmergeMe \"values\"" NC << std::endl;
		return 0;
	} else {
		try {
			std::string arglist = argv[1];
			if (arglist.find_first_not_of("0123456789") != std::string::npos)
				throw std::runtime_error("Invalid input value");
			else
				PmergeMe sort(argv[1]);
		}
		catch (std::exception& e) {
			std::cout << RED ">>> Error : " << e.what() << " <<<" NC << std::endl;
		}
	}
	return 0;
}