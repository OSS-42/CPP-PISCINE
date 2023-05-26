/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/26 00:08:50 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"
# include <cstdlib>

int main()
{
	try {
		std::cout << "\n" << CYN "---- BASES TESTS ----" NC << std::endl;
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		sp.printValues();

		sp.addNumber(42);
	}
	catch (std::exception& e) {
		std::cout << RED ">>> error : " << e.what() << " <<<" NC << std::endl;
	}

	try {
		std::cout << "\n" << CYN "---- TESTS 2 ----" NC << std::endl;
		
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printValues();
		std::cout << "Longest Span = " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;

		Span sp2 = Span(1);
		
		std::cout << std::endl;
		sp2.addNumber(6);
		sp2.printValues();
		std::cout << "Longest Span = " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest Span = " << sp2.shortestSpan() << std::endl;

		// return 0;
	}
	catch (std::exception& e) {
		std::cout << RED ">>> error : " << e.what() << " <<<" NC << std::endl;
	}
	
	try {
		std::cout << "\n" << CYN "---- TESTS 3 ----" NC << std::endl;
		
		Span sp = Span(15000);
		sp.addBigNumbers();

		std::cout << "Size of vector : " << sp.getSize() << std::endl;
		sp.printValues();
		std::cout << "Longest Span = " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;

	}
	catch (std::exception& e) {
		std::cout << RED ">>> error : " << e.what() << " <<<" NC << std::endl;
	}
}