/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:06:04 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/20 11:04:53 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	std::clock_t start = std::clock();
	fordJohnsonSort(m_vectorStack);
	m_vectorTime = ( std::clock() - start ) * 1000000 / (size_t) CLOCKS_PER_SEC;
	
	start = std::clock();
	fordJohnsonSort(m_dequeStack);
	m_dequeTime = ( std::clock() - start ) * 1000000 / (size_t) CLOCKS_PER_SEC;

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

template<typename T>
void PmergeMe::fordJohnsonSort(T& container) {
	size_t	n = container.size();

	std::vector<Pair> pairs(n / 2);
	size_t pairsSize = n / 2;

	for (size_t i = 0; i < pairsSize; ++i) {
		pairs[i].first = i * 2;
		pairs[i].second = i * 2 + 1;
		if (container[pairs[i].first] > container[pairs[i].second]) {
			std::swap(container[pairs[i].first], container[pairs[i].second]);
		}
	}

	std::sort(pairs.begin(), pairs.end(), [&](const Pair &a, const Pair &b) {
		return container[a.second] < container[b.second];
	});
	
	std::vector<size_t> temp(n);
	for (size_t i = 0; i < pairsSize; ++i) {
		temp[i] = container[pairs[i].second];
	}
	size_t j = pairsSize;
	if (n % 2 == 1) {
		temp[j++] = container[n - 1];
	}
	for (size_t i = pairsSize; i-- > 0;) {
		temp[j++] = container[pairs[i].first];
	}

	size_t i = 0, k = n;
	for (j = 0; j < n; j++) {
		if (k <= n && (i == pairsSize || temp[i] > temp[k])) {
			container[j] = temp[k++];
		} else {
			container[j] = temp[i++];
		}
	}
}
