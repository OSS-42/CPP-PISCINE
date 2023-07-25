/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:22:41 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:16:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Character.hpp"

// Character::Character (void) : m_name("default"), m_idxInventory(0) {
// 	std::cout << GRN "Character Default" NC << std::endl;
// }

Character::Character (std::string name) : m_name(name), m_idxInventory(0) {
	std::cout << GRN "Character named " << m_name << NC << std::endl;
	for (int i = 0; i < 4; i++) {
		m_inventory[i] = NULL;
	}
	for (int i = 0; i < 128; i++) {
		m_dropInventory[i] = NULL;
	}
}

Character::Character (const Character& other) {
	*this = other;
}

Character&	Character::operator= (const Character& rhs) {
	std::cout << YEL "Copy Character" NC << std::endl;
	if (this == &rhs)
		return (*this);
	this->m_name = rhs.m_name;

	for (int i = 0; i < 4; i++) {
		delete m_inventory[i];
		m_inventory[i] = NULL;
	}

	this->m_idxInventory = rhs.m_idxInventory;
	m_idxInventory = 0;
	
	for (int i = 0; i < 4; i++) {
		if (rhs.m_inventory[i])
			this->m_inventory[i] = rhs.m_inventory[i]->clone();
	}

	// for (int i = 0; i < 128; i++) {
	// 	delete m_dropInventory[i];
	// 	m_dropInventory[i] = NULL;
	// }

	// for (int i = 0; i < 128; i++) {
	// 	if (rhs.m_dropInventory[i])
	// 		this->m_dropInventory[i] = rhs.m_dropInventory[i];
	// }

	return (*this);
}

Character::~Character (void) {
	std::cout << RED "Character left, and the inventories too." NC << std::endl;
	for (int i = 0; i < 4; i++) {
		delete m_inventory[i];
		m_inventory[i] = NULL;
	}
	m_idxInventory = 0;

	for (int i = 0; i < 128; i++) {
		delete m_dropInventory[i];
		m_dropInventory[i] = NULL;
	}
}

std::string const & Character::getName() const {
	return (m_name);
}

void Character::equip(AMateria* m) {
	for (int slot = 0; slot < 4; slot++) {
		if (m_inventory[slot] == NULL) {
			m_inventory[slot] = m;
			std::cout << GRN "Materia added to Character inventory at spot #" << slot << NC << std::endl;
			++m_idxInventory;
			return ;
		}
	}
	delete m;
	std::cout << MAG "Inventory full" NC << std::endl;
	return ;
}

void Character::unequip(int idx) {
	if (checkInventoryEmpty() == 0)
		std::cout << MAG "Inventory is empty" NC << std::endl;
	else {
		toDropInventory(m_inventory[idx]);
		m_inventory[idx] = NULL;
		std::cout << GRN "Materia unequipped from spot #" << idx << NC << std::endl;
		--m_idxInventory;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (m_inventory[idx] == NULL) {
		std::cout << RED "Inventory slot is empty" NC << std::endl;
		return ;
	} else {
		m_inventory[idx]->use(target);
		return ;
	}
}

int	Character::checkInventoryEmpty (void) const {
	if (m_idxInventory == 0)
		return (0);
	else
		return (1);
}

void	Character::toDropInventory(AMateria* m) {
	for (int slot = 0; slot < 128; slot++) {
		if (m_dropInventory[slot] == NULL) {
			m_dropInventory[slot] = m;
			std::cout << GRN "Materia dropped on the ground" NC << std::endl;
			return;
		}
	}
	std::cout << RED "Its a mess on the ground, no more place available" NC << std::endl;
}