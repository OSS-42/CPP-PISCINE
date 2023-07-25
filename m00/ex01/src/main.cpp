/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:47:09 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/27 00:06:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <istream>
# include <sstream>
# include <string>
# include "../inc/Phonebook.Class.hpp"

# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

int main (int argc, char **argv) { 

	(void) argv;
	
	if (argc > 1) {
		std::cout << "Usage : ./facedebouc" << std::endl;
		return 0;
	}

	Phonebook FacedeBouc;
	std::string input;

	while (1) {
		std::cout << std::endl;
		std::cout << "To create a new contact, type " << GRN "ADD" NC << std::endl;
		std::cout << "To search a contact, type " << CYN "SEARCH" NC << std::endl;
		std::cout << "To quit, type " << RED "EXIT" NC << std::endl;
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof()) {
			exit (0);
		} else if (input.compare("ADD") == 0) {
			FacedeBouc.setContact();
		} else if (input.compare("SEARCH") == 0) {
			FacedeBouc.getContact();
		} else if (input.compare("EXIT") == 0) {
			break ;
		} else {
			input.clear();
		}
	}	
	return 0;
}
