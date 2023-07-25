/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/26 16:07:40 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"

// --------------- CANNON -----------------
Animal::Animal (void) : m_type("mammifere") {
	std::cout << MAG "default constructor Animal" NC << std::endl;
	return ;
}

Animal::Animal (std::string type) : m_type(type) {
	std::cout << GRN "parametric constructor Animal of type " NC << m_type << std::endl;
	return ;
}

Animal::Animal (const Animal& other) {
	std::cout << YEL "copy constructor Animal" NC << std::endl;
	*this = other;
	return ;
}

Animal& Animal::operator= (const Animal& rhs) {
	m_type = rhs.m_type;
	return *this;
}

Animal::~Animal (void) {
	std::cout << RED "destructor Animal" NC <<std::endl;
	return ;
}

std::string Animal::getType (void) const {
	return (m_type);
}

void	Animal::makeSound(void) const {
		std::cout << "il n'y a pas un bruit" << std::endl;
}