/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:39 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 16:51:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

// -------- CANNON ----------
Form::Form(std::string name, int grade, int execute) : m_name(name), m_signed(0), m_grade(grade), m_execute(execute) {
	if (m_grade > 150 || m_grade < 1)
		throw Form::InvalidParameters();
	else if (m_execute >150 || m_execute < 1)
		throw Form::InvalidParameters();
	else
		std::cout << GRN "Form has been generated" NC << std::endl;
}

Form::Form(const Form& other) {
	*this = other;
}

Form::~Form(void) {
	std::cout << RED "Form has been destroyed" NC << std::endl;
}

Form& Form::operator=(const Form& rhs) {
	if (this == &rhs)
		return (*this);
	m_signed = rhs.m_signed;
	m_grade = rhs.m_grade;
	m_execute = rhs.m_execute;
	return (*this);
}

// -------- GETTER FUNCTIONS ----------
std::string Form::getName(void) const {
	return(this->m_name);
}

std::string Form::getSign(void) const {
	if (m_signed == 0)
		return ("not signed");
	return("signed");
}

int Form::getGrade(void) const{
	return(this->m_grade);
}

int	Form::getExecute(void) const {
	return(this->m_execute);
}

// -------- MEMBER FUNCTIONS ----------
void	Form::beSign(const Bureaucrat& value) {
	if (value.getGrade() < this->getGrade())
		throw Form::GradeTooHighException();
	else if (value.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	else if (this->m_signed == true)
		throw Form::FormAlreadySigned();
	else {
		m_signed = true;
		std::cout << MAG "Congratulations, the form has be signed !" NC << std::endl;
	}
}

// -------- OTHER ----------
std::ostream& operator<<(std::ostream& o, const Form& value) {
	o << CYN << "Form Name : " << value.getName() << "\n" \
	<< "Form Status : " << value.getSign() << "\n" \
	<< "Form min Grade : " << value.getGrade() <<  "\n" \
	<< "Form min Execute : " << value.getExecute() << NC << std::endl;
	return (o);
}