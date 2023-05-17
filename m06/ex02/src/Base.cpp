/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:10:33 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 18:35:10 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"

class Base 	{public: virtual ~Base(void) {} };
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base*	generate(void) {
	srand((unsigned) time(0));
	int dice = (rand() % 3);
	
	switch (dice) {
		case (0): {
			A* classA = new A;
			return (classA);
		}
		case (1): {
			B* classB = new B;
			return (classB);
		}
		case (2): {
			C* classC = new C;
			return (classC);
		}
	}
	return (NULL);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << GRN "p is an object of type class A" NC << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << CYN "p is an object of type class B" NC << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << MAG "p is an object of type class C" NC << std::endl;
	else
		std::cout << RED "p is an OVNI" NC << std::endl;
}

void	identify(Base& p) {
	try {
		A& testA = dynamic_cast<A&>(p);
		(void) testA;
		std::cout << GRN "p is an object of type class A" NC << std::endl;
	}
	catch(std::bad_cast& bc) {
		try {
			B& testB = dynamic_cast<B&>(p);
			(void) testB;
			std::cout << CYN "p is an object of type class B" NC << std::endl;
		}
		catch (std::bad_cast& bc) {
			try {
				C& testC = dynamic_cast<C&>(p);
				(void) testC;
				std::cout << MAG "p is an object of type class C" NC << std::endl;
			}
			catch (std::bad_cast& bc) {
				std::cout << RED "p is an OVNI : " NC << bc.what() << std::endl;
			}
		}
	}
}

int	main(void) {
	
	Base*	test = generate();
	std::cout << "---- Identify * ----" << std::endl;
	identify(*test);
	std::cout << std::endl;

	std::cout << "---- Identify & ----" << std::endl;
	identify(*test);

	delete test;
	
	return 0;
}