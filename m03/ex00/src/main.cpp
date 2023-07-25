/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 14:27:22 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"

int	main(void) {

	std::cout << "-------------- INITIALIZATION ---------------" << std::endl;
	ClapTrap	John("John Wick");
	ClapTrap	Caine("Caine");
	
	std::cout << std::endl;
	std::cout << "--------------- BASE DATA ---------------" << std::endl;
	std::cout << John.getName() << std::endl;
	std::cout << John.getHP() << " HP" << std::endl;
	std::cout << John.getMP() << " MP" << std::endl;
	std::cout << John.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << Caine.getName() << std::endl;
	std::cout << Caine.getHP() << " HP" << std::endl;
	std::cout << Caine.getMP() << " MP" << std::endl;
	std::cout << Caine.getAD() << " AD" << std::endl;
	
	std::cout << std::endl;
	std::cout << "--------------- COPY ---------------" << std::endl;
	ClapTrap	Deadpool(Caine);
	std::cout << std::endl;
	std::cout << Deadpool.getName() << std::endl;
	std::cout << Deadpool.getHP() << " HP" << std::endl;
	std::cout << Deadpool.getMP() << " MP" << std::endl;
	std::cout << Deadpool.getAD() << " AD" << std::endl;
	
	std::cout << std::endl;
	std::cout << "--------------- OVERLOAD ---------------" << std::endl;
	Deadpool = John;
	std::cout << Deadpool.getName() << std::endl;
	std::cout << Deadpool.getHP() << " HP" << std::endl;
	std::cout << Deadpool.getMP() << " MP" << std::endl;
	std::cout << Deadpool.getAD() << " AD" << std::endl;
	
	std::cout << std::endl;
	std::cout << REDB "--------------- BASIC TESTS EX00 ---------------" NC << std::endl;
	std::cout << std::endl;
	
	John.attack("Caine");
	Caine.takeDamage(6);
	std::cout << std::endl;
	
	Caine.attack("John Wick");
	std::cout << std::endl;
	John.takeDamage(-6);
	std::cout << std::endl;
	John.takeDamage(7);
	std::cout << std::endl;
	
	John.beRepaired(1);
	std::cout << std::endl;
	Caine.beRepaired(-9);
	std::cout << std::endl;
	Caine.beRepaired(3);
	std::cout << std::endl;
	
	Caine.attack("John Wick");
	John.takeDamage(3);

	John.takeDamage(1);
	John.attack("Caine");

	return (0);
}