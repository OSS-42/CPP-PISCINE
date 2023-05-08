/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/08 16:03:39 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

int	main(void) {

	std::cout << std::endl;
	std::cout << "--- Joe ---" << std::endl;
	try {
		Bureaucrat Joe ("Joe", 42);
		std::cout << std::endl;
	
		Joe.gradeDown();
		Joe.gradeUp();
		std::cout << Joe << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "--- Will ---" << std::endl;
	try {
		Bureaucrat Will ("Will", -42);
		std::cout << std::endl;
		Will.gradeUp();
		std::cout << Will << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "--- Jack ---" << std::endl;
	try {
		Bureaucrat Jack ("Jack", 150);
		std::cout << std::endl;
		Jack.gradeDown();
		Jack.gradeUp();
		std::cout << Jack << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "--- Avarell ---" << std::endl;
	try {
		Bureaucrat Avarell ("Avarell", 151);
		std::cout << std::endl;
		Avarell.gradeUp();
		Avarell.gradeDown();
		std::cout << Avarell << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "--- Mama Dalton ---" << std::endl;
	try {
		Bureaucrat Mama ("Mama Dalton", 1);
		std::cout << std::endl;
		Mama.gradeDown();
		Mama.gradeUp();
		std::cout << Mama << std::endl;
		Mama.gradeUp();
		std::cout << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}

	return 0;
}