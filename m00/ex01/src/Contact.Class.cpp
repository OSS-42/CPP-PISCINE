/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/27 09:29:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.Class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setInformation(int	flag) {
	if (flag == 0) {
		std::cout << "Enter a First Name" << std::endl;
	} else if (flag == 1) {
		std::cout << "Enter a Last Name" << std::endl;
	} else if (flag == 2) {
		std::cout << "Enter a Nickname" << std::endl;
	} else if (flag == 3) {
		std::cout << "Enter a Phone Number" << std::endl;
	} else if (flag == 4) {
		std::cout << "Enter a Darkest Secret" << std::endl;
	}
	
	std::string Input;
	
	while (1) {
		std::string Input;
		std::getline(std::cin, Input);
		std::istringstream buffer(Input);
		buffer >> std::ws;
		std::getline(buffer, Input);
		if (std::cin.eof())
			exit (0);
		switch (flag) {
			case 0 :
				this->m_FirstName = Input;
				break ;
			case 1 :
				this->m_LastName = Input;
				break ;
			case 2 :
				this->m_Nickname = Input;
				break ;
			case 3 :
				this->m_Phone = Input;
				break ;
			case 4 :
				this->m_Secret = Input;
				break ;
		}
		break ;
	}
	return ;
}

std::string	Contact::getInformation(int	flag) const {
	if (flag == 0)
		return (this->m_FirstName);
	else if (flag == 1)
		return (this->m_LastName);
	else if (flag == 2)
		return (this->m_Nickname);
	else if (flag == 3)
		return (this->m_Phone);
	else if (flag == 4)
		return (this->m_Secret);
	return (NULL);
}
