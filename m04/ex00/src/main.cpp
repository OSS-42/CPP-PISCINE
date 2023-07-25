/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:28:14 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"
# include "../inc/Dog.hpp"
# include "../inc/WrongAnimal.hpp"
# include "../inc/WrongCat.hpp"

int	main(void) {

	std::cout << "Creation Meta, Dog puis Chat" << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	
	std::cout << MAG "Qui est Qui ?" NC << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << MAG "Qui dit Quoi ?" NC << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	
	std::cout << "Suppression Meta, Dog puis Chat" << std::endl;
	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << "-----------------------" << "\n" << std::endl;
	std::cout << "Creation Meta2 puis WrongChat" << std::endl;
	const Animal* meta2 = new Animal();
	std::cout << std::endl;
	const Animal* m = new Dog();
	std::cout << std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;
	const WrongCat* o = new WrongCat();
	std::cout << std::endl;
	
	std::cout << MAG "Qui est Qui ?" NC << std::endl;
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << o->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << MAG "Qui dit Quoi ?" NC << std::endl;
	meta2->makeSound();
	m->makeSound();
	k->makeSound(); //will output the cat sound!
	o->makeSound();
	std::cout << std::endl;
	
	std::cout << "Suppression Meta puis Chat" << std::endl;
	delete meta2;
	std::cout << std::endl;
	delete m;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;
	delete o;
	std::cout << std::endl;

	return 0;
}