/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:09:53 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 15:46:47 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Ice.hpp"

Ice::Ice (void) : AMateria("ice") {
	std::cout << GRN "Default Constr Ice" NC << std::endl;
	return ;
}

Ice::Ice (const Ice& other) {
	std::cout << YEL "Copy Ice" NC << std::endl;
	*this = other;
}

Ice& Ice::operator= (const Ice& rhs) {
	if (this == &rhs)
		return *this;
	return (*this); 
}

Ice::~Ice (void) {
	std::cout << RED "Ice melted" NC << std::endl;
}

void	Ice::use(ICharacter& target) {
	std::cout << CYN "* shoots an ice bolt at " << target.getName() << " *" NC << std::endl;
}

Ice*	Ice::clone(void) const {
	return (new Ice);
}