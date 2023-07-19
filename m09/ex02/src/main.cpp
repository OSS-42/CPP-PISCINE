/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/19 14:26:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << RED "Error: Usage: ./PmergeMe \"values\" (min 2)" NC << std::endl;
		return 0;
	} else {
		long idx = 1;
		while (idx < argc) {
			std::string arg = argv[idx];
			if (arg.find_first_not_of("0123456789") != std::string::npos)
				throw std::runtime_error("Invalid input value");
			else 
				prepData(std::stod(arg));
			idx++;
		}

		catch (std::exception& e) {
			std::cout << RED ">>> Error : " << e.what() << " <<<" NC << std::endl;
		}
	}
	return 0;
}
