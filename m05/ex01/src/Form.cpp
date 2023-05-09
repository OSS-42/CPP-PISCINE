/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:39 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 13:46:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

// -------- CANNON ----------
Form::Form(std::string name, int minGrade, int maxGrade) : m_name(name), m_signed(0), m_minGrade(minGrade), m_maxGrade(maxGrade) {
	if (m_maxGrade > 150 || m_minGrade < 1)
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
	m_signed = rhs.m_signed;
	m_minGrade = rhs.m_minGrade;
	m_maxGrade = rhs.m_maxGrade;
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

int Form::getMinGrade(void) const{
	return(this->m_minGrade);
}

int	Form::getMaxGrade(void) const {
	return(this->m_maxGrade);
}

// -------- MEMBER FUNCTIONS ----------
void	Form::beSign(const Bureaucrat& value) {
	if (value.getGrade() < this->getMinGrade())
		throw Form::GradeTooHighException();
	else if (value.getGrade() > this->getMaxGrade())
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
	<< "Form min Grad : " << value.getMinGrade() <<  "\n" \
	<< "Form max Grad : " << value.getMaxGrade() << NC << std::endl;
	return (o);
}