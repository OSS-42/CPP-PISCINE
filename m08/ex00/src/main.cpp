/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/24 13:53:40 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easyfind.hpp"

int main( void ) {

	try {
		int tableA[5] = {0, -21, -42, 42, 21};

		easyfind(tableA, 42);
		easyfind(tableA, -42);
		easyfind(tableA, 142);
	}
	catch (std::exception& e) {
		std::cout << RED ">>> unexpected error : " << e.what() << NC << std::endl;
	}

	return 0;

}