/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/06/09 13:34:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"
# include <cstdlib>

int main(int argc, char* argv) {
	if (argc != 2 || !argv[1]) {
		std::cerr << RED "Error. Usage : ./RPN \"values and operation\"" << std::endl;
		return 0;
	} else {
	
		std::string	args = argv[1];
		
		try {
			
			RPN calculator;
			calculator.argCheck(args);
			
		}
		catch (std::exception& e) {
			std::cerr << RED ">>> Unexpected behavior : " << e.what() << " <<<" NC << std::endl;
		}
	}
	
	return 0;
}