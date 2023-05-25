/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:48:12 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/25 18:49:41 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

Span::Span() : m_size(0), m_vec(0) { }

Span::Span(unsigned int N) : m_size(N), m_vec(N) { 
	
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

Span::~Span() {}

void	Span::addNumber(unsigned int Q) {
	
	if (m_vec.size() >= m_size)
		throw std::runtime_error("Container full.");
	else 
		m_vec.insert(std::end(m_vec), Q);

}

unsigned int Span::getSize(void) {
	return (m_size);
}

// unsigned int longestSpan(void) {
	
// }
