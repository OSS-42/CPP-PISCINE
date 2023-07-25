/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:00:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:56:57 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource (void) : m_idxSourceInventory(0) {
	std::cout << YEL "MSource default" NC << std::endl;
	for (int slot = 0; slot < 4; slot++) {
		m_sourceInventory[slot] = NULL;
	}
}

MateriaSource::MateriaSource (const MateriaSource& other) {
	*this = other;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

MateriaSource::~MateriaSource (void) {
	std::cout << RED "MSource phased out" NC << std::endl;
	for (int i = 0; i < 4; i++) {
		delete m_sourceInventory[i];
		m_sourceInventory[i] = NULL;
	}
	m_idxSourceInventory = 0;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int slot = 0; slot < 4; slot++) {
		if (m_sourceInventory[slot] == NULL) {
			m_sourceInventory[slot] = m;
			std::cout << GRN "SourceMateria added to Source inventory at spot #" << slot << NC << std::endl;
			++m_idxSourceInventory;
			return ;
		}
	}
	// delete m;
	std::cout << MAG "MSource Inventory full" NC << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type != "ice" && type != "cure") {
		std::cout << RED "Materia Inconnue" NC << std::endl;
		return 0;
	} else {
		for (int slot = 0; slot < 4; slot++) {
			if (type.compare(m_sourceInventory[slot]->getType()) == 0)
				return (m_sourceInventory[slot]->clone());
		}
	}
	return 0;
}