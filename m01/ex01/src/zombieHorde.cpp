/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:47:25 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 12:18:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N > 0)
	{
		Zombie* Horde = new Zombie[N];
		for(int i = 0; i < N; i++) {
			Horde[i].setName(name);
			Horde[i].announce();	
		}
		return (Horde);
	}
	else {
		std::cout << "Parametre invalide" << std::endl;
		return (NULL);
	}
}
