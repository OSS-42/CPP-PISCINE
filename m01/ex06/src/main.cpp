/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:05:58 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/10 10:47:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HarlFilter.hpp"

int	main(int argc, char **argv) {
	
if (argc != 2)
		std::cout << "Bad arguments. Retry" << std::endl;
	else {
		Harl pasContent;
		pasContent.complain(argv[1]);
	}
	
	return (0);
}
