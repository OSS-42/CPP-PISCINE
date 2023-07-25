/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 10:17:38 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/WrongAnimal.hpp"
# include "../inc/WrongCat.hpp"

// -------------- CANNON -----------------
WrongCat::WrongCat (void) : WrongAnimal("default WrongCat") {
	std::cout << MAG "WrongCat default" NC << std::endl;
	return ;
}

WrongCat::WrongCat (std::string type) : WrongAnimal(type) {
	std::cout << GRN "WrongCat is of type " << m_type << std::endl;
	return ;
}

WrongCat::WrongCat (const WrongCat& other) {
	*this = other ;
	return ;
}

WrongCat& WrongCat::operator= (WrongCat const& rhs) {
	this->m_type = rhs.m_type;
	return  *this;
}

WrongCat::~WrongCat (void) {
	std::cout << RED "WrongCat has disappeared" NC << std::endl;
	return ;
}

void WrongCat::makeSound (void) const {
	std::cout << "Oh oh, j'ai cru voir un Gros Minet" << std::endl;
}