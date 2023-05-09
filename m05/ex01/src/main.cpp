/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 13:45:22 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp" 

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
	std::cout << "--- Will ---" << std::endl;
	try {
		Bureaucrat Will ("Will", 42);
		std::cout << std::endl;
		Will.gradeUp();
		Will.gradeDown();
		std::cout << Will << std::endl;
		std::cout << std::endl;

		try {
			std::cout << "------ Form generation ------" << std::endl;
			std::cout << "alpha" << std::endl;
			Form alpha("A42", 42, 42);
			std::cout << "beta" << std::endl;
			Form beta("A43", 42, 1);
			std::cout << "zeta" << std::endl;
			Form zeta("A21", 2, 1);
			std::cout << "omega" << std::endl;
			Form omega("A100", 150, 130);
			std::cout << std::endl;

			std::cout << "------ Bureaucrat sign form ------" << std::endl;
			Will.signForm(alpha);
			Will.signForm(alpha);
			Will.signForm(beta);
			Will.signForm(zeta);
			Will.signForm(omega);
			std::cout << std::endl;

			std::cout << "------ Is form sign ------" << std::endl;
			std::cout << alpha << std::endl;
			std::cout << beta << std::endl;
			std::cout << zeta << std::endl;
			std::cout << omega << std::endl;
			std::cout << std::endl;

			std::cout << "------ Bad form creation ------" << std::endl;
			std::cout << "alien" << std::endl;
			Form alien("B200", 1, 151);
			std::cout << "morgan" << std::endl;
			Form morgan("T800", -42, 149);
		
		}
		catch(const std::exception& e) {
			std::cerr << MAG << e.what() << " Form could not be created." NC << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << MAG << e.what() << " Invalid Parameters, cannot instanciate the bureaucrat." NC << std::endl;
	}

	return 0;
}