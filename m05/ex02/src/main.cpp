/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/10 16:49:50 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"
# include "../inc/SchrubberyCreationForm.hpp"
# include "../inc/RobotomyRequestForm.hpp"

int	main(void) {

	std::cout << std::endl;
	std::cout << "--- Joe ---" << std::endl;
	try {
		Bureaucrat Joe ("Joe", -42);
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
	std::cout << "--- Jack & Will ---" << std::endl;
	try {
		Bureaucrat Jack ("Jack", 142);
		Bureaucrat Will ("Will", 42);
		std::cout << std::endl;
		Will.gradeUp();
		Will.gradeDown();
		std::cout << Will << std::endl;
		std::cout << std::endl;

		try {
			std::cout << "------ SCHRUBBERIES ------" << std::endl;
			std::cout << "jardin & gazon" << std::endl;
			SchrubberyCreationForm alpha("jardin");
			SchrubberyCreationForm beta("gazon");
			std::cout << std::endl;
			
			Will.signForm(alpha);
			Will.executeForm(alpha);
			std::cout << std::endl;
			
			Jack.signForm(beta);
			Jack.executeForm(beta);
			std::cout << std::endl;

			std::cout << "------ DRILLS ------" << std::endl;
			std::cout << "drill1 & drill2" << std::endl;
			RobotomyRequestForm drill1("Jack");
			RobotomyRequestForm drill2("Joe");
			Will.signForm(drill1);
			Will.executeForm(drill1);
			std::cout << std::endl;

			Jack.signForm(drill1);
			Jack.executeForm(drill1);
			std::cout << std::endl;

			
		}
		catch(const std::exception& e) {
			std::cerr << MAG << e.what() << ": Form could not be created." NC << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}

	return 0;
}