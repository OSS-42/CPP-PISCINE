/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:09:33 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 15:44:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Cure.hpp"

Cure::Cure (void) : AMateria("cure") {
	std::cout << GRN "Default Constr Cure" NC << std::endl;
	return ;
}

Cure::Cure (const Cure& other) {
	std::cout << YEL "Copy Cure" NC << std::endl;
	*this = other;
}

Cure& Cure::operator= (const Cure& rhs) {
	if (this == &rhs)
		return *this;
	return (*this);
}

Cure::~Cure (void) {
	std::cout << RED "Cure faded" NC << std::endl;
}

void	Cure::use(ICharacter& target) {
	std::cout << GRN "* heals " << target.getName() << "'s wounds *" NC << std::endl;
}

Cure*	Cure::clone(void) const {
	return (new Cure);
}