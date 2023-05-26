/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/26 10:30:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

Span::Span() : m_size(0), m_vec() { }

Span::Span(unsigned int N) : m_size(N), m_vec() { 
	
}

Span::Span(const Span& other) {
	*this = other;
}

Span& Span::operator=(const Span& rhs) {
	if (this == &rhs)
		return (*this);
	m_size = rhs.m_size;
	m_vec = rhs.m_vec;
	return *this;
}

Span::~Span(void) {}

void	Span::addNumber(unsigned int Q) {
	
	if (m_vec.size() >= m_size)
		throw std::runtime_error("Container full.");
	else 
		m_vec.insert(std::end(m_vec), Q);

}

unsigned int Span::getSize(void) const {
	return (m_size);
}

void Span::printValues(void) const {
	std::cout << "Values in Vector : ";
	for (std::vector<unsigned int>::const_iterator it = m_vec.begin(); it != m_vec.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

unsigned int Span::longestSpan(void) {
	if (m_vec.size() < 2)
		throw std::runtime_error("Two few stored values.");
	unsigned int	max = *std::max_element(m_vec.begin(), m_vec.end());
	unsigned int	min = *std::min_element(m_vec.begin(), m_vec.end());
	
	return (max - min);
}

unsigned int Span::shortestSpan(void) {
	if (m_vec.size() < 2)
		throw std::runtime_error("Two few stored values.");
	
	std::vector<unsigned int> sorted(m_vec);
	std::sort(sorted.begin(), sorted.end());
	
	unsigned int minSpan = sorted[1] - sorted[0];
	
	for (size_t idx = 2; idx < sorted.size(); ++idx) {
		unsigned int testSpan = sorted[idx] - sorted[idx-1];
		if (testSpan < minSpan)
			minSpan = testSpan;
	}
	return (minSpan);
}
	
void	Span::addBigNumbers(void) {
	srand((unsigned) time(0));

	std::vector<unsigned int> random;
	for (unsigned int i = 0; i < m_size; ++i) {
		unsigned int value = (rand() % 30000 + 1);
		random.push_back(value);
	}

	for (std::vector<unsigned int>::iterator it = random.begin(); it != random.end(); ++it) {
		addNumber(*it);
	}
}
