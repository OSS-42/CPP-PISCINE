/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:10:59 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:28:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/C.hpp"

C::C (void) {
	std::cout << GRN "C created" NC << std::endl;
}

C::~C(void) {
	std::cout << RED "C destructed" NC << std::endl;
}