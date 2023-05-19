/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/19 17:59:05 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Array.hpp"

int main( void ) {

try {
	int tableA[5] = {0, -21, -42, 42, 21};
	std::string tableB[10] = {"merci", "thanks", "gracias", "arrigato", "danke", "spassiba", "xie xie ni", "aychek", "choukran", "obrigado"};


	std::cout << MAG "---- INITIAL TABLES ----" NC << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << tableA[i];
		if (i != 4)
			std::cout << ", ";
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++) {
		std::cout << tableB[i];
		if (i != 10)
			std::cout << ", ";
	}
	std::cout << "\n" << std::endl;

	std::cout << CYN "calling iter()" NC << std::endl;
	::iter(tableA, 5, &addOne);
	::iter(tableB, 10, &addString);
	std::cout << std::endl;
	
	std::cout << MAG "---- NEW TABLES ----" NC << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << tableA[i];
		if (i != 4)
			std::cout << ", ";
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++) {
		std::cout << tableB[i];
		if (i != 10)
			std::cout << ", ";
	}

	return 0;
}
catch (...) {
	std::cout << RED ">>> Unexpected error <<<" NC << std::endl;
}

}