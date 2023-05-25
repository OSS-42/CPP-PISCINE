/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/24 17:55:54 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easyfind.hpp"
# include <set>
# include <cstdlib>

int main( void ) {

	try {
		std::set<int> tableA;		

		srand((unsigned) time(0));
		
		while (tableA.size() < 10) {
			unsigned int start = (rand() % 20 + 1);
			tableA.insert(start);
		}

		for (std::set<int>::iterator it = tableA.begin(); it != tableA.end(); ++it) {
			std::cout << *it << std::endl;
		}

		std::cout << YEL "let's find some numbers !" NC << "\n" << std::endl;
		easyfind(tableA, 4);
		easyfind(tableA, 2);
	}
	catch (std::exception& e) {
		std::cout << RED ">>> unexpected error : " << e.what() << " <<<" << NC << std::endl;
	}

	return 0;

}