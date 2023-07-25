/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 09:42:38 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"

// -------------- CANNON -----------------
Cat::Cat (void) : Animal("default chat") {
	std::cout << MAG "Cat default" NC << std::endl;
	return ;
}

Cat::Cat (std::string type) : Animal(type) {
	std::cout << GRN "Cat is of type " << m_type << std::endl;
	return ;
}

Cat::Cat (const Cat& other) {
	*this = other ;
	return ;
}

Cat& Cat::operator= (Cat const& rhs) {
	this->m_type = rhs.m_type;
	return  *this;
}

Cat::~Cat (void) {
	std::cout << RED "Cat has disappeared" NC << std::endl;
	return ;
}

void Cat::makeSound (void) const {
	std::cout << "MEaaaooow" << std::endl;
}