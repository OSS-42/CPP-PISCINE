/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:35:59 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/11 12:08:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Intern.hpp"
# include "../inc/SchrubberyCreationForm.hpp"
# include "../inc/RobotomyRequestForm.hpp"
# include "../inc/PresidentialPardonForm.hpp"

// ------ CANNON -------
Intern::Intern () {
	std::cout << GRN "An Intern has been recruited." NC << std::endl;
}

Intern::~Intern () {
	std::cout << RED "An Intern has been fired." NC << std::endl;
}

// Intern::Intern(const Intern& other) {
// 	*this = other;
// }

// Intern& Inter::operator=(const Intern& rhs) {
// 	if (this == &rhs)
// 		return (*this);
// 	return (*this);
// }

// ------ MEMBER FUNCTION --------
AForm*	Intern::makeForm(std::string formType, std::string formTarget) {
	std::string formsInventory[3] = {"schrubbery", "robotomy", "pardon"};
	
	int	flag = 3;
	for (int i = 0; i < 3; i++) {
		if (!formsInventory[i].compare(formType)) {
			flag = i;
			break ;
		} else {
			flag = 4;
		}
	}

	switch (flag) {
		case 0 :
			std::cout << CYN "Intern creates " << formType << NC << std::endl;
			return (new SchrubberyCreationForm(formTarget));
		case 1 :
			std::cout << CYN "Intern creates " << formType << NC << std::endl;
			return (new RobotomyRequestForm(formTarget));
		case 2 :
			std::cout << CYN "Intern creates " << formType << NC << std::endl;
			return (new PresidentialPardonForm(formTarget));
		case 3 :
			std::cout << GRN "There is no Form for the Intern" NC << std::endl;
			return (NULL);
	}
	return (NULL);
}