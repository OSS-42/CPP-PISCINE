/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/16 17:54:55 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Vault.hpp"

// ---- Other ways to convert
// float :
// float newValue;
// std::stringstream ss;
// ss << value;
// ss >> newValue;
//
// or float newValue = static_cast<float>(value);
// etc.

int	main(int argc, char** argv) {
	Vault	convert;
	if (argc != 2)
		std::cout << RED " usage: ./scalaire [arg]" NC << std::endl;

	std::string value = argv[1];
	
	try {
			convert.setChar(value);
	}
	catch (std::exception& e) {
		std::cerr << RED "Char Conversion error : " << e.what() << NC << std::endl;
	}

	try {
			convert.setInt(value);
	}
	catch (std::exception& e) {
		std::cerr << RED "Int Conversion error : " << e.what() << NC << std::endl;
	}

	try {
			convert.setDouble(value);
	}
	catch (std::exception& e) {
		std::cerr << RED "Double Conversion error : " << e.what() << NC << std::endl;
	}

	try {
			convert.setFloat(value);
	}
	catch (std::exception& e) {
		std::cerr << RED "Float Conversion error : " << e.what() << NC << std::endl;
	}

	return 0;
}