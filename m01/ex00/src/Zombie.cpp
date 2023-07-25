/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/28 16:21:58 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name) {
	std::cout << this->m_name << " est apparu" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->m_name << " has been killed" << std::endl;
}