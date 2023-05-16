/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/16 14:42:36 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Vault.hpp"

// ---- Other ways to convert
// float :
// float newValue;
// std::stringstream ss;
// ss << value;
// ss >> newValue;
// or float newValue = static_cast<float>(value);
// etc.

int	main(int argc, char** argv) {
	try {
		Vault	convert;
		if (argc != 2)
			throw std::exception();
		else {
			std::string value = argv[1];
			convert.setChar(value);
			convert.setDouble(value);
			convert.setFloat(value);
			convert.setInt(value);
			std::cout << convert << std::endl;
		}
	}
	catch (std::exception& e) {
		std::cout << e.what() << RED " usage: ./scalaire [arg]" NC << std::endl;
	}

	return 0;
}