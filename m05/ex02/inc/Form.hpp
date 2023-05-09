/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 16:51:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm (std::string name, int Grade, int Execute);
		AForm (const AForm& other);
		~AForm (void);
		AForm& operator=(const AForm& rhs);

		std::string	getName(void) const;
		std::string	getSign(void) const;
		int			getGrade(void) const;
		int			getExecute(void) const;

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
				const char* what() const throw() {return ("Grade or Execute parameters invalid");}
		};

		void beSign(const Bureaucrat& value);
		virtual void execute(const Bureaucrat& value) = 0;

	private:
		const std::string	m_name;
		bool				m_signed;
		int					m_grade;
		int					m_execute;
};

std::ostream& operator<<(std::ostream& o, const AForm& value);

#endif