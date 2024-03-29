/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/21 09:32:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2 || !argv[1]) {
		std::cout << RED "Error. Usage : ./RPN \"values and operation\"" << std::endl;
		return 0;
	} else {
		try {
			
			std::string	arglist = argv[1];
			if (arglist.find_first_not_of("+-*/0123456789 ") != std::string::npos)
				throw std::runtime_error("Invalid input value");
			else
				RPN calculator(argv[1]);
		}
		catch (std::exception& e) {
			std::cout << RED ">>> Error : " << e.what() << " <<<" NC << std::endl;
		}
	}
	return 0;
}

//./RPN "7 7 *- 7 - "
//./RPN "7 7 * 7 -                  "