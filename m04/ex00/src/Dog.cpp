/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 09:42:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Dog.hpp"

// -------------- CANNON -----------------
Dog::Dog (void) : Animal("default chien") {
	std::cout << MAG "Dog default" NC << std::endl;
	return ;
}

Dog::Dog (std::string type) : Animal(type) {
	std::cout << GRN "Dog is of type " << m_type << std::endl;
	return ;
}

Dog::Dog (const Dog& other) {
	*this = other ;
	return ;
}

Dog& Dog::operator= (Dog const& rhs) {
	this->m_type = rhs.m_type;
	return  *this;
}

Dog::~Dog (void) {
	std::cout << RED "Dog has disappeared" NC << std::endl;
	return ;
}

void Dog::makeSound (void) const {
	std::cout << "OUaaf Ouaf" << std::endl;
}