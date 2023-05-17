/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 16:54:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.cpp"

int	main(void) {
	
	Base* test = generate();
	std::cout << "---- Identify * ----" << std::endl;
	identify(test);
	std::cout << std::endl;

	std::cout << "---- Identify & ----" << std::endl;
	identify(&test);
	return 0;
}