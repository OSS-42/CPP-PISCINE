/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/23 08:56:12 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Array.hpp"

int main( void ) {

try {
	int tableA[5] = {0, -21, -42, 42, 21};
	std::string tableB[10] = {"merci", "thanks", "gracias", "arrigato", "danke", "spassiba", "xie xie ni", "aychek", "choukran", "obrigado"};


	std::cout << MAG "---- INITIAL TABLES ----" NC << std::endl;

	
	std::cout << MAG "---- NEW TABLES ----" NC << std::endl;
	

	return 0;
}
catch (...) {
	std::cout << RED ">>> Unexpected error <<<" NC << std::endl;
}

}