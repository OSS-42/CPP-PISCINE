/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:45 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Dog.hpp"

// -------------- CANNON -----------------
Dog::Dog (void) : Animal("default chien") {
	std::cout << MAG "Default Dog" NC << std::endl;
	m_dogBrain = new Brain();
	return ;
}

Dog::Dog (std::string type) : Animal(type) {
	std::cout << GRN "Dog is of type " << m_type << std::endl;
	m_dogBrain = new Brain();
	return ;
}

Dog::Dog (const Dog& other) : Animal(other), m_dogBrain(new Brain(*other.m_dogBrain)) {
	std::cout << YEL "Copydog" NC << std::endl;
	*this = other ;
	return ;
}

Dog& Dog::operator= (const Dog& rhs) {
	if (this == &rhs)
		return *this;
	this->m_type = rhs.m_type;
	*this->m_dogBrain = *rhs.m_dogBrain;
	return  *this;
}

Dog::~Dog (void) {
	std::cout << RED "Dog has disappeared" NC << std::endl;
	delete m_dogBrain;
	return ;
}

Brain*	Dog::getBrain(void) const {
	return (this->m_dogBrain);
}

void Dog::makeSound (void) const {
	std::cout << "OUaaf Ouaf" << std::endl;
}