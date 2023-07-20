/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:06:04 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/19 23:55:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(std::list<double> arglist) {
	std::cout << GRN "Starting Sorting" NC << std::endl;
	m_vectorStack.assign(arglist.begin(), arglist.end());
	m_dequeStack.assign(arglist.begin(), arglist.end());

	std::cout << MAG "Before sorting: " NC;
	for (std::list<double>::iterator it = arglist.begin(); it != arglist.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	fordJohnsonSort(m_vectorStack);
	fordJohnsonSort(m_dequeStack);

	std::cout << GRN "\nAfter Sorting: " NC ;
	for (double idx = 0; idx < m_vectorStack.size(); ++idx) {
		std::cout << m_vectorStack[idx] << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to sort " << m_vectorStack.size() << "elements in a Vector Container is: " << m_vectorTime << "us";
	std::cout << "Time to sort " << m_dequeStack.size() << "elements in a Deque Container is: " << m_dequeTime << "us";
	
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

template<typename T>
void PmergeMe::fordJohnsonSort(T& container) {
	// Create and sort the pairs
	Pair* pairs = new Pair[container.size() / 2];
	size_t pairsSize = container.size() / 2;
	for (size_t i = 0; i < pairsSize; ++i) {
		pairs[i].first = i * 2;
		pairs[i].second = i * 2 + 1;
		if (container[pairs[i].first] > container[pairs[i].second]) {
			// Swap elements in container to make sure the pair is sorted
			std::swap(container[pairs[i].first], container[pairs[i].second]);
		}
	}

	// Handle the last unpaired element if the size is odd
	If (container.size() % 2 == 0)
		size_t oddElementIndex = container.size()
	else
		size_t oddElementIndex = container.size() - 1;

	// The index where the sorted section ends and the unsorted section begins
	size_t sortedEnd = 0;

	// While there are still pairs left
	while (pairsSize > 0) {
		// Find the pair with the smallest element
		size_t minIndex = 0;
		for (size_t i = 1; i < pairsSize; ++i) {
			if (container[pairs[i].first] < container[pairs[minIndex].first]) {
				minIndex = i;
			}
		}

		// If the smallest element in the pairs is larger than the odd element, place the odd element in the sorted section
		if (container.size() % 2 != 0 && container[pairs[minIndex].first] > container[oddElementIndex]) {
			std::swap(container[sortedEnd], container[oddElementIndex]);
			oddElementIndex = sortedEnd;
		} else {
			// Move the smallest element to the end of the sorted section
			std::swap(container[sortedEnd], container[pairs[minIndex].first]);
			++sortedEnd;

			// If the pair now only has one element, remove it from the pairs
			if (pairs[minIndex].first != pairs[minIndex].second) {
				pairs[minIndex].first = pairs[minIndex].second;
			} else {
				pairs[minIndex] = pairs[pairsSize - 1];
				--pairsSize;
			}
		}
	}

	// If the last unpaired element is still unsorted, move it to the end of the sorted section
	if (container.size() % 2 != 0 && oddElementIndex != container.size() - 1) {
		std::swap(container[container.size() - 1], container[oddElementIndex]);
	}

	delete[] pairs;
}