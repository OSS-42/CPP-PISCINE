/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:21:39 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 13:48:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

Data::Data () {
	std::cout << GRN "Data Vault created" NC << std::endl;
}

Data::~Data() {
	std::cout << RED "Data Vault eliminated" NC << std::endl;
}

uintptr_t	Data::getDeserVal(void) const {
	return (m_deserVal);
}

Data*	Data::getserVal(void) const {
	return (m_serVal);
}

uintptr_t	Data::serialize(Data* ptr) {
	m_deserVal = reinterpret_cast<uintptr_t>(ptr);
	return (m_deserVal);
}

Data*	Data::deserialize(uintptr_t raw) {
	m_serVal = reinterpret_cast<Data*>(raw);
	return (m_serVal);
}