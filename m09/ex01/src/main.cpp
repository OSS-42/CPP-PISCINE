/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/09 15:04:40 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2 || !argv[1]) {
		std::cerr << RED "Error. Usage : ./RPN \"values and operation\"" << std::endl;
		return 0;
	} else {
		try {
			RPN calculator;
			
			std::string	arglist = argv[1];
			if (arglist.find_first_not_of("+-*/0123456789") != std::string::npos)
				throw std::runtime_error("Invalid input value");
			else {
				std::string delimiter = " ";
				for (int idx = 0; idx < arglist.size(); ++idx) {
					std::string arg = arglist.substr(idx, arglist.find(delimiter));
					
					if (isArgNumber(arg) == false)
						throw std::runtime_error("Invalide value");
					else {
						calculator.push(arg);
					}
						
				}
			}
			
			
		}
		catch (std::exception& e) {
			std::cerr << RED ">>> Unexpected behavior : " << e.what() << " <<<" NC << std::endl;
		}
	}
	
	return 0;
}