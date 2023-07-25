/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 09:53:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Sed.hpp"

int main(int argc, char **argv) {
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3]) {
		std::cout << "Bad arguments. Retry" << std::endl;
		return 1;
	}
	else {
		createFiles(argv);
	}
	return 0;
}
