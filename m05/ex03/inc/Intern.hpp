/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:36:04 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/11 10:07:55 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Intern {
	public:
		Intern();
		~Intern();
	
		AForm* makeForm(std::string formType, std::string formTarget);

	private:
		Intern(const Intern& other);
		Intern& operator=(const Intern& rhs);
};

#endif