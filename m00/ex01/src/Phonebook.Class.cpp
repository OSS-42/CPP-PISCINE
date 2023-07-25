/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:31 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/27 13:17:17 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.Class.hpp"

Phonebook::Phonebook(void) {
	std::cout << std::endl;
	std::cout << CYN "	▄████▄  ▄████▄   ▄█   ██████" << std::endl;
	std::cout << CYN "	     █  █         █   █     " << std::endl;
	std::cout << CYN "	  ▄███  █████▄    █   ▀████▄" << std::endl;
	std::cout << CYN "	     █  █    █    █        █" << std::endl;
	std::cout << CYN "	▀████▀  ▀████▀   ▄█▄  █████▀" << std::endl << std::endl;
	std::cout << GRN "	#-----# FACE DE BOUC #-----#" NC << std::endl << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {
	std::cout << std::endl;
	std::cout << RED "	Goodbye and See ya Soon on ..." << std::endl;
	std::cout << "	    3615 FACE DE BOUC !" << NC;
	std::cout << std::endl;
	return ;
}

bool	Phonebook::IsPhoneNum(std::string str) const {
	unsigned long	i = 0;

	while (i < str.length()) {
		if (isdigit(str[i]) || str[i] == '-')
			return (true);
		i++;
	}
	return (false);
}

void	Phonebook::setContact(void) {
	int	i = this->getIndex();
	int	j = -1;
	
	std::cout << std::endl;
	std::cout << REDB "Index #" << i << NC;
	std::cout << std::endl;
	while (++j < 5) {
		this->m_Directory[i].setInformation(j);
		while (this->m_Directory[i].getInformation(j).empty()) {
			std::cout << RED "Entry cannot be empty. Retry" NC << std::endl;
			this->m_Directory[i].setInformation(j);
		}
		
		while (j == 3 && this->IsPhoneNum(this->m_Directory[i].getInformation(j)) == 0) {
			std::cout << RED "Format is NUM and '-' only. Retry" NC << std::endl;
			this->m_Directory[i].setInformation(j);
		}
	}
	std::cout << std::endl;
	std::cout << GRN "Contact added." NC << std::endl << std::endl;
	i += 1;
	this->setIndex(i);
}

void	Phonebook::getContact(void) {
	this->showDatabase();	
	
	std::cout << "Enter an Entry Index to Search" << std::endl;
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else if (input.size() > 1 || isdigit(input[0]) == 0 || input[0] > 48 + 7) {
			std::cout << "Choose a value between 0 and 7" << std::endl;
			input.clear();
		}
		else {
			int	i;
			std::istringstream(input) >> i;
			std::cout << std::endl;
			std::cout << REDB "Index #" << input << NC;
			std::cout << std::endl;
			
			int j = -1;
			while (++j < 5) {
				if (j == 0) std::cout << "First Name : " << this->m_Directory[i].getInformation(j) << std::endl;
				if (j == 1) std::cout << "Last Name : " << this->m_Directory[i].getInformation(j) << std::endl;
				if (j == 2) std::cout << "Nickname : " << this->m_Directory[i].getInformation(j) << std::endl;
				if (j == 3) std::cout << "Phone Number : " << this->m_Directory[i].getInformation(j) << std::endl;
				if (j == 4) std::cout << "Darkest Secret : " << this->m_Directory[i].getInformation(j) << std::endl << std::endl;
			}
			break ;
		}
	}
	return ;
}

void	Phonebook::showDatabase(void) {
	std::cout << std::endl;
	std::cout << CYN "-------[ Directory - Face de Bouc ]-------" NC << std::endl << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "   Index  " << "|" << "First Name" << "|" << " Last Name" << "|" << " Nickname " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;

	for (int i = 0; i < 8; ++i) {
		std::string	buffer, First_Name, Last_Name, Nick_Name;
		if (this->m_Directory[i].getInformation(0).size() > 10)
			First_Name = this->m_Directory[i].getInformation(0).substr(0,9) + ".";
		else
			First_Name = this->m_Directory[i].getInformation(0);
			
		if (this->m_Directory[i].getInformation(1).size() > 10)
			Last_Name = this->m_Directory[i].getInformation(1).substr(0,9) + ".";
		else
			Last_Name = this->m_Directory[i].getInformation(1);
			
		if (this->m_Directory[i].getInformation(2).size() > 10)
			Nick_Name = this->m_Directory[i].getInformation(2).substr(0,9) + ".";
		else
			Nick_Name = this->m_Directory[i].getInformation(2);
		std::cout << std::setw(10) << i << "|" << std::setw(10) << First_Name << "|" << std::setw(10) << Last_Name << "|" << std::setw(10) << Nick_Name << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;

	return ;
}

int	Phonebook::getIndex(void) {
	if (this->m_Index > 7)
		this->setIndex(0);
	return (this->m_Index);
}

void	Phonebook::setIndex(int i) {
	this->m_Index = i;
}
