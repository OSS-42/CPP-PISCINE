/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/25 11:35:32 by ewurstei         ###   ########.fr       */
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

Span::Span(unsigned int N) {
	while (m_container.size() < N) {
		addNumber(N);
	}
	throw std::runtime_error("Container full.");
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
	srand((unsigned) time(0));
	unsigned int number = (rand() % N + 1);
	m_container.insert(number);
}

unsigned int longestSpan(void) {
	
}
