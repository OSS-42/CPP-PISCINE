/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:39:31 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/10 16:21:05 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHRUBBERYCREATIONFORM_HPP
# define SCHRUBBERYCREATIONFORM_HPP

# include "../inc/Form.hpp"
# include <fstream>

class AForm;
class Bureaucrat;

class SchrubberyCreationForm : public AForm {
	public:
		SchrubberyCreationForm (std::string target);
		~SchrubberyCreationForm (void);
		
		std::string getTarget(void) const;
		
		void execute(const Bureaucrat& executor) const;

	private:
		SchrubberyCreationForm (const SchrubberyCreationForm& other);
		SchrubberyCreationForm& operator=(const SchrubberyCreationForm& rhs);

};

#endif
