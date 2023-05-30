/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/29 15:33:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/MutantStack.hpp"
# include <cstdlib>

int main() {
	
	MutantStack<int> mstack;
	
	std::cout << "----- BASIC TESTS -----" << std::endl;
	std::cout << "adding 5 to the stack";
	mstack.push(5);
	std::cout << std::endl;
	std::cout << "adding 17 to the stack";
	mstack.push(17);
	std::cout << std::endl;
	std::cout << "\n" << "Top of stack is : " << mstack.top() << std::endl;
	
	std::cout << "\n" << "removing (pop) a number from the stack";
	mstack.pop();
	std::cout << std::endl;
	std::cout << " \n" << "Size of stack is : " << mstack.size() << std::endl;
	
	std::cout << GRN "Adding other numbers to stack" NC << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push('a');

	std::cout << CYN "Setting up iterators" NC << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	
	std::cout << YEL "\nLet's see that MutantStack" NC << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	return 0;
}