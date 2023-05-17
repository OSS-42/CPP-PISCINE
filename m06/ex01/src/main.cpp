/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 15:57:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp" 

int	main(void) {

	try {
		Data		Vault;
		uintptr_t	test;
		Data*		test2;
		
		test = serialize(&Vault);
		test2 = deserialize(test);

		std::cout << "----- SERIALIZATION -----" << std::endl;
		std::cout << MAG "Origin (&Vault): " << &Vault << NC << std::endl;
		std::cout << GRN "Serial (test): " << test << NC << std::endl;
		std::cout << std::endl;
		std::cout << "---- DESERIALIZATION ----" << std::endl;
		std::cout << MAG "Serial (test): " << test << NC << std::endl;
		std::cout << GRN "Desere (test2): " << test2 << NC << std::endl;
		std::cout << CYN "Origin (&Vault): " << &Vault << NC << std::endl;
		std::cout << std::endl;

		Data*	Vault2;
		uintptr_t	test3;
		Data*		test4;

		Vault2 = NULL;
		test3 = serialize(Vault2);
		test4 = deserialize(test3);
		std::cout << "----- SERIALIZATION -----" << std::endl;
		std::cout << MAG "Origin (&Vault): " << Vault2 << NC << std::endl;
		std::cout << GRN "Serial (test): " << test3 << NC << std::endl;
		std::cout << std::endl;
		std::cout << "---- DESERIALIZATION ----" << std::endl;
		std::cout << MAG "Serial (test): " << test3 << NC << std::endl;
		std::cout << GRN "Desere (test2): " << test4 << NC << std::endl;
		std::cout << CYN "Origin (&Vault): " << Vault2 << NC << std::endl;
		std::cout << std::endl;
	}
	catch (...) {
		std::cout << RED ">>> Unexpected error <<<" NC << std::endl;
	}

	return 0;
}