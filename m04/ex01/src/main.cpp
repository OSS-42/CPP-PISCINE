/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:31:52 by ewurstei         ###   ########.fr       */
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
	
	cout << "Creation Cat & Dog\n" << endl;
	const Animal*	j = new Dog();
	const Animal*	k = new Cat();

	delete	j;
	delete	k;
	cout << endl;
	cout << "Creation Cats x5 & Dogs x5\n" << endl;
	Animal*	Zoo[10];
	for (int i = 0; i < 5; i++) {
		Zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i++) {
		Zoo[i] = new Cat();
	}
	
	cout << "\n------ Deep Copy test ------" << endl;
	Cat		Chat1;
	Cat		Chat2(Chat1);
	Cat		Chat3 = Chat1;

	cout << "\nBrain addresses " << endl;
	cout << "Chat1 = " << Chat1.getBrain() << std::endl;
	cout << "Chat2 = " << Chat2.getBrain() << std::endl;
	cout << "Chat3 = " << Chat3.getBrain() << std::endl;

	cout << "\n------ Second Deep Copy Test ------" << endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	cout << "\n ######### END OF TESTS #########" << endl;
	
	// cout << "Chat1 = " << Chat1->getBrain() << endl;
	// cout << "Chat2 = " << Chat2->getBrain() << endl;
	// cout << "Chat3 = " << Chat3->getBrain() << endl;

	for (int i = 0; i < 10; i++) {
		delete Zoo[i];
	}
	
	return 0;
}
