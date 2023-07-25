/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:05:58 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/10 13:26:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Weapon.hpp"
# include "../inc/HumanA.hpp"
# include "../inc/HumanB.hpp"

int	main( void ) {
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA bob("bob", club);
		bob.attack();
		club.setType("Metal hammer");
		bob.attack();
	}
		std::cout << std::endl;
	{
		Weapon club2 = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("sword");
		jim.attack();
	}
	return (0);
}
