/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 10:59:17 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/WrongAnimal.hpp"

// --------------- CANNON -----------------
WrongAnimal::WrongAnimal (void) : m_type("mammifere") {
	std::cout << MAG "default constructor WrongAnimal" NC << std::endl;
	return ;
}

WrongAnimal::WrongAnimal (std::string type) : m_type(type) {
	std::cout << GRN "parametric constructor WrongAnimal of type " NC << m_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal (const WrongAnimal& other) {
	std::cout << YEL "copy constructor WrongAnimal" NC << std::endl;
	*this = other;
	return ;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& rhs) {
	m_type = rhs.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal (void) {
	std::cout << RED "destructor WrongAnimal" NC <<std::endl;
	return ;
}

std::string WrongAnimal::getType (void) const {
	return (m_type);
}

void	WrongAnimal::makeSound(void) const {
		std::cout << "Bonjour je suis Titi" << std::endl;
}