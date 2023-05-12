/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/11 17:14:32 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RobotomyRequestForm.hpp"

#include <cstdlib>

// ------ CANNON -------
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {
	std::cout << GRN "Default Robotomy Request Form for " << this->getName() << " generated" NC << std::endl;
}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
// 	*this = other;
// }

// RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
// 	if (this == &rhs)
// 		return (*this);

// 	return (*this);
// }

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RED "Robotomy Request Form for " << this->getName() << " destroyed" NC << std::endl;
}

// ----- MEMBER FUNCTIONS ------
std::string RobotomyRequestForm::getTarget() const {
	return(this->getName());
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getGrade())
		AForm::GradeTooLowException();
	else if (this->getSign() == false)
		throw AForm::FormNotSignedException();
	else {
		srand((unsigned) time(0));
		bool start = (rand() % 2);
		if (start == 0) {
			std::cout << MAG ">>> drill not starting <<<" NC << std::endl;
			std::cout <<std::endl;
			system("afplay special/electric-drill-02.mp3 &>/dev/null &");
			return ;
		} else {
			std::cout << CYN ">>> drill starting operation <<<" NC << std::endl;
			std::cout <<std::endl;
			system("afplay special/electric-drill-01.mp3 &>/dev/null &");
			return ;
		}
	}
}
