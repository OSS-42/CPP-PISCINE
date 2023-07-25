/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 13:47:32 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"
# include "../inc/ClapTrap.hpp"

// -------------- CANNON -----------------
// default 
DiamondTrap::DiamondTrap (void) {
	m_name = "default";
	std::cout << CYN "DiamondTrap " << m_name << " has shown." NC << std::endl;
	return ;
}

// constructor
DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	m_name = name;
	ClapTrap::m_name = m_name + "_clap_name";
	m_HP = 100;
	m_MP = 50;
	m_AD = 30;
	std::cout << CYN "DiamondTrap " << m_name << " has shown." NC << std::endl;
	return ;
}

// copy
DiamondTrap::DiamondTrap (const DiamondTrap& src) {
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
DiamondTrap::~DiamondTrap (void) { 
	std::cout << RED "DiamondTrap " << m_name << " has retired." NC << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& other) {
	this->m_name = other.m_name;
	this->m_HP = other.m_HP;
	this->m_MP = other.m_MP;
	this->m_AD = other.m_AD;
	return *this;
}

// getter

// setter

// ------------ MEMBER FUNCTIONS -------------
void	DiamondTrap::whoAmI() {
	std::cout << "I AM " << RED;
	std::cout << m_name;
	std::cout << NC << std::endl;

	std::cout << "HIS NAME IS : " << GRN;
	std::cout << ClapTrap::m_name;
	std::cout << NC << std::endl;
	
	return ;
}