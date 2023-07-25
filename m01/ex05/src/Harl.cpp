/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/10 10:04:14 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl has been activated." << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl has been deactivated." << std::endl;
}

void Harl::complain(std::string level) {
	// array with level name triggers
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	// array with corresponding function calls
	void (Harl::*response[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};

	// looping through the arrays to check for correspondances
	for (int i = 0; i < 4; i++) {
		if (!levels[i].compare(level)) {
			(this->*response[i])();
			return ;
		}
	}

	// when no correspondance is found
	std::cout << GRN "Harl n'a rien a dire" NC << std::endl;
	return ;
}

void	Harl::debug(void) {
	std::cout << YEL "Osti de pourri, c'est pourri pas mal." NC << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << CYN "Mais Osti de câlisse de pourri, ca ca commence a vraiment être pourri." NC << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << MAG "Mais on m'a déja traité d'esti de pourri de tabarnac" NC << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << RED "Mais on peut le conjuguer aussi. " NC << std::endl;
	return ;
}
