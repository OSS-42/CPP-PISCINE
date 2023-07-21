/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:06:04 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/21 10:36:33 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(std::list<double> arglist, std::clock_t start) {
	std::cout << GRN "Starting Sorting" NC << std::endl;
	m_vectorStack.assign(arglist.begin(), arglist.end());
	m_dequeStack.assign(arglist.begin(), arglist.end());

	std::cout << MAG "Before sorting: " NC;
	for (std::list<double>::iterator it = arglist.begin(); it != arglist.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// fordJohnsonSort(m_vectorStack.begin(), m_vectorStack.end());
	fordJohnsonSort(m_vectorStack);
	m_vectorTime = (std::clock() - start) * 1000000 / (size_t) CLOCKS_PER_SEC;
	
	// fordJohnsonSort(m_dequeStack.begin(), m_dequeStack.end());
	fordJohnsonSort(m_dequeStack);
	m_dequeTime = (std::clock() - start * 1000000 / (size_t) CLOCKS_PER_SEC);
	m_dequeTime = m_dequeTime - m_vectorTime;

	std::cout << GRN "After  Sorting: " NC ;
	for (double idx = 0; idx < m_vectorStack.size(); ++idx) {
		std::cout << m_vectorStack[idx] << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to sort " << m_vectorStack.size() << " elements in a Vector Container is: " << m_vectorTime << "μs" << std::endl;
	std::cout << "Time to sort " << m_dequeStack.size() << " elements in a Deque  Container is: " << m_dequeTime << "μs" << std::endl;
	
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

// template <typename RandomAccessIterator>
// void PmergeMe::fordJohnsonSort(RandomAccessIterator begin, RandomAccessIterator end) {
//     for (RandomAccessIterator i = begin; i != end; ++i) {
//         // insertion step
//         std::rotate(std::upper_bound(begin, i, *i), i, i+1);

//         // merge step
//         for (RandomAccessIterator j = i+1; j != end; ++j) {
//             if (*j < *i) {
//                 std::rotate(i, j, j+1);
//             }
//         }
//     }
// }

template<typename T>
void PmergeMe::fordJohnsonSort(T& container) {
	if (container.empty()) {
		return;
	}

	std::vector<Pair> pairs;
	for (size_t i = 0; i < container.size() / 2; ++i) {
		Pair pair;
		pair.first = i * 2;
		pair.second = i * 2 + 1;
		pairs.push_back(pair);

		// Sort the pairs
		if (container[pair.first] > container[pair.second]) {
			std::swap(container[pair.first], container[pair.second]);
		}
	}

	// If the size of the container is odd, prepare the last unpaired element
	if (container.size() % 2 != 0) {
		Pair lastPair;
		lastPair.first = lastPair.second = container.size() - 1;
		pairs.push_back(lastPair);
	}

	// Merge the pairs
	for (size_t i = 1; i < pairs.size(); ++i) {
		size_t leftIndex = pairs[i - 1].first;
		size_t leftEnd = pairs[i - 1].second;
		size_t rightIndex = pairs[i].first;
		size_t rightEnd = pairs[i].second;

		std::vector<double> temp;
		while (leftIndex <= leftEnd && rightIndex <= rightEnd) {
			if (container[leftIndex] <= container[rightIndex]) {
				temp.push_back(container[leftIndex++]);
			} else {
				temp.push_back(container[rightIndex++]);
			}
		}
		while (leftIndex <= leftEnd) {
			temp.push_back(container[leftIndex++]);
		}
		while (rightIndex <= rightEnd) {
			temp.push_back(container[rightIndex++]);
		}
		
		// Copy the merged elements back into the container
		std::copy(temp.begin(), temp.end(), &container[pairs[i - 1].first]);
		
		// Update the pair
		pairs[i].first = pairs[i - 1].first;
		pairs[i].second = rightEnd;
	}
}

// `jot -r 3000 1 1000 | tr '\n' ' '`