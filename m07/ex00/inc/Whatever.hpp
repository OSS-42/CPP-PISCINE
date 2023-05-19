/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/19 15:36:25 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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

template<typename T>
void swap(T& lhs, T& rhs) {
	T buff;
	buff = lhs;
	lhs = rhs;
	rhs = buff;
	std::cout << GRN "swap done" NC << std::endl;
}

template<typename T>
const T min(T lhs, T rhs) {
	return ((lhs <= rhs) ? lhs : rhs);
}

template<typename T>
const T max(T lhs, T rhs) {
	return ((lhs >= rhs) ? lhs : rhs);
}

#endif