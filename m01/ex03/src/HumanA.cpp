/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/03 14:26:34 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_type(weapon) {
	std::cout << this->m_name << " salut son adversaire." << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << this->m_name << " has been killed" << std::endl;
}

void	HumanA::attack(void) const {
	// <name> attacks with their <weapon type>
	std::cout << this->getName() << " attack with their " << this->m_type.getType() << std::endl;
}

std::string		HumanA::getName(void) const {
	return (this->m_name);
}

void	HumanA::setName(std::string name) {
	this->m_name = name;
}
