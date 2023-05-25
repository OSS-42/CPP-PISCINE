/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/25 15:37:55 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

// Span::Span(unsigned int N) {
// 	srand((unsigned) time(0));
		
// 	while (m_container.size() < N) {
// 		unsigned int start = (rand() % N + 1);
// 		m_container.insert(start);
// 	}
// }

Span::Span() {
	std::set<unsigned int> m_container[0];
}

Span::Span(unsigned int N) {
	std::set<unsigned int> m_container[N];
}

Span::Span(const Span& other) {
	*this = other;
}

Span& Span::operator=(const Span& rhs) {
	if (this == &rhs)
		return (*this);
	return *this;
}

Span::~Span() {}

void	Span::addNumber(unsigned int N) {
	if (m_container.size() > N)
		throw std::runtime_error("Container full.");
	else {
		unsigned int number = (rand() % N + 1);
		m_container.insert(number);
	}
}

	// for (std::set<int>::iterator it = m_container.begin(); it != m_container.end(); ++it) {
	// 	addNumber(N);
	// }

// unsigned int longestSpan(void) {
	
// }
