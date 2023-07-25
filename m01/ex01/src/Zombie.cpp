/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 12:19:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name) {	
	std::cout << this->m_name << " essaye de dire bonjour..." << std::endl;
}

Zombie::Zombie(void) {
	std::cout << "Un zombie est apparu." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->m_name << " has been killed" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->m_name = name;
}

std::string	Zombie::getName(void) {
	return (this->m_name);
}
