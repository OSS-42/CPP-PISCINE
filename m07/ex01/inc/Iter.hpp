/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/19 17:57:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

# include <iostream>
# include <iomanip>
# include <string>

/*
void (*function)(T&) represents a function pointer type.

    void (T&) : This indicates the signature of the function. 
	It means a function that takes one argument of type T& (a reference to T) 
	and returns void (no value).

    (*function) : The function is a pointer to a function of the aforementioned type.

void (*function)(T&) is the type of a pointer to a function that takes one
 argument of type T& and returns void.

*/

template<typename T, typename U>
void iter(U* table, size_t length, void (*function)(T&)) {
		for (size_t i = 0; i < length; i++) {
			function(table[i]);
		};
	std::cout << GRN "operation done" NC << std::endl;
}

void addOne(int& num) {
	num++;
}

void addString(std::string& string) {
	string = string + "_iter";
}

#endif