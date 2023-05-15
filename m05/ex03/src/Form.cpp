/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:39 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 16:51:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

// -------- CANNON ----------
AForm::AForm(void) : m_name("Default"), m_signed(0), m_grade(150), m_execute(150) {
	if (m_grade > 150 || m_grade < 1)
		throw std::out_of_range("bad arguments for the Form rules");
	else if (m_execute >150 || m_execute < 1)
		throw std::out_of_range("bad arguments for the Form rules");
	else
		std::cout << GRN "Default Form has been generated" NC << std::endl;
}

AForm::AForm(std::string name, int grade, int execute) : m_name(name), m_signed(0), m_grade(grade), m_execute(execute) {
	if (m_grade > 150 || m_grade < 1)
		throw std::out_of_range("bad arguments for the Form rules");
	else if (m_execute >150 || m_execute < 1)
		throw std::out_of_range("bad arguments for the Form rules");
	else
		std::cout << GRN "Form has been generated" NC << std::endl;
}

AForm::AForm(const AForm& other) : m_name(other.m_name), m_signed(other.m_signed), m_grade(other.m_grade), m_execute(other.m_execute) {
	*this = other;
}

AForm::~AForm(void) {
	std::cout << RED "Form has been destroyed" NC << std::endl;
}

AForm& AForm::operator=(const AForm& rhs) {
	if (this == &rhs)
		return (*this);
	m_signed = rhs.m_signed;
	return (*this);
}

// -------- GETTER FUNCTIONS ----------
std::string AForm::getName(void) const {
	return(this->m_name);
}

int AForm::getSign(void) const {
	if (m_signed == false)
		return (false);
	return(true);
}

int AForm::getGrade(void) const{
	return(this->m_grade);
}

int	AForm::getExecute(void) const {
	return(this->m_execute);
}

// -------- MEMBER FUNCTIONS ----------
void	AForm::beSign(const Bureaucrat& value) {
	if (value.getGrade() > this->getGrade())
		AForm::GradeTooLowException();
	else if (this->m_signed == true)
		throw AForm::FormAlreadySigned();
	else {
		m_signed = true;
		std::cout << MAG "Congratulations, the Form has be signed !" NC << std::endl;
	}
}

// -------- OTHER ----------
std::ostream& operator<<(std::ostream& o, const AForm& value) {
	o << CYN << "Form Name : " << value.getName() << "\n" \
	<< "Form Status : " << value.getSign() << "\n" \
	<< "Form min Grade : " << value.getGrade() <<  "\n" \
	<< "Form min Execute : " << value.getExecute() << NC << std::endl;
	return (o);
}