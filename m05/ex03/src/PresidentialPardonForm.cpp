/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:06:42 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/11 17:14:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../inc/PresidentialPardonForm.hpp"

// ------ CANNON -------
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {
	std::cout << GRN "Presidential Pardon Form for " << this->getName() << " created" NC << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << RED "Presidential Pardon Form for " << this->getName() << " destroyed" NC << std::endl;
}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
// 	*this = other;
// }

// PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
// 	if (this == &rhs)
// 		return (*this);
// 	return (*this);
// }

// ------ MEMBER FUNCTIONS -------

std::string PresidentialPardonForm::getTarget() const {
	return(this->getName());
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getGrade())
		AForm::GradeTooLowException();
	else if (this->getSign() == false)
		throw AForm::FormNotSignedException();
	else {
		std::cout << REDB "Zaphod Beeblebrox, aka, Big Z, is pardoning " << this->getName() << NC << std::endl;
	}
}