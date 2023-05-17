/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:10:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:27:50 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"

A::A (void) {
	std::cout << GRN "A created" NC << std::endl;
}

A::~A(void) {
	std::cout << RED "A destructed" NC << std::endl;
}

