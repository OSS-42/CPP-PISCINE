/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 16:48:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FragTrap.hpp"
# include "../inc/ClapTrap.hpp"

// -------------- CANNON -----------------
// default 
FragTrap::FragTrap (void) {
	m_name = "default";
	m_HP = 100;
	m_MP = 100;
	m_AD = 30; 
	std::cout << CYN "FragTrap " << m_name << " appears." NC << std::endl;
	return ;
}

// constructor
FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	m_name = name;
	m_HP = 100;
	m_MP = 100;
	m_AD = 30;
	std::cout << CYN "FragTrap " << m_name << " appears." NC << std::endl;
	return ;
}

// copy
FragTrap::FragTrap (const FragTrap& src) {
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
FragTrap::~FragTrap (void) { 
	std::cout << RED "FragTrap " << m_name << " left." NC << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const& other) {
	this->m_name = other.m_name;
	this->m_HP = other.m_HP;
	this->m_MP = other.m_MP;
	this->m_AD = other.m_AD;
	return *this;
}

// getter

// setter



// ------------ MEMBER FUNCTIONS -------------
void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << m_name << " is looking for a High Five " << std::endl;
	return ;
}