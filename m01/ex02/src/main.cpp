/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 14:36:57 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

int	main(void) {

	std::string brain = "HI THIS IS BRAIN";
	std::string*	ptrBrain = &brain;
	std::string&	refBrain = brain;
	
	// all addresses and values should be the same.
	std::cout << GRN "----- Adresses -----" NC << std::endl;
	std::cout << "Initial: " << &brain << std::endl;
	std::cout << "De PTR : " << ptrBrain << std::endl;
	std::cout << "De REF : " << &refBrain << std::endl << std::endl;

	std::cout << CYN "------ Values ------" NC << std::endl;
	std::cout << "Initial: " << brain << std::endl;
	std::cout << "De PTR : " << *ptrBrain << std::endl;
	std::cout << "De REF : " << refBrain << std::endl << std::endl;
	
	return (0);
}
