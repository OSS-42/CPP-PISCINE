/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/10 14:08:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

# include "Form.hpp"

class AForm;

class Bureaucrat {
	public :
		Bureaucrat (std::string name, int grade);					// constructor
		Bureaucrat (const Bureaucrat& other);				// copy
		virtual ~Bureaucrat (void);						// destructor

		Bureaucrat& operator=(const Bureaucrat& rhs); //operator overload

		std::string	getName(void) const ;
		int			getGrade(void) const ;

		void	gradeUp(void);
		void	gradeDown(void);
		
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {return ("Grade Too High !");}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {return ("Grade Too Low !");}
		};

		void	signForm(AForm& value);
		void	executeForm(const AForm& form);

	protected :

	private:
		Bureaucrat (void); 								// default constructor
		const std::string	m_name;
		int					m_grade;

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& value);

#endif