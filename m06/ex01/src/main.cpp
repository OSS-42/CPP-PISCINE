/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 16:29:40 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp" 

int	main(void) {

	try {
		Data		Vault;
		uintptr_t	test;
		Data*		test2;
		
		Vault.name = "Hello";
		
		test = serialize(&Vault);
		
		std::cout << "----- SERIALIZATION -----" << std::endl;
		std::cout << MAG "Origin (&Vault): " << &Vault << NC << std::endl;
		std::cout << GRN "Serial (test ): " << test << NC << std::endl;
		std::cout << GRN "Name: " NC << Vault.name << std::endl;
		std::cout << std::endl;
		
		std::cout << "---- DESERIALIZATION ----" << std::endl;
		std::cout << "On change name" << std::endl;
		Vault.name = "World";
		test2 = deserialize(test);
		
		std::cout << GRN "Desere (test2): " << test2 << NC << std::endl;
		std::cout << GRN "Name: " NC << test2->name << std::endl;
		std::cout << CYN "Origin (&Vault): " << &Vault << NC << std::endl;
		std::cout << std::endl;
	}
	catch (...) {
		std::cout << RED ">>> Unexpected error <<<" NC << std::endl;
	}

	return 0;
}