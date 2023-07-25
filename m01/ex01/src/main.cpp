/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 12:19:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Zombie.hpp"

int	main(void) {

	Zombie*	body1 = new Zombie("Bob");
	Zombie*	bodyZ = zombieHorde(-1, "Régis");
	Zombie* horde = zombieHorde(10, "Régis");
	
	delete body1;
	delete [] bodyZ;
	delete [] horde;
	
	return (0);
}
