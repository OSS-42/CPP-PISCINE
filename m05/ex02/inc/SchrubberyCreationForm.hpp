/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:39:31 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/09 17:13:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHRUBBERYCREATIONFORM_HPP
# define SCHRUBBERYCREATIONFORM_HPP

# include "../inc/Form.hpp"
# include <fstream>

class SchrubberyCreationForm : public AForm {
	SchrubberyCreationForm (std::string target);
	SchrubberyCreationForm (const SchrubberyCreationForm& other);
	SchrubberyCreationForm& operator=(const SchrubberyCreationForm& rhs);
	~SchrubberyCreationForm (void);
	
    std::string getTarget(void);
    
	void execute(const Bureaucrat& executor);

};

#endif
