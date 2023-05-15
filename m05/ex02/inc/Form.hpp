/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/15 08:39:22 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm ();
		AForm (std::string name, int Grade, int Execute);
		AForm (const AForm& other);
		~AForm (void);
		AForm& operator=(const AForm& rhs);

		std::string	getName(void) const;
		int			getSign(void) const;
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

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw() {return ("The Form is not Signed !");}
		};

		void beSign(const Bureaucrat& value);
		virtual void execute(const Bureaucrat& value) const = 0;

	private:
		const std::string	m_name;
		bool				m_signed;
		const int			m_grade;
		const int			m_execute;
};

std::ostream& operator<<(std::ostream& o, const AForm& value);

#endif