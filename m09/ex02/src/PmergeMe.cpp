/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:06:04 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/18 14:37:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(std::string arglist) {
	std::cout << GRN "Starting Sorting" NC << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
	if (this == &rhs)
		return *this;
		
	return *this;
}

PmergeMe::~PmergeMe(void) {
	std::cout << RED "Sorting Finished" NC << std::endl;
}