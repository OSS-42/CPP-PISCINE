/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:10:33 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 15:48:43 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Base.hpp"

Base::~Base() {
	std::cout << RED "Base destroyed" NC << std::endl;
}

Base*	generate(void) {
	srand((unsigned) time(0));
	int dice = (rand() % 3);
	
	switch (dice) {
		case (1):
			A classA = new A;
			return (classA);
		case (2):
			B classB = new B;
			return (classB);
		case (3):
			C classC = new C;
			return (classC);
	}
	return (NULL);
}

void	identify(Base* p) {
	try {
		A* test = dynamic_Cast<A*>(p);
		if (test)
			std::cout << 
	}
	
}

void	identify(Base& p) {
	
}