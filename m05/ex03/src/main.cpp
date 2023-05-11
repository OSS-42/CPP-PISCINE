/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/11 12:12:33 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"
# include "../inc/SchrubberyCreationForm.hpp"
# include "../inc/RobotomyRequestForm.hpp"
# include "../inc/PresidentialPardonForm.hpp"
# include "../inc/Form.hpp"
# include "../inc/Intern.hpp"

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
	std::cout << "--- Jack & Will & Avarell ---" << std::endl;
	try {
		Intern	Joe;
		Bureaucrat Will ("Will", 42);
		Bureaucrat Avarell("Avarell", 149);
		std::cout << std::endl;
		Will.gradeUp();
		Will.gradeDown();
		std::cout << Will << std::endl;
		std::cout << std::endl;

		try {
			std::cout << "------ SCHRUBBERIES ------" << std::endl;
			std::cout << "jardin" << std::endl;
			AForm*	scf;
			scf = Joe.makeForm("schrubbery", "jardin");
			std::cout << std::endl;
			
			Avarell.executeForm(*scf);
			Will.executeForm(*scf);
			std::cout << std::endl;
			
			Will.signForm(*scf);
			Will.executeForm(*scf);
			std::cout << std::endl;

			std::cout << "------ DRILLS ------" << std::endl;
			std::cout << "drill1" << std::endl;
			AForm*	rrf;
			rrf = Joe.makeForm("robotomy", "Blender");
			std::cout << std::endl;

			Avarell.executeForm(*rrf);
			Will.executeForm(*rrf);
			std::cout << std::endl;
			
			Will.signForm(*rrf);
			Will.executeForm(*rrf);
			std::cout << std::endl;

			std::cout << "------ PARDONS ------" << std::endl;
			std::cout << "Pardon1" << std::endl;
			AForm*	ppf;
			ppf = Joe.makeForm("pardon", "Arthur Dent");
			std::cout << std::endl;
			
			Bureaucrat Marvin("Marvin", 2);
			std::cout << std::endl;
			
			Marvin.signForm(*ppf);
			Marvin.executeForm(*ppf);
			std::cout << std::endl;

			delete scf;
			delete rrf;
			delete ppf;
			
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