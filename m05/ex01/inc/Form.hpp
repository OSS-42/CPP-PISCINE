/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:46:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/12 08:54:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form ();
		Form (std::string name, int Grade, int Execute);
		Form (const Form& other);
		~Form (void);
		Form& operator=(const Form& rhs);

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

	private:
		const std::string	m_name;
		bool				m_signed;
		int					m_grade;
		int					m_execute;
};

std::ostream& operator<<(std::ostream& o, const Form& value);

#endif