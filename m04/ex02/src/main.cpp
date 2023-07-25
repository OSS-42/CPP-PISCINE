/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:34:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"
# include "../inc/Dog.hpp"
# include "../inc/WrongAnimal.hpp"
# include "../inc/WrongCat.hpp"

using	std::cout;
using	std::endl;

int	main(void) {
	
	// invalid stuff
	// AAnimal *animal = new AAnimal("test");
	
	cout << "Creation Cat & Dog\n" << endl;
	const AAnimal*	j = new Dog();
	const AAnimal*	k = new Cat();
	cout << endl;

	j->makeSound();
	k->makeSound();
	cout << endl;

	delete j;
	delete k; 


	return 0;
}
