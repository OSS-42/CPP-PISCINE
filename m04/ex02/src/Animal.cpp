/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:29:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"

// --------------- CANNON -----------------
AAnimal::AAnimal (void) : m_type("mammifere") {
	std::cout << MAG "default constructor AAnimal" NC << std::endl;
	return ;
}

AAnimal::AAnimal (std::string type) : m_type(type) {
	std::cout << GRN "parametric constructor AAnimal of type " NC << m_type << std::endl;
	return ;
}

AAnimal::AAnimal (const AAnimal& other) {
	std::cout << YEL "copy constructor AAnimal" NC << std::endl;
	*this = other;
	return ;
}

AAnimal& AAnimal::operator= (const AAnimal& rhs) {
	m_type = rhs.m_type;
	return *this;
}

AAnimal::~AAnimal (void) {
	std::cout << RED "destructor AAnimal" NC <<std::endl;
	return ;
}

std::string AAnimal::getType (void) const {
	return (m_type);
}
