/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:51:29 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Materia.hpp"
# include "../inc/MateriaSource.hpp"
# include "../inc/Character.hpp"
# include "../inc/Ice.hpp"
# include "../inc/Cure.hpp"

int	main(void) {
	std::cout << REDB "------- Main Test -------" NC << std::endl;
	std::cout << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	// me->equip(tmp);
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	
	std::cout << "\n" << REDB "------- Full Inventory tests -------" NC << std::endl;
	std::cout << std::endl;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	me->use(2, *me);
	me->use(3, *me);
	std::cout << std::endl;

	me->unequip(3);
	me->unequip(2);
	std::cout << std::endl;

	me->use(1, *me);
	me->use(2, *me);
	std::cout << std::endl;

	std::cout << REDB "\n ------- Deep Copy tests -------" NC << std::endl;
	std::cout << std::endl;
	
	Character *newme = new Character("newme");
	Character *newbob = new Character("newbob");
	std::cout << std::endl;

	std::cout << "equip newbob" << std::endl;
	tmp = src->createMateria("ice");
	newbob->equip(tmp);
	tmp = src->createMateria("cure");
	newbob->equip(tmp);
	std::cout << std::endl;
	
	std::cout << "equip newme" << std::endl;
	tmp = src->createMateria("cure");
	newme->equip(tmp);
	tmp = src->createMateria("ice");
	newme->equip(tmp);
	std::cout << std::endl;
	newme->use(0, *me);
	std::cout << std::endl;

	*newme = *newbob;
	std::cout << "address newme vs newbob : " << &newme << " vs " << &newbob << std::endl;
	std::cout << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	newme->use(0, *bob);
	newbob->use(0, *me);
	newbob->use(1, *me);
	std::cout << std::endl;
	
	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	delete newbob;
	std::cout << std::endl;
	delete newme;
	return 0;
}
