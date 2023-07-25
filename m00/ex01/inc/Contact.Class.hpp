/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:51:44 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/27 09:05:23 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>
# include <istream>
# include <sstream>
# include <string>
# include <cctype>

# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

class Contact {
	
public:

	// Constructor & destructor
	Contact(void);
	~Contact(void);
	
	// Accessors - Setters
	void	setInformation(int flag);
	
	// Accessors - Getters
	std::string	getInformation(int flag) const;

private:
	std::string	m_FirstName;
	std::string	m_LastName;
	std::string	m_Nickname;
	std::string	m_Phone;
	std::string	m_Secret;
};

#endif