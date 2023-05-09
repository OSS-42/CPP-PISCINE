/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 11:34:47 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form (std::string name, int minGrade, int maxGrade);
		Form (const Form& other);
		~Form (void);
		Form& operator=(const Form& rhs);

		std::string	getName(void) const;
		std::string	getSign(void) const;
		int			getMinGrade(void) const;
		int			getMaxGrade(void) const;

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {return ("Grade Too Low !");}
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {return ("Grade Too High !");}
		};

		class FormAlreadySigned : public std::exception {
			public:
				const char* what() const throw() {return ("Form is already signed !");}
		};

		class InvalidParameters : public std::exception {
			public:
				const char* what() const throw() {return ("Grade limits invalid");}
		};

		void beSign(const Bureaucrat& value);

	private:
		const std::string	m_name;
		bool				m_signed;
		int					m_minGrade;
		int					m_maxGrade;
};

std::ostream& operator<<(std::ostream& o, const Form& value);

#endif