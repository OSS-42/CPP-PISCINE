/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:00:26 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 14:14:35 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Materia.hpp"

AMateria::AMateria () {
	std::cout << GRN "default Materia" NC << std::endl;
}

AMateria::AMateria (std::string const& type) {
	m_type = type;
	return ;
}

AMateria::AMateria (const AMateria& other) {
	std::cout << YEL "Copy Materia" NC << std::endl;
	*this = other;
}

AMateria& AMateria::operator= (const AMateria& rhs) {
	if (this == &rhs)
		return *this;
	this->m_type = rhs.m_type;
	return (*this);
}

AMateria::~AMateria () {
	std::cout << RED "Bye bye Materia" NC << std::endl;
}

//Returns the materia type
std::string const& AMateria::getType() const {
	return (m_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Not able to use anything" << std::endl;
	(void) target;
}