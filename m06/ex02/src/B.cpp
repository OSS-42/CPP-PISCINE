/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:10:52 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:28:22 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/B.hpp"

B::B (void) {
	std::cout << GRN "B created" NC << std::endl;
}

B::~B(void) {
	std::cout << RED "B destructed" NC << std::endl;
}