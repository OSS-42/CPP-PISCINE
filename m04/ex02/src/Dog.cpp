/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 15:20:35 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Dog.hpp"

// -------------- CANNON -----------------
Dog::Dog (void) : AAnimal("default chien") {
	std::cout << MAG "Default Dog" NC << std::endl;
	m_dogBrain = new Brain();
	return ;
}

Dog::Dog (std::string type) : AAnimal(type) {
	std::cout << GRN "Dog is of type " << m_type << std::endl;
	m_dogBrain = new Brain();
	return ;
}

Dog::Dog (const Dog& other) : AAnimal(other), m_dogBrain(new Brain(*other.m_dogBrain)) {
	std::cout << YEL "Copydog" NC << std::endl;
	*this = other ;
	return ;
}

Dog& Dog::operator= (const Dog& rhs) {
	if (this == &rhs)
		return *this;
	*this->m_dogBrain = *rhs.m_dogBrain;
	return  *this;
}

Dog::~Dog (void) {
	std::cout << RED "Dog has disappeared" NC << std::endl;
	delete m_dogBrain;
	return ;
}

void	Dog::getBrain(void) const {
	std::cout << &this->m_dogBrain << std::endl;
	return ;
}

void Dog::makeSound (void) const {
	std::cout << "OUaaf Ouaf" << std::endl;
}