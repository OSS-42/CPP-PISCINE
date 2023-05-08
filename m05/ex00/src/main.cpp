/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/08 12:58:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

int	main(void) {

	try {
		Bureaucrat Joe ("Joe", 42);
		std::cout << std::endl;
	
		Joe.gradeDown();
		Joe.gradeUp();
		std::cout << std::endl;
	}
	catch(std::exception e) {
		std::cerr << MAG << e.what() << ": Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat Will ("Will", -42);
		std::cout << std::endl;
		Will.gradeUp();
		std::cout << std::endl;
	}
	catch(std::exception e) {
		std::cerr << MAG << e.what() << ": Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat Jack ("Jack", 150);
		std::cout << std::endl;
		Jack.gradeDown();
		Jack.gradeUp();
		std::cout << std::endl;
	}
	catch(std::exception e) {
		std::cerr << MAG << e.what() << ": Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat Avarell ("Avarell", 151);
		std::cout << std::endl;
		Avarell.gradeUp();
		Avarell.gradeDown();
		std::cout << std::endl;
	}
	catch(std::exception e) {
		std::cerr << MAG << e.what() << ": Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat Mama ("Mama Dalton", 1);
		std::cout << std::endl;
		Mama.gradeUp();
		Mama.gradeDown();
		std::cout << std::endl;
	}
	catch(std::exception e) {
		std::cerr << MAG << e.what() << ": Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}

	return 0;
}