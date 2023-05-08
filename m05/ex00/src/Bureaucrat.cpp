/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/08 15:48:29 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

// --------------- CANNON -----------------
Bureaucrat::Bureaucrat (std::string name, int grade) : m_name(name), m_grade(grade) {
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << GRN << m_name << ", bureaucrat grade " << m_grade << " appeared." NC << std::endl;
}

Bureaucrat::Bureaucrat (const Bureaucrat& other) {
	*this = other;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << RED "Bureaucrat " << m_name << " retired" NC << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	m_grade = rhs.m_grade;
	return (*this);
}

// ------------ MEMBER FUNCTION --------------
std::string Bureaucrat::getName (void) const {
	return (this->m_name);
}

int	Bureaucrat::getGrade (void) const {
	return (this->m_grade);
}

void	Bureaucrat::gradeUp (void) {
	if (this->getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	else {
		this->m_grade -= 1;
		std::cout << CYN << this->getName() << " has a new grade of " << this->getGrade() << NC << std::endl;
	}
}

void	Bureaucrat::gradeDown (void) {
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		this->m_grade += 1;
		std::cout << CYN << this->getName() << " has a new grade of " << this->getGrade() << NC << std::endl;
	}
}

// ------------ OTHER --------------
std::ostream& operator<<(std::ostream& o, const Bureaucrat& value) {
	return (o << MAG << value.getName() << ", Bureaucrat of grade " << value.getGrade() << NC << std::endl);
}
